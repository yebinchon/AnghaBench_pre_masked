
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct drm_property_blob {TYPE_2__ base; struct drm_format_modifier_blob* data; } ;
struct drm_plane {int format_count; int modifier_count; int base; int * modifiers; int * format_types; TYPE_1__* funcs; } ;
struct drm_mode_config {int modifiers_property; } ;
struct drm_format_modifier_blob {int count_formats; int formats_offset; int count_modifiers; scalar_t__ modifiers_offset; int version; } ;
struct drm_format_modifier {unsigned long long formats; scalar_t__ pad; scalar_t__ offset; int modifier; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
typedef int __u32 ;
struct TYPE_3__ {scalar_t__ (* format_mod_supported ) (struct drm_plane*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_property_blob*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 struct drm_property_blob* FUNC_5 (struct drm_device*,size_t,int *) ;
 int FUNC_6 (struct drm_format_modifier_blob*) ;
 int FUNC_7 (int ,int *,size_t) ;
 struct drm_format_modifier* FUNC_8 (struct drm_format_modifier_blob*) ;
 scalar_t__ FUNC_9 (struct drm_plane*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_1, struct drm_plane *VAR_2)
{
 const struct drm_mode_config *VAR_3 = &VAR_1->mode_config;
 struct drm_property_blob *VAR_4;
 struct drm_format_modifier *VAR_5;
 size_t VAR_6, VAR_7, VAR_8;
 struct drm_format_modifier_blob *VAR_9;
 unsigned int VAR_10, VAR_11;

 VAR_7 = sizeof(__u32) * VAR_2->format_count;
 if (FUNC_3(!VAR_7)) {

  return 0;
 }

 VAR_8 =
  sizeof(struct drm_format_modifier) * VAR_2->modifier_count;

 VAR_6 = sizeof(struct drm_format_modifier_blob);



 FUNC_1(sizeof(struct drm_format_modifier_blob) % 8);
 VAR_6 += FUNC_0(VAR_7, 8);
 VAR_6 += VAR_8;

 VAR_4 = FUNC_5(VAR_1, VAR_6, ((void*)0));
 if (FUNC_2(VAR_4))
  return -1;

 VAR_9 = VAR_4->data;
 VAR_9->version = VAR_0;
 VAR_9->count_formats = VAR_2->format_count;
 VAR_9->formats_offset = sizeof(struct drm_format_modifier_blob);
 VAR_9->count_modifiers = VAR_2->modifier_count;

 VAR_9->modifiers_offset =
  FUNC_0(VAR_9->formats_offset + VAR_7, 8);

 FUNC_7(FUNC_6(VAR_9), VAR_2->format_types, VAR_7);


 if (!VAR_2->funcs->format_mod_supported)
  goto done;

 VAR_5 = FUNC_8(VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_2->modifier_count; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_2->format_count; VAR_11++) {
   if (VAR_2->funcs->format_mod_supported(VAR_2,
              VAR_2->format_types[VAR_11],
              VAR_2->modifiers[VAR_10])) {

    VAR_5->formats |= 1ULL << VAR_11;
   }
  }

  VAR_5->modifier = VAR_2->modifiers[VAR_10];
  VAR_5->offset = 0;
  VAR_5->pad = 0;
  VAR_5++;
 }

done:
 FUNC_4(&VAR_2->base, VAR_3->modifiers_property,
       VAR_4->base.id);

 return 0;
}
