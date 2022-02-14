
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int height_cm; int width_cm; } ;
struct drm_connector {int dummy; } ;
struct cdn_dp_device {int lock; int sink_has_audio; int dev; struct edid* edid; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 struct cdn_dp_device* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 int FUNC_4 (struct edid*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct cdn_dp_device *VAR_1 = FUNC_1(VAR_0);
 struct edid *VAR_2;
 int VAR_3 = 0;

 FUNC_5(&VAR_1->lock);
 VAR_2 = VAR_1->edid;
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "got edid: width[%d] x height[%d]\n",
      VAR_2->width_cm, VAR_2->height_cm);

  VAR_1->sink_has_audio = FUNC_4(VAR_2);
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3)
   FUNC_3(VAR_0,
        VAR_2);
 }
 FUNC_6(&VAR_1->lock);

 return VAR_3;
}
