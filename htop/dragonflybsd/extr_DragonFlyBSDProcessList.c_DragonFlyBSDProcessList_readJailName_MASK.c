
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ jails; } ;
typedef TYPE_1__ DragonFlyBSDProcessList ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 char* FUNC_1 (char*) ;

char* FUNC_2(DragonFlyBSDProcessList* VAR_0, int VAR_1) {
   char* VAR_2;
   char* VAR_3;

   if (VAR_1 != 0 && VAR_0->jails && (VAR_2 = (char *)FUNC_0(VAR_0->jails, VAR_1))) {
      VAR_3 = FUNC_1(VAR_2);
   } else {
      VAR_3 = FUNC_1("-");
   }
   return VAR_3;
}
