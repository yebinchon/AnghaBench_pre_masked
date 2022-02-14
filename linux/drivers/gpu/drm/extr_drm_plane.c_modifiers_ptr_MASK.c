
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_format_modifier_blob {int modifiers_offset; } ;
struct drm_format_modifier {int dummy; } ;



__attribute__((used)) static inline struct drm_format_modifier *
FUNC_0(struct drm_format_modifier_blob *VAR_0)
{
 return (struct drm_format_modifier *)(((char *)VAR_0) + VAR_0->modifiers_offset);
}
