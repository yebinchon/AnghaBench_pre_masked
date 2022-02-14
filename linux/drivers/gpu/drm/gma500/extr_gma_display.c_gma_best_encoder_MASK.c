
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct gma_encoder {struct drm_encoder base; } ;
struct drm_connector {int dummy; } ;


 struct gma_encoder* FUNC_0 (struct drm_connector*) ;

struct drm_encoder *FUNC_1(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->base;
}
