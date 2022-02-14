
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {struct drm_crtc_commit* commit; } ;
struct drm_crtc_commit {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {struct drm_crtc_commit* fake_commit; } ;


 int VAR_0 ;
 struct drm_crtc_state* FUNC_0 (struct drm_atomic_state*,struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc_commit*,int *) ;
 struct drm_crtc_commit* FUNC_2 (int,int ) ;

__attribute__((used)) static struct drm_crtc_commit *
FUNC_3(struct drm_atomic_state *VAR_1, struct drm_crtc *VAR_2)
{
 if (VAR_2) {
  struct drm_crtc_state *VAR_3;

  VAR_3 = FUNC_0(VAR_1, VAR_2);

  return VAR_3->commit;
 }

 if (!VAR_1->fake_commit) {
  VAR_1->fake_commit = FUNC_2(sizeof(*VAR_1->fake_commit), VAR_0);
  if (!VAR_1->fake_commit)
   return ((void*)0);

  FUNC_1(VAR_1->fake_commit, ((void*)0));
 }

 return VAR_1->fake_commit;
}
