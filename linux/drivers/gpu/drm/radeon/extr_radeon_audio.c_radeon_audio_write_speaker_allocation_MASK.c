
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeon_encoder {TYPE_1__* audio; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int (* write_speaker_allocation ) (struct drm_encoder*,int *,int) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_connector*) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*,int *,int) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_0)
{
 struct drm_connector *VAR_1 = FUNC_4(VAR_0);
 struct radeon_encoder *VAR_2 = FUNC_6(VAR_0);
 u8 *VAR_3 = ((void*)0);
 int VAR_4;

 if (!VAR_1)
  return;

 VAR_4 = FUNC_1(FUNC_3(VAR_1),
         &VAR_3);
 if (VAR_4 < 0) {
  FUNC_0("Couldn't read Speaker Allocation Data Block: %d\n",
     VAR_4);
  VAR_4 = 0;
 }

 if (VAR_2->audio && VAR_2->audio->write_speaker_allocation)
  VAR_2->audio->write_speaker_allocation(VAR_0, VAR_3, VAR_4);

 FUNC_2(VAR_3);
}
