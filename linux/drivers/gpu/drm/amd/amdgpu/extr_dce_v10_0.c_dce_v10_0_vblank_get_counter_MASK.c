
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_2, int VAR_3)
{
 if (VAR_3 >= VAR_2->mode_info.num_crtc)
  return 0;
 else
  return FUNC_0(VAR_1 + VAR_0[VAR_3]);
}
