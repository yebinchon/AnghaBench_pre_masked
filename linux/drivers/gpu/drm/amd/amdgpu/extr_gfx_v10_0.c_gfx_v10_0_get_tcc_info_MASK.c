
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int tcc_disabled_mask; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6)
{

 uint32_t VAR_7 = FUNC_1(VAR_1, 0, VAR_4) |
          FUNC_1(VAR_1, 0, VAR_5);

 VAR_6->gfx.config.tcc_disabled_mask =
  FUNC_0(VAR_7, VAR_0, VAR_3) |
  (FUNC_0(VAR_7, VAR_0, VAR_2) << 16);
}
