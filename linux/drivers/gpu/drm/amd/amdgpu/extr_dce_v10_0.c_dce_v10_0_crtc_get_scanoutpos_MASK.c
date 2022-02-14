
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_4, int VAR_5,
     u32 *VAR_6, u32 *VAR_7)
{
 if ((VAR_5 < 0) || (VAR_5 >= VAR_4->mode_info.num_crtc))
  return -VAR_0;

 *VAR_6 = FUNC_0(VAR_3 + VAR_1[VAR_5]);
 *VAR_7 = FUNC_0(VAR_2 + VAR_1[VAR_5]);

 return 0;
}
