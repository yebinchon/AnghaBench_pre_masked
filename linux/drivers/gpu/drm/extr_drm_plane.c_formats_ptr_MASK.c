
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_format_modifier_blob {int formats_offset; } ;



__attribute__((used)) static inline u32 *
FUNC_0(struct drm_format_modifier_blob *VAR_0)
{
 return (u32 *)(((char *)VAR_0) + VAR_0->formats_offset);
}
