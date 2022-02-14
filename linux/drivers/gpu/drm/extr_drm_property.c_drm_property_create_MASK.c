
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct drm_property {int num_values; char* name; struct drm_property* values; int head; int enum_list; int flags; int base; struct drm_device* dev; } ;
struct TYPE_2__ {int property_list; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_device*,int *,int ) ;
 int FUNC_3 (int ) ;
 struct drm_property* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct drm_property*) ;
 struct drm_property* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int) ;

struct drm_property *FUNC_10(struct drm_device *VAR_3,
      u32 VAR_4, const char *VAR_5,
      int VAR_6)
{
 struct drm_property *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_1(!FUNC_3(VAR_4)))
  return ((void*)0);

 if (FUNC_1(FUNC_8(VAR_5) >= VAR_1))
  return ((void*)0);

 VAR_7 = FUNC_6(sizeof(struct drm_property), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->dev = VAR_3;

 if (VAR_6) {
  VAR_7->values = FUNC_4(VAR_6, sizeof(uint64_t),
        VAR_2);
  if (!VAR_7->values)
   goto fail;
 }

 VAR_8 = FUNC_2(VAR_3, &VAR_7->base, VAR_0);
 if (VAR_8)
  goto fail;

 VAR_7->flags = VAR_4;
 VAR_7->num_values = VAR_6;
 FUNC_0(&VAR_7->enum_list);

 FUNC_9(VAR_7->name, VAR_5, VAR_1);
 VAR_7->name[VAR_1-1] = '\0';

 FUNC_7(&VAR_7->head, &VAR_3->mode_config.property_list);

 return VAR_7;
fail:
 FUNC_5(VAR_7->values);
 FUNC_5(VAR_7);
 return ((void*)0);
}
