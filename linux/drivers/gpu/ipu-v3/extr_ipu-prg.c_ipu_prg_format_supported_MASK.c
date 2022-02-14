
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ipu_soc {int dummy; } ;
struct drm_format_info {int num_planes; } ;





 struct drm_format_info* FUNC_0 (int ) ;

bool FUNC_1(struct ipu_soc *VAR_0, uint32_t VAR_1,
         uint64_t VAR_2)
{
 const struct drm_format_info *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->num_planes != 1)
  return 0;

 switch (VAR_2) {
 case 130:
 case 128:
 case 129:
  return 1;
 default:
  return 0;
 }
}
