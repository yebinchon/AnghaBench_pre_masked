
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder {TYPE_1__* audio; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int (* write_latency_fields ) (struct drm_encoder*,struct drm_connector*,struct drm_display_mode*) ;} ;


 struct drm_connector* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*,struct drm_display_mode*) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0,
           struct drm_display_mode *VAR_1)
{
 struct drm_connector *VAR_2 = FUNC_0(VAR_0);
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_2)
  return;

 if (VAR_3->audio && VAR_3->audio->write_latency_fields)
  VAR_3->audio->write_latency_fields(VAR_0, VAR_2, VAR_1);
}
