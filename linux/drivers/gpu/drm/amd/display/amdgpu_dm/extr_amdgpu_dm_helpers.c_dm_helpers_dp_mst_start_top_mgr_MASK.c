
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_link {struct amdgpu_dm_connector* priv; } ;
struct dc_context {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct amdgpu_dm_connector {int mst_mgr; TYPE_2__ base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct amdgpu_dm_connector*,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

bool FUNC_3(
  struct dc_context *VAR_0,
  const struct dc_link *VAR_1,
  bool VAR_2)
{
 struct amdgpu_dm_connector *VAR_3 = VAR_1->priv;

 if (!VAR_3) {
   FUNC_0("Failed to found connector for link!");
   return 0;
 }

 if (VAR_2) {
  FUNC_1("DM_MST: Differing MST start on aconnector: %p [id: %d]\n",
     VAR_3, VAR_3->base.base.id);
  return 1;
 }

 FUNC_1("DM_MST: starting TM on aconnector: %p [id: %d]\n",
   VAR_3, VAR_3->base.base.id);

 return (FUNC_2(&VAR_3->mst_mgr, 1) == 0);
}
