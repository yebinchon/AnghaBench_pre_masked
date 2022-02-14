
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int interlace_allowed; int base; } ;
struct vc4_vec_connector {struct vc4_vec* vec; int encoder; struct drm_connector base; } ;
struct vc4_vec {int encoder; int * tv_mode; } ;
struct TYPE_2__ {int tv_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_connector* FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct vc4_vec_connector* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_5 (int *,int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static struct drm_connector *FUNC_6(struct drm_device *VAR_7,
          struct vc4_vec *VAR_8)
{
 struct drm_connector *VAR_9 = ((void*)0);
 struct vc4_vec_connector *VAR_10;

 VAR_10 = FUNC_1(VAR_7->dev, sizeof(*VAR_10),
         VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = &VAR_10->base;
 VAR_9->interlace_allowed = 1;

 VAR_10->encoder = VAR_8->encoder;
 VAR_10->vec = VAR_8;

 FUNC_4(VAR_7, VAR_9, &VAR_4,
      VAR_0);
 FUNC_3(VAR_9, &VAR_5);

 FUNC_5(&VAR_9->base,
       VAR_7->mode_config.tv_mode_property,
       VAR_3);
 VAR_8->tv_mode = &VAR_6[VAR_3];

 FUNC_2(VAR_9, VAR_8->encoder);

 return VAR_9;
}
