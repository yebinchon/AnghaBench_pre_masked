
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct msm_kms {int dummy; } ;
struct msm_format {int dummy; } ;
struct dpu_format {struct msm_format const base; } ;


 struct dpu_format* FUNC_0 (int const,int const) ;

const struct msm_format *FUNC_1(
  struct msm_kms *VAR_0,
  const uint32_t VAR_1,
  const uint64_t VAR_2)
{
 const struct dpu_format *VAR_3 = FUNC_0(VAR_1,
   VAR_2);
 if (VAR_3)
  return &VAR_3->base;
 return ((void*)0);
}
