
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int *VAR_1, int *VAR_2)
{
 static const char VAR_3[] = "0123456789";
 const char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = VAR_0 + 4;
 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (VAR_4[VAR_6] == ',') {
  VAR_4 += VAR_6 + 1;
  VAR_6 = FUNC_1(VAR_4, VAR_3);
 }
 if (VAR_6 == 0 || VAR_4[VAR_6] != ' ' || VAR_4[VAR_6+1] != '+')
  return 0;

 VAR_5 = VAR_4 + VAR_6 + 2;
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_5[VAR_6] == ',') {
  VAR_5 += VAR_6 + 1;
  VAR_6 = FUNC_1(VAR_5, VAR_3);
 }
 if (VAR_6 == 0)
  return 0;

 *VAR_1 = FUNC_0(VAR_4);
 *VAR_2 = FUNC_0(VAR_5);
 return 1;
}
