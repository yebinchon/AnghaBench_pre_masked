
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_intel_overlay_put_image {int src_scan_height; int dst_height; int src_scan_width; int dst_width; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_intel_overlay_put_image *VAR_1)
{
 u32 VAR_2;


 VAR_2 = ((VAR_1->src_scan_height << 16) / VAR_1->dst_height) >> 16;
 if (VAR_2 > 7)
  return -VAR_0;

 VAR_2 = ((VAR_1->src_scan_width << 16) / VAR_1->dst_width) >> 16;
 if (VAR_2 > 7)
  return -VAR_0;

 return 0;
}
