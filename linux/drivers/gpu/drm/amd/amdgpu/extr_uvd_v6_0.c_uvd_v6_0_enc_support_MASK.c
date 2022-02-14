
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fw_version; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ uvd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct amdgpu_device *VAR_3)
{
 return ((VAR_3->asic_type >= VAR_0) &&
   (VAR_3->asic_type <= VAR_1) &&
   (!VAR_3->uvd.fw_version || VAR_3->uvd.fw_version >= VAR_2));
}
