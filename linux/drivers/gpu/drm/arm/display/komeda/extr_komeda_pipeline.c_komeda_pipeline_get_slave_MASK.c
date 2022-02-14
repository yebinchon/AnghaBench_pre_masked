
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline {TYPE_1__* compiz; } ;
struct komeda_component {struct komeda_pipeline* pipeline; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 struct komeda_component* FUNC_0 (int *,int ) ;

struct komeda_pipeline *
FUNC_1(struct komeda_pipeline *VAR_1)
{
 struct komeda_component *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->compiz->base,
           VAR_0);

 return VAR_2 ? VAR_2->pipeline : ((void*)0);
}
