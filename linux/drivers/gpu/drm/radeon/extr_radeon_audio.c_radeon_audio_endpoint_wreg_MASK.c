
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct radeon_device {TYPE_2__ audio; } ;
struct TYPE_3__ {int (* endpoint_wreg ) (struct radeon_device*,int ,int ,int ) ;} ;


 int FUNC_0 (struct radeon_device*,int ,int ,int ) ;

void FUNC_1(struct radeon_device *VAR_0, u32 VAR_1,
 u32 VAR_2, u32 VAR_3)
{
 if (VAR_0->audio.funcs->endpoint_wreg)
  VAR_0->audio.funcs->endpoint_wreg(VAR_0, VAR_1, VAR_2, VAR_3);
}
