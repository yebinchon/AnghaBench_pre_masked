
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder {TYPE_1__* audio; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct cea_sad {int dummy; } ;
struct TYPE_2__ {int (* write_sad_regs ) (struct drm_encoder*,struct cea_sad*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,struct cea_sad**) ;
 int FUNC_3 (struct cea_sad*) ;
 int FUNC_4 (struct drm_connector*) ;
 struct drm_connector* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,struct cea_sad*,int) ;
 struct radeon_encoder* FUNC_7 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_0)
{
 struct drm_connector *VAR_1 = FUNC_5(VAR_0);
 struct radeon_encoder *VAR_2 = FUNC_7(VAR_0);
 struct cea_sad *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return;

 VAR_4 = FUNC_2(FUNC_4(VAR_1), &VAR_3);
 if (VAR_4 <= 0) {
  FUNC_1("Couldn't read SADs: %d\n", VAR_4);
  return;
 }
 FUNC_0(!VAR_3);

 if (VAR_2->audio && VAR_2->audio->write_sad_regs)
  VAR_2->audio->write_sad_regs(VAR_0, VAR_3, VAR_4);

 FUNC_3(VAR_3);
}
