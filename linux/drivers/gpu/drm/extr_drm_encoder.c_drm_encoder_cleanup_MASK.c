
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int head; int name; int base; struct drm_bridge* bridge; struct drm_device* dev; } ;
struct TYPE_2__ {int num_encoder; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_bridge {struct drm_bridge* next; } ;


 int FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_encoder*,int ,int) ;

void FUNC_5(struct drm_encoder *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;






 if (VAR_0->bridge) {
  struct drm_bridge *VAR_2 = VAR_0->bridge;
  struct drm_bridge *VAR_3;

  while (VAR_2) {
   VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
   VAR_2 = VAR_3;
  }
 }

 FUNC_1(VAR_1, &VAR_0->base);
 FUNC_2(VAR_0->name);
 FUNC_3(&VAR_0->head);
 VAR_1->mode_config.num_encoder--;

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
}
