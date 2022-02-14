
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {long jid; char* jname; } ;
struct TYPE_5__ {TYPE_1__* settings; } ;
struct TYPE_4__ {int direction; scalar_t__ sortKey; } ;
typedef TYPE_1__ Settings ;
typedef TYPE_2__ Process ;
typedef TYPE_3__ DragonFlyBSDProcess ;




 long FUNC_0 (void const*,void const*) ;
 long FUNC_1 (char*,char*) ;

long FUNC_2(const void* VAR_0, const void* VAR_1) {
   DragonFlyBSDProcess *VAR_2, *VAR_3;
   Settings *VAR_4 = ((Process*)VAR_0)->settings;
   if (VAR_4->direction == 1) {
      VAR_2 = (DragonFlyBSDProcess*)VAR_0;
      VAR_3 = (DragonFlyBSDProcess*)VAR_1;
   } else {
      VAR_3 = (DragonFlyBSDProcess*)VAR_0;
      VAR_2 = (DragonFlyBSDProcess*)VAR_1;
   }
   switch ((int) VAR_4->sortKey) {

   case 128:
      return (VAR_2->jid - VAR_3->jid);
   case 129:
      return FUNC_1(VAR_2->jname ? VAR_2->jname : "", VAR_3->jname ? VAR_3->jname : "");
   default:
      return FUNC_0(VAR_0, VAR_1);
   }
}
