
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

int
FUNC_4(int VAR_5, char *VAR_6[])
{
 int VAR_7;
 if (FUNC_2() != 0 && FUNC_1() != 0)
  FUNC_0(-1, "must be run as root");





 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  FUNC_3(&VAR_3[VAR_7], 0, 0);
  FUNC_3(&VAR_3[VAR_7], 0, 1);
  FUNC_3(&VAR_3[VAR_7], 1, 0);
  FUNC_3(&VAR_3[VAR_7], 1, 1);
 }
 return (VAR_2 ? VAR_0 : VAR_1);
}
