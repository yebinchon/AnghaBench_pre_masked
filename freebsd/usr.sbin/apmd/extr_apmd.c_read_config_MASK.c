
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ cmdlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(void)
{
 int VAR_7;

 if ((VAR_6 = FUNC_2(VAR_2, "r")) == ((void*)0)) {
  FUNC_0(1, "cannot open config file");
 }





 if (FUNC_4() != 0)
  FUNC_0(1, "cannot parse config file");

 FUNC_1(VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_4[VAR_7].cmdlist) {
   u_int VAR_8 = VAR_7;
   if (FUNC_3(VAR_1, &VAR_8, sizeof(u_int)) == -1) {
    FUNC_0(1, "cannot enable event 0x%x", VAR_8);
   }
  }
 }
}
