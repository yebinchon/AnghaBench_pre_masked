
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct msm_kms {int dummy; } ;
struct msm_format {scalar_t__ pixel_format; } ;
struct mdp_format {struct msm_format const base; } ;


 int FUNC_0 (struct mdp_format*) ;
 struct mdp_format* VAR_0 ;

const struct msm_format *FUNC_1(struct msm_kms *VAR_1, uint32_t VAR_2,
  uint64_t VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct mdp_format *VAR_5 = &VAR_0[VAR_4];
  if (VAR_5->base.pixel_format == VAR_2)
   return &VAR_5->base;
 }
 return ((void*)0);
}
