
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline {int n_layers; struct komeda_layer** layers; } ;
struct TYPE_2__ {int id; } ;
struct komeda_layer {scalar_t__ layer_type; TYPE_1__ base; } ;


 int VAR_0 ;

__attribute__((used)) static struct komeda_layer *
FUNC_0(struct komeda_pipeline *VAR_1,
       struct komeda_layer *VAR_2)
{
 int VAR_3 = VAR_2->base.id - VAR_0;
 int VAR_4;

 for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_1->n_layers; VAR_4++)
  if (VAR_2->layer_type == VAR_1->layers[VAR_4]->layer_type)
   return VAR_1->layers[VAR_4];
 return ((void*)0);
}
