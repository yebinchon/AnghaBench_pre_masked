
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_connector {scalar_t__ detected_encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;


 struct nouveau_connector* FUNC_0 (struct drm_connector*) ;
 struct drm_encoder* FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct drm_encoder *
FUNC_2(struct drm_connector *VAR_0)
{
 struct nouveau_connector *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->detected_encoder)
  return FUNC_1(VAR_1->detected_encoder);

 return ((void*)0);
}
