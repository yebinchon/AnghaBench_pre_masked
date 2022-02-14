
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int defaultBar; TYPE_1__* active; } ;
struct TYPE_4__ {int * buffer; int bar; } ;
typedef TYPE_2__ IncSet ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(IncSet* VAR_0) {
   if (VAR_0->active) {
      FUNC_0(VAR_0->active->bar, VAR_0->active->buffer);
   } else {
      FUNC_0(VAR_0->defaultBar, ((void*)0));
   }
}
