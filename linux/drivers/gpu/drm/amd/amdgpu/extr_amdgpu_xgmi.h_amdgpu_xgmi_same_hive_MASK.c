
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hive_id; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;



__attribute__((used)) static inline bool FUNC_0(struct amdgpu_device *VAR_0,
  struct amdgpu_device *VAR_1)
{
 return (VAR_0 != VAR_1 &&
  VAR_0->gmc.xgmi.hive_id &&
  VAR_0->gmc.xgmi.hive_id == VAR_1->gmc.xgmi.hive_id);
}
