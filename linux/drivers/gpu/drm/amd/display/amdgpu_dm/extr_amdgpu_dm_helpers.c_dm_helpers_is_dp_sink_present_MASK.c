
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_link {struct amdgpu_dm_connector* priv; } ;
struct TYPE_3__ {int hw_mutex; } ;
struct TYPE_4__ {TYPE_1__ aux; } ;
struct amdgpu_dm_connector {TYPE_2__ dm_dp_aux; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dc_link*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct dc_link *VAR_0)
{
 bool VAR_1;
 struct amdgpu_dm_connector *VAR_2 = VAR_0->priv;

 if (!VAR_2) {
  FUNC_0("Failed to found connector for link!");
  return 1;
 }

 FUNC_2(&VAR_2->dm_dp_aux.aux.hw_mutex);
 VAR_1 = FUNC_1(VAR_0);
 FUNC_3(&VAR_2->dm_dp_aux.aux.hw_mutex);
 return VAR_1;
}
