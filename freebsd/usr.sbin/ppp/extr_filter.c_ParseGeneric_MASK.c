
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filterent {int f_dstop; int f_srcop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, struct filterent *VAR_3)
{




  if (VAR_2 != 0) {
    FUNC_0(VAR_0, "ParseGeneric: Too many parameters\n");
    return 0;
  } else
    VAR_3->f_srcop = VAR_3->f_dstop = VAR_1;

  return 1;
}
