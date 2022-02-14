
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct dc_link {struct amdgpu_dm_connector* priv; } ;
struct dc_context {int dummy; } ;
struct TYPE_2__ {int aux; } ;
struct amdgpu_dm_connector {TYPE_1__ dm_dp_aux; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;

bool FUNC_2(
  struct dc_context *VAR_0,
  const struct dc_link *VAR_1,
  uint32_t VAR_2,
  const uint8_t *VAR_3,
  uint32_t VAR_4)
{
 struct amdgpu_dm_connector *VAR_5 = VAR_1->priv;

 if (!VAR_5) {
  FUNC_0("Failed to found connector for link!");
  return 0;
 }

 return FUNC_1(&VAR_5->dm_dp_aux.aux,
   VAR_2, (uint8_t *)VAR_3, VAR_4) > 0;
}
