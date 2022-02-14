
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* stfle_fac_list; } ;


 int FUNC_0 (int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int*,int) ;
 int* VAR_1 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 int VAR_2;

 FUNC_1(VAR_0.stfle_fac_list, FUNC_0(VAR_0.stfle_fac_list));
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if ((VAR_0.stfle_fac_list[VAR_2] & VAR_1[VAR_2]) != VAR_1[VAR_2])
   FUNC_2();
 }
}
