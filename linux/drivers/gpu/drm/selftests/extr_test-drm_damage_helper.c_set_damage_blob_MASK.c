
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_property_blob {struct drm_mode_rect* data; int length; } ;
struct drm_mode_rect {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct drm_property_blob *VAR_0,
       struct drm_mode_rect *VAR_1, uint32_t VAR_2)
{
 VAR_0->length = VAR_2;
 VAR_0->data = VAR_1;
}
