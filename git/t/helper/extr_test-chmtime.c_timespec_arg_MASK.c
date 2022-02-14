
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 long FUNC_0 (char const*,char**,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, long int *VAR_1, int *VAR_2)
{
 char *VAR_3;
 const char *VAR_4 = VAR_0;
 *VAR_2 = (*VAR_4 == '=') ? 1 : 0;
 if (*VAR_2) {
  VAR_4++;
  if (*VAR_4 == '+') {
   *VAR_2 = 2;
   VAR_4++;
  }
 }
 *VAR_1 = FUNC_0(VAR_4, &VAR_3, 10);
 if (*VAR_3) {
  return 0;
 }
 if ((*VAR_2 && *VAR_1 < 0) || *VAR_2 == 2) {
  time_t VAR_5 = FUNC_1(((void*)0));
  *VAR_1 += VAR_5;
 }
 return 1;
}
