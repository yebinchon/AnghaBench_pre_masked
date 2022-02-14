
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct komeda_pipeline {TYPE_2__* merger; } ;
struct TYPE_8__ {TYPE_3__* component; } ;
struct komeda_data_flow_cfg {TYPE_4__ input; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {int supported_inputs; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct komeda_pipeline *VAR_0,
    struct komeda_data_flow_cfg *VAR_1)
{
 u32 VAR_2 = VAR_0->merger ?
      VAR_0->merger->base.supported_inputs : 0;

 return FUNC_0(VAR_1->input.component->id, VAR_2);
}
