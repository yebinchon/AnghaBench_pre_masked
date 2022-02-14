
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int mem_refclk_10khz; } ;
union umc_info {TYPE_5__ v31; } ;
struct TYPE_10__ {int core_refclk_10khz; } ;
union smu_info {TYPE_4__ v31; } ;
struct TYPE_9__ {int firmware_capability; int bootup_mclk_in10khz; int bootup_sclk_in10khz; } ;
union firmware_info {TYPE_3__ v31; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct amdgpu_pll {int min_post_div; int max_post_div; int min_ref_div; int max_ref_div; int min_feedback_div; int max_feedback_div; scalar_t__ best_vco; scalar_t__ reference_div; void* reference_freq; } ;
struct amdgpu_mode_info {TYPE_6__* atom_context; void* firmware_flags; } ;
struct TYPE_8__ {void* default_mclk; void* default_sclk; struct amdgpu_pll mpll; struct amdgpu_pll spll; } ;
struct TYPE_7__ {void* current_mclk; void* current_sclk; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; TYPE_2__ clock; TYPE_1__ pm; } ;
struct TYPE_12__ {scalar_t__ bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int,int *,int *,int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct amdgpu_device *VAR_5)
{
 struct amdgpu_mode_info *VAR_6 = &VAR_5->mode_info;
 struct amdgpu_pll *VAR_7 = &VAR_5->clock.spll;
 struct amdgpu_pll *VAR_8 = &VAR_5->clock.mpll;
 uint8_t VAR_9, VAR_10;
 uint16_t VAR_11;
 int VAR_12 = -VAR_0, VAR_13;

 VAR_13 = FUNC_1(VAR_1,
         VAR_2);
 if (FUNC_0(VAR_6->atom_context, VAR_13, ((void*)0),
       &VAR_9, &VAR_10, &VAR_11)) {
  union firmware_info *VAR_14 =
   (union firmware_info *)(VAR_6->atom_context->bios +
      VAR_11);

  VAR_5->clock.default_sclk =
   FUNC_2(VAR_14->v31.bootup_sclk_in10khz);
  VAR_5->clock.default_mclk =
   FUNC_2(VAR_14->v31.bootup_mclk_in10khz);

  VAR_5->pm.current_sclk = VAR_5->clock.default_sclk;
  VAR_5->pm.current_mclk = VAR_5->clock.default_mclk;


  VAR_5->mode_info.firmware_flags =
   FUNC_2(VAR_14->v31.firmware_capability);

  VAR_12 = 0;
 }

 VAR_13 = FUNC_1(VAR_1,
         VAR_3);
 if (FUNC_0(VAR_6->atom_context, VAR_13, ((void*)0),
       &VAR_9, &VAR_10, &VAR_11)) {
  union smu_info *VAR_15 =
   (union smu_info *)(VAR_6->atom_context->bios +
        VAR_11);


  VAR_7->reference_freq = FUNC_2(VAR_15->v31.core_refclk_10khz);

  VAR_7->reference_div = 0;
  VAR_7->min_post_div = 1;
  VAR_7->max_post_div = 1;
  VAR_7->min_ref_div = 2;
  VAR_7->max_ref_div = 0xff;
  VAR_7->min_feedback_div = 4;
  VAR_7->max_feedback_div = 0xff;
  VAR_7->best_vco = 0;

  VAR_12 = 0;
 }

 VAR_13 = FUNC_1(VAR_1,
         VAR_4);
 if (FUNC_0(VAR_6->atom_context, VAR_13, ((void*)0),
       &VAR_9, &VAR_10, &VAR_11)) {
  union umc_info *VAR_16 =
   (union umc_info *)(VAR_6->atom_context->bios +
        VAR_11);


  VAR_8->reference_freq = FUNC_2(VAR_16->v31.mem_refclk_10khz);

  VAR_8->reference_div = 0;
  VAR_8->min_post_div = 1;
  VAR_8->max_post_div = 1;
  VAR_8->min_ref_div = 2;
  VAR_8->max_ref_div = 0xff;
  VAR_8->min_feedback_div = 4;
  VAR_8->max_feedback_div = 0xff;
  VAR_8->best_vco = 0;

  VAR_12 = 0;
 }

 return VAR_12;
}
