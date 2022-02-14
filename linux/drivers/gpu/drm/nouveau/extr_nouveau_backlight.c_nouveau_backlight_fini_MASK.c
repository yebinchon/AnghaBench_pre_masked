
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_connector {struct nouveau_backlight* backlight; } ;
struct nouveau_backlight {scalar_t__ id; int dev; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct nouveau_backlight*) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;

void
FUNC_4(struct drm_connector *VAR_1)
{
 struct nouveau_connector *VAR_2 = FUNC_3(VAR_1);
 struct nouveau_backlight *VAR_3 = VAR_2->backlight;

 if (!VAR_3)
  return;

 if (VAR_3->id >= 0)
  FUNC_1(&VAR_0, VAR_3->id);

 FUNC_0(VAR_3->dev);
 VAR_2->backlight = ((void*)0);
 FUNC_2(VAR_3);
}
