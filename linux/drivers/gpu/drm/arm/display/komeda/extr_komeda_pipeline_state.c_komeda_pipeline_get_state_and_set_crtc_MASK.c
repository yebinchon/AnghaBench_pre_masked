
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline_state {struct drm_crtc* crtc; scalar_t__ active_comps; } ;
struct komeda_pipeline {int id; } ;
struct komeda_crtc_state {int affected_pipes; int active_pipes; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_0 ;
 struct komeda_pipeline_state* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct komeda_pipeline_state*) ;
 int FUNC_4 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 scalar_t__ FUNC_6 (struct drm_crtc*,struct drm_crtc*) ;
 struct komeda_pipeline_state* FUNC_7 (struct komeda_pipeline*,struct drm_atomic_state*) ;
 struct komeda_crtc_state* FUNC_8 (int ) ;

__attribute__((used)) static struct komeda_pipeline_state *
FUNC_9(struct komeda_pipeline *VAR_1,
           struct drm_atomic_state *VAR_2,
           struct drm_crtc *VAR_3)
{
 struct komeda_pipeline_state *VAR_4;

 VAR_4 = FUNC_7(VAR_1, VAR_2);
 if (FUNC_3(VAR_4))
  return VAR_4;

 if (FUNC_6(VAR_3, VAR_4->crtc)) {
  FUNC_1("CRTC%d required pipeline%d is busy.\n",
     FUNC_5(VAR_3), VAR_1->id);
  return FUNC_2(-VAR_0);
 }


 if (!VAR_3 && VAR_4->active_comps) {
  FUNC_1("Disabling a busy pipeline:%d.\n", VAR_1->id);
  return FUNC_2(-VAR_0);
 }

 VAR_4->crtc = VAR_3;

 if (VAR_3) {
  struct komeda_crtc_state *VAR_5;

  VAR_5 = FUNC_8(FUNC_4(VAR_2,
             VAR_3));

  VAR_5->active_pipes |= FUNC_0(VAR_1->id);
  VAR_5->affected_pipes |= FUNC_0(VAR_1->id);
 }
 return VAR_4;
}
