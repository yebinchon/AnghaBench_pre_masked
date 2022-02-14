
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si_power_info {scalar_t__ spll_table_start; int sram_end; } ;
struct ni_power_info {int enable_power_containment; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_7__ {int vCG_SPLL_FUNC_CNTL; int vCG_SPLL_FUNC_CNTL_3; int vCG_SPLL_SPREAD_SPECTRUM; int vCG_SPLL_SPREAD_SPECTRUM_2; } ;
struct TYPE_6__ {void** ss; void** freq; } ;
typedef TYPE_1__ SMC_SISLANDS_SPLL_DIV_TABLE ;
typedef TYPE_2__ SISLANDS_SMC_SCLK_VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 struct ni_power_info* FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int,TYPE_2__*) ;
 struct si_power_info* FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_19)
{
 struct ni_power_info *VAR_20 = FUNC_4(VAR_19);
 struct si_power_info *VAR_21 = FUNC_6(VAR_19);
 SMC_SISLANDS_SPLL_DIV_TABLE *VAR_22;
 SISLANDS_SMC_SCLK_VALUE VAR_23;
 u32 VAR_24, VAR_25;
 u32 VAR_26, VAR_27;
 u32 VAR_28 = 0;
 int VAR_29 = 0;
 u32 VAR_30;
 int VAR_31;

 if (VAR_21->spll_table_start == 0)
  return -VAR_4;

 VAR_22 = FUNC_3(sizeof(SMC_SISLANDS_SPLL_DIV_TABLE), VAR_6);
 if (VAR_22 == ((void*)0))
  return -VAR_5;

 for (VAR_31 = 0; VAR_31 < 256; VAR_31++) {
  VAR_29 = FUNC_5(VAR_19, VAR_28, &VAR_23);
  if (VAR_29)
   break;
  VAR_25 = (VAR_23.vCG_SPLL_FUNC_CNTL & VAR_17) >> VAR_18;
  VAR_24 = (VAR_23.vCG_SPLL_FUNC_CNTL_3 & VAR_15) >> VAR_16;
  VAR_26 = (VAR_23.vCG_SPLL_SPREAD_SPECTRUM & VAR_0) >> VAR_1;
  VAR_27 = (VAR_23.vCG_SPLL_SPREAD_SPECTRUM_2 & VAR_2) >> VAR_3;

  VAR_24 &= ~0x00001FFF;
  VAR_24 >>= 1;
  VAR_27 >>= 6;

  if (VAR_25 & ~(VAR_13 >> VAR_14))
   VAR_29 = -VAR_4;
  if (VAR_24 & ~(VAR_11 >> VAR_12))
   VAR_29 = -VAR_4;
  if (VAR_26 & ~(VAR_7 >> VAR_8))
   VAR_29 = -VAR_4;
  if (VAR_27 & ~(VAR_9 >> VAR_10))
   VAR_29 = -VAR_4;

  if (VAR_29)
   break;

  VAR_30 = ((VAR_24 << VAR_12) & VAR_11) |
   ((VAR_25 << VAR_14) & VAR_13);
  VAR_22->freq[VAR_31] = FUNC_1(VAR_30);

  VAR_30 = ((VAR_27 << VAR_10) & VAR_9) |
   ((VAR_26 << VAR_8) & VAR_7);
  VAR_22->ss[VAR_31] = FUNC_1(VAR_30);

  VAR_28 += 512;
 }


 if (!VAR_29)
  VAR_29 = FUNC_0(VAR_19, VAR_21->spll_table_start,
        (u8 *)VAR_22,
        sizeof(SMC_SISLANDS_SPLL_DIV_TABLE),
        VAR_21->sram_end);

 if (VAR_29)
  VAR_20->enable_power_containment = 0;

 FUNC_2(VAR_22);

 return VAR_29;
}
