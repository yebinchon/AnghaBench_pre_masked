
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdi; } ;
union hdmi_infoframe {TYPE_1__ spd; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (struct drm_encoder*,union hdmi_infoframe*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_1)
{
 union hdmi_infoframe VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2.spd, "Broadcom", "Videocore");
 if (VAR_3 < 0) {
  FUNC_0("couldn't fill SPD infoframe\n");
  return;
 }

 VAR_2.spd.sdi = VAR_0;

 FUNC_2(VAR_1, &VAR_2);
}
