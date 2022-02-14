
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc_link {struct amdgpu_dm_connector* priv; } ;
struct dc_context {int dummy; } ;
struct TYPE_6__ {int mst_state; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_dm_connector {TYPE_3__ mst_mgr; TYPE_2__ base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct amdgpu_dm_connector*,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;

void FUNC_3(
  struct dc_context *VAR_0,
  const struct dc_link *VAR_1)
{
 struct amdgpu_dm_connector *VAR_2 = VAR_1->priv;

 if (!VAR_2) {
   FUNC_0("Failed to found connector for link!");
   return;
 }

 FUNC_1("DM_MST: stopping TM on aconnector: %p [id: %d]\n",
   VAR_2, VAR_2->base.base.id);

 if (VAR_2->mst_mgr.mst_state == 1)
  FUNC_2(&VAR_2->mst_mgr, 0);
}
