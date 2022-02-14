
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int register_list_format; } ;
struct TYPE_4__ {TYPE_1__ rlc; int * mec2_fw; int * mec_fw; int * rlc_fw; int * ce_fw; int * me_fw; int * pfp_fw; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 FUNC_1(VAR_2->gfx.pfp_fw);
 VAR_2->gfx.pfp_fw = ((void*)0);
 FUNC_1(VAR_2->gfx.me_fw);
 VAR_2->gfx.me_fw = ((void*)0);
 FUNC_1(VAR_2->gfx.ce_fw);
 VAR_2->gfx.ce_fw = ((void*)0);
 FUNC_1(VAR_2->gfx.rlc_fw);
 VAR_2->gfx.rlc_fw = ((void*)0);
 FUNC_1(VAR_2->gfx.mec_fw);
 VAR_2->gfx.mec_fw = ((void*)0);
 if ((VAR_2->asic_type != VAR_0) &&
     (VAR_2->asic_type != VAR_1))
  FUNC_1(VAR_2->gfx.mec2_fw);
 VAR_2->gfx.mec2_fw = ((void*)0);

 FUNC_0(VAR_2->gfx.rlc.register_list_format);
}
