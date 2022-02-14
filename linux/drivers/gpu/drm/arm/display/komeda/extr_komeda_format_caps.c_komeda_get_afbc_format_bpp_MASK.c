
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_format_info {int format; int* cpp; } ;





u32 FUNC_0(const struct drm_format_info *VAR_0, u64 VAR_1)
{
 u32 VAR_2;

 switch (VAR_0->format) {
 case 128:
  VAR_2 = 12;
  break;
 case 129:
  VAR_2 = 15;
  break;
 default:
  VAR_2 = VAR_0->cpp[0] * 8;
  break;
 }

 return VAR_2;
}
