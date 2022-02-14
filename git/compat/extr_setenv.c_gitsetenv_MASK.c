
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (size_t,size_t,int) ;
 scalar_t__ FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6;
 size_t VAR_7, VAR_8;
 char *VAR_9;

 if (!VAR_3 || FUNC_5(VAR_3, '=') || !VAR_4) {
  VAR_2 = VAR_0;
  return -1;
 }
 if (!VAR_5) {
  char *VAR_10 = ((void*)0);
  VAR_10 = FUNC_0(VAR_3);
  if (VAR_10) return 0;
 }

 VAR_7 = FUNC_6(VAR_3);
 VAR_8 = FUNC_6(VAR_4);
 VAR_9 = FUNC_1(FUNC_4(VAR_7, VAR_8, 2));
 if (!VAR_9) {
  VAR_2 = VAR_1;
  return -1;
 }

 FUNC_2(VAR_9, VAR_3, VAR_7);
 VAR_9[VAR_7] = '=';
 FUNC_2(VAR_9 + VAR_7 + 1, VAR_4, VAR_8);
 VAR_9[VAR_7 + VAR_8 + 1] = 0;

 VAR_6 = FUNC_3(VAR_9);






 return VAR_6;
}
