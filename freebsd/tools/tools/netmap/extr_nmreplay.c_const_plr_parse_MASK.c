
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _qs {int dummy; } ;
struct _cfg {double* d; } ;


 int FUNC_0 (char*,double) ;
 double FUNC_1 (char*,int *,int*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct _qs *VAR_0, struct _cfg *VAR_1, int VAR_2, char *VAR_3[])
{
 double VAR_4;
 int VAR_5;

 (void)VAR_0;
 if (FUNC_2(VAR_3[0], "plr") != 0 && VAR_2 > 1)
  return 2;
 if (VAR_2 > 2)
  return 1;

 VAR_4 = FUNC_1(VAR_3[VAR_2-1], ((void*)0), &VAR_5);
 if (VAR_5 || VAR_4 < 0 || VAR_4 > 1)
  return 1;
 VAR_1->d[0] = VAR_4 * (1<<24);
 if (VAR_4 != 0 && VAR_1->d[0] == 0)
  FUNC_0("WWW warning,  rounding %le down to 0", VAR_4);
 return 0;
}
