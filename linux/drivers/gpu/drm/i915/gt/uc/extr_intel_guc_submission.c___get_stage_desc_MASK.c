
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc_client {size_t stage_id; TYPE_1__* guc; } ;
struct guc_stage_desc {int dummy; } ;
struct TYPE_2__ {struct guc_stage_desc* stage_desc_pool_vaddr; } ;



__attribute__((used)) static struct guc_stage_desc *FUNC_0(struct intel_guc_client *VAR_0)
{
 struct guc_stage_desc *VAR_1 = VAR_0->guc->stage_desc_pool_vaddr;

 return &VAR_1[VAR_0->stage_id];
}
