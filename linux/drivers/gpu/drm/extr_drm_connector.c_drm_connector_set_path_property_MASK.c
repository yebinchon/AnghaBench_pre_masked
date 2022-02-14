
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int base; int path_blob_ptr; struct drm_device* dev; } ;


 int FUNC_0 (struct drm_device*,int *,scalar_t__,char const*,int *,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(struct drm_connector *VAR_0,
        const char *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2,
                                        &VAR_0->path_blob_ptr,
                                        FUNC_1(VAR_1) + 1,
                                        VAR_1,
                                        &VAR_0->base,
                                        VAR_2->mode_config.path_property);
 return VAR_3;
}
