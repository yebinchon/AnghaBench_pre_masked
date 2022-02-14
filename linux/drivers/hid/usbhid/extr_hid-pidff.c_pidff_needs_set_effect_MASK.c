
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; scalar_t__ delay; } ;
struct TYPE_4__ {scalar_t__ interval; scalar_t__ button; } ;
struct ff_effect {scalar_t__ direction; TYPE_1__ replay; TYPE_2__ trigger; } ;



__attribute__((used)) static int FUNC_0(struct ff_effect *VAR_0,
      struct ff_effect *VAR_1)
{
 return VAR_0->replay.length != VAR_1->replay.length ||
        VAR_0->trigger.interval != VAR_1->trigger.interval ||
        VAR_0->trigger.button != VAR_1->trigger.button ||
        VAR_0->direction != VAR_1->direction ||
        VAR_0->replay.delay != VAR_1->replay.delay;
}
