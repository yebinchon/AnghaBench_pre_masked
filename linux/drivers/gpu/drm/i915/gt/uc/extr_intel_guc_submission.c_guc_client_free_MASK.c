
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc_client {int stage_id; TYPE_1__* guc; int vma; } ;
struct TYPE_2__ {int stage_ids; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (struct intel_guc_client*) ;

__attribute__((used)) static void FUNC_4(struct intel_guc_client *VAR_1)
{
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->vma, VAR_0);
 FUNC_1(&VAR_1->guc->stage_ids, VAR_1->stage_id);
 FUNC_2(VAR_1);
}
