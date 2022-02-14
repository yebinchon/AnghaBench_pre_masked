
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vidi_context {int dev; TYPE_1__* raw_edid; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int extensions; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vidi_context* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_4)
{
 struct vidi_context *VAR_5 = FUNC_1(VAR_4);
 struct edid *VAR_6;
 int VAR_7;





 if (!VAR_5->raw_edid) {
  FUNC_0(VAR_5->dev, "raw_edid is null.\n");
  return -VAR_1;
 }

 VAR_7 = (1 + VAR_5->raw_edid->extensions) * VAR_0;
 VAR_6 = FUNC_4(VAR_5->raw_edid, VAR_7, VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "failed to allocate edid\n");
  return -VAR_2;
 }

 FUNC_3(VAR_4, VAR_6);

 return FUNC_2(VAR_4, VAR_6);
}
