
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct si_ulv_param {int volt_change_delay; int pl; } ;
struct si_power_info {int sram_end; scalar_t__ arb_table_start; struct si_ulv_param ulv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ SMC_SIslands_MCArbDramTimingRegisterSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int *,TYPE_1__*) ;
 int FUNC_4 (struct amdgpu_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_4)
{
 struct si_power_info *VAR_5 = FUNC_2(VAR_4);
 struct si_ulv_param *VAR_6 = &VAR_5->ulv;
 SMC_SIslands_MCArbDramTimingRegisterSet VAR_7 = { 0 };
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4, &VAR_6->pl,
         &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_4, VAR_1,
       VAR_6->volt_change_delay);

 VAR_8 = FUNC_0(VAR_4,
       VAR_5->arb_table_start +
       FUNC_1(VAR_2, VAR_3) +
       sizeof(SMC_SIslands_MCArbDramTimingRegisterSet) * VAR_0,
       (u8 *)&VAR_7,
       sizeof(SMC_SIslands_MCArbDramTimingRegisterSet),
       VAR_5->sram_end);

 return VAR_8;
}
