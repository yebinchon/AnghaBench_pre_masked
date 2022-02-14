
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int colorspace_property; int base; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2(struct drm_connector *VAR_0)
{
 if (!FUNC_0(VAR_0))
  FUNC_1(&VAR_0->base,
        VAR_0->colorspace_property, 0);
}
