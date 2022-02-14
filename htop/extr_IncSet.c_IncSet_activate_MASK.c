
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* active; TYPE_1__* modes; } ;
struct TYPE_7__ {int currentBar; } ;
struct TYPE_6__ {int bar; int buffer; } ;
typedef TYPE_2__ Panel ;
typedef size_t IncType ;
typedef TYPE_3__ IncSet ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(IncSet* VAR_0, IncType VAR_1, Panel* VAR_2) {
   VAR_0->active = &(VAR_0->modes[VAR_1]);
   FUNC_0(VAR_0->active->bar, VAR_0->active->buffer);
   VAR_2->currentBar = VAR_0->active->bar;
}
