
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _qs {int dummy; } ;
struct _cfg {double* f; } ;


 int FUNC_0 (char*,double) ;
 double FUNC_1 (char*,int *,int*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct _qs *VAR_0, struct _cfg *VAR_1, int VAR_2, char *VAR_3[])
{
 double VAR_4;

 (void)VAR_0;
 if (FUNC_2(VAR_3[0], "real") != 0)
  return 2;
 if (VAR_2 > 2) {
  return 1;
 } else if (VAR_2 == 1) {
  VAR_4 = 1;
 } else {
  int VAR_5 = 0;
  VAR_4 = FUNC_1(VAR_3[VAR_2-1], ((void*)0), &VAR_5);
  if (VAR_5 || VAR_4 <= 0 || VAR_4 > 1000)
   return 1;
 }
 FUNC_0("real -> scale is %.6f", VAR_4);
 VAR_1->f[0] = VAR_4;
 return 0;
}
