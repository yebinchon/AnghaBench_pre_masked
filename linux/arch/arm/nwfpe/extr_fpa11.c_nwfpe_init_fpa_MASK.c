
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union fp_state {int dummy; } fp_state ;
struct TYPE_3__ {int initflag; } ;
typedef TYPE_1__ FPA11 ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void FUNC_3(union fp_state *VAR_0)
{
 FPA11 *VAR_1 = (FPA11 *)VAR_0;



  FUNC_0(VAR_1, 0, sizeof(FPA11));
 FUNC_2();
 VAR_1->initflag = 1;
}
