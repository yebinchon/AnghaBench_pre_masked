
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* settings; } ;
struct TYPE_3__ {int direction; int sortKey; } ;
typedef TYPE_1__ Settings ;
typedef TYPE_2__ Process ;
typedef int OpenBSDProcess ;


 long FUNC_0 (void const*,void const*) ;

long FUNC_1(const void* VAR_0, const void* VAR_1) {
   OpenBSDProcess *VAR_2, *VAR_3;
   Settings *VAR_4 = ((Process*)VAR_0)->settings;
   if (VAR_4->direction == 1) {
      VAR_2 = (OpenBSDProcess*)VAR_0;
      VAR_3 = (OpenBSDProcess*)VAR_1;
   } else {
      VAR_3 = (OpenBSDProcess*)VAR_0;
      VAR_2 = (OpenBSDProcess*)VAR_1;
   }
   switch (VAR_4->sortKey) {

   default:
      return FUNC_0(VAR_0, VAR_1);
   }
}
