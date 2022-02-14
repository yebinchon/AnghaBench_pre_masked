
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (size_t,int) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0)
{
 size_t VAR_1 = FUNC_2(VAR_0);
 if (VAR_0[VAR_1 - 1] != '/') {
  char *VAR_2 = FUNC_3(FUNC_1(VAR_1, 2));
  FUNC_0(VAR_2, VAR_0, VAR_1);
  VAR_2[VAR_1++] = '/';
  VAR_2[VAR_1] = 0;
  return VAR_2;
 }
 return VAR_0;
}
