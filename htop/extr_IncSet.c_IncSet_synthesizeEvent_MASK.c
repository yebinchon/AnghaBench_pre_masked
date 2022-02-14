
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int defaultBar; TYPE_1__* active; } ;
struct TYPE_4__ {int bar; } ;
typedef TYPE_2__ IncSet ;


 int FUNC_0 (int ,int) ;

int FUNC_1(IncSet* VAR_0, int VAR_1) {
   if (VAR_0->active) {
      return FUNC_0(VAR_0->active->bar, VAR_1);
   } else {
      return FUNC_0(VAR_0->defaultBar, VAR_1);
   }
}
