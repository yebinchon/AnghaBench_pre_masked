
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_engine {TYPE_1__* ops; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct drm_plane** (* layers_init ) (struct drm_device*,struct sunxi_engine*) ;} ;


 int VAR_0 ;
 struct drm_plane** FUNC_0 (int ) ;
 struct drm_plane** FUNC_1 (struct drm_device*,struct sunxi_engine*) ;

__attribute__((used)) static inline struct drm_plane **
FUNC_2(struct drm_device *VAR_1, struct sunxi_engine *VAR_2)
{
 if (VAR_2->ops && VAR_2->ops->layers_init)
  return VAR_2->ops->layers_init(VAR_1, VAR_2);
 return FUNC_0(-VAR_0);
}
