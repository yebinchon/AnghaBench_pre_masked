
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int srbm_soft_reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_3(void *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_8;
 u32 VAR_10 = 0;
 u32 VAR_11 = FUNC_2(VAR_6);

 if (FUNC_0(VAR_11, VAR_3, VAR_5) ||
     FUNC_0(VAR_11, VAR_3, VAR_4) ||
     (FUNC_2(VAR_7) & VAR_0))
  VAR_10 = FUNC_1(VAR_10, VAR_2, VAR_1, 1);

 if (VAR_10) {
  VAR_9->uvd.inst->srbm_soft_reset = VAR_10;
  return 1;
 } else {
  VAR_9->uvd.inst->srbm_soft_reset = 0;
  return 0;
 }
}
