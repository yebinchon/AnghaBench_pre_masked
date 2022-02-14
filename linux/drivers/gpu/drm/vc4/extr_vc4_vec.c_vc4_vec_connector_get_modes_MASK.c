
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct TYPE_3__ {size_t mode; } ;
struct drm_connector_state {TYPE_1__ tv; } ;
struct drm_connector {int dev; struct drm_connector_state* state; } ;
struct TYPE_4__ {int mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_2)
{
 struct drm_connector_state *VAR_3 = VAR_2->state;
 struct drm_display_mode *VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev,
      VAR_1[VAR_3->tv.mode].mode);
 if (!VAR_4) {
  FUNC_0("Failed to create a new display mode\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_4);

 return 1;
}
