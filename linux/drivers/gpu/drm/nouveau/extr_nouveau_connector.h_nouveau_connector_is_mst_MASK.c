
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {scalar_t__ encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct nouveau_encoder {TYPE_1__ base; } ;
struct drm_connector {scalar_t__ connector_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nouveau_encoder* FUNC_0 (struct drm_connector*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct drm_connector *VAR_3)
{
 const struct nouveau_encoder *VAR_4;
 const struct drm_encoder *VAR_5;

 if (VAR_3->connector_type != VAR_1)
  return 0;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4)
  return 0;

 VAR_5 = &VAR_4->base.base;
 return VAR_5->encoder_type == VAR_2;
}
