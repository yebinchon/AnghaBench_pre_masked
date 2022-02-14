
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; void* sclk_value; } ;
typedef TYPE_1__ SISLANDS_SMC_SCLK_VALUE ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (struct amdgpu_device*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
      u32 VAR_1,
      SISLANDS_SMC_SCLK_VALUE *VAR_2)
{
 SISLANDS_SMC_SCLK_VALUE VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4) {
  VAR_2->sclk_value = FUNC_0(VAR_3.sclk_value);
  VAR_2->vCG_SPLL_FUNC_CNTL = FUNC_0(VAR_3.vCG_SPLL_FUNC_CNTL);
  VAR_2->vCG_SPLL_FUNC_CNTL_2 = FUNC_0(VAR_3.vCG_SPLL_FUNC_CNTL_2);
  VAR_2->vCG_SPLL_FUNC_CNTL_3 = FUNC_0(VAR_3.vCG_SPLL_FUNC_CNTL_3);
  VAR_2->vCG_SPLL_FUNC_CNTL_4 = FUNC_0(VAR_3.vCG_SPLL_FUNC_CNTL_4);
  VAR_2->vCG_SPLL_SPREAD_SPECTRUM = FUNC_0(VAR_3.vCG_SPLL_SPREAD_SPECTRUM);
  VAR_2->vCG_SPLL_SPREAD_SPECTRUM_2 = FUNC_0(VAR_3.vCG_SPLL_SPREAD_SPECTRUM_2);
 }

 return VAR_4;
}
