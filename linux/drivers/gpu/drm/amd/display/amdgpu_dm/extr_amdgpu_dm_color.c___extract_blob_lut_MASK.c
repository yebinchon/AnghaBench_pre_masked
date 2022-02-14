
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_property_blob {scalar_t__ data; } ;
typedef struct drm_color_lut const drm_color_lut ;


 int FUNC_0 (struct drm_property_blob const*) ;

__attribute__((used)) static const struct drm_color_lut *
FUNC_1(const struct drm_property_blob *VAR_0, uint32_t *VAR_1)
{
 *VAR_1 = VAR_0 ? FUNC_0(VAR_0) : 0;
 return VAR_0 ? (struct drm_color_lut *)VAR_0->data : ((void*)0);
}
