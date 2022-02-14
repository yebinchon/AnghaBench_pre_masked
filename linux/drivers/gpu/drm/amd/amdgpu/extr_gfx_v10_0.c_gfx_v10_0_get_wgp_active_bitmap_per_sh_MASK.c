
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_cu_per_sh; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_device *VAR_5)
{
 u32 VAR_6, VAR_7;
 VAR_6 = FUNC_0(VAR_2, 0, VAR_3);
 VAR_6 |= FUNC_0(VAR_2, 0, VAR_4);

 VAR_6 &= VAR_0;
 VAR_6 >>= VAR_1;

 VAR_7 =
  FUNC_1(VAR_5->gfx.config.max_cu_per_sh >> 1);

 return (~VAR_6) & VAR_7;
}
