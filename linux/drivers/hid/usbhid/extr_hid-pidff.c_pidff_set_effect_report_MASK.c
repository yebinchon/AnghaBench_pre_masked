
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pidff_device {int * reports; int hid; TYPE_6__* set_effect; TYPE_8__* effect_direction; TYPE_3__* create_new_effect_type; TYPE_2__* set_effect_type; TYPE_1__* block_load; } ;
struct TYPE_15__ {int length; int delay; } ;
struct TYPE_12__ {int button; int interval; } ;
struct ff_effect {TYPE_7__ replay; int direction; TYPE_4__ trigger; } ;
struct TYPE_16__ {int * value; } ;
struct TYPE_14__ {int* value; TYPE_5__* field; } ;
struct TYPE_13__ {int logical_maximum; } ;
struct TYPE_11__ {int * value; } ;
struct TYPE_10__ {int * value; } ;
struct TYPE_9__ {int* value; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,TYPE_8__*) ;

__attribute__((used)) static void FUNC_2(struct pidff_device *VAR_9,
        struct ff_effect *VAR_10)
{
 VAR_9->set_effect[VAR_3].value[0] =
  VAR_9->block_load[VAR_3].value[0];
 VAR_9->set_effect_type->value[0] =
  VAR_9->create_new_effect_type->value[0];
 VAR_9->set_effect[VAR_2].value[0] = VAR_10->replay.length;
 VAR_9->set_effect[VAR_7].value[0] = VAR_10->trigger.button;
 VAR_9->set_effect[VAR_8].value[0] =
  VAR_10->trigger.interval;
 VAR_9->set_effect[VAR_4].value[0] =
  VAR_9->set_effect[VAR_4].field->logical_maximum;
 VAR_9->set_effect[VAR_1].value[0] = 1;
 VAR_9->effect_direction->value[0] =
  FUNC_1(VAR_10->direction, 0xffff,
    VAR_9->effect_direction);
 VAR_9->set_effect[VAR_6].value[0] = VAR_10->replay.delay;

 FUNC_0(VAR_9->hid, VAR_9->reports[VAR_5],
   VAR_0);
}
