
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_info {int cs_timestamp_frequency_khz; int sseu; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,int ) ;
 int FUNC_1 (int *,struct drm_printer*) ;

void FUNC_2(const struct intel_runtime_info *VAR_0,
        struct drm_printer *VAR_1)
{
 FUNC_1(&VAR_0->sseu, VAR_1);

 FUNC_0(VAR_1, "CS timestamp frequency: %u kHz\n",
     VAR_0->cs_timestamp_frequency_khz);
}
