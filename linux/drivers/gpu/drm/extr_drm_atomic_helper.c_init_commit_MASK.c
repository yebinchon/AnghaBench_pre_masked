
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_commit {struct drm_crtc* crtc; int ref; int commit_entry; int cleanup_done; int hw_done; int flip_done; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc_commit *VAR_0, struct drm_crtc *VAR_1)
{
 FUNC_1(&VAR_0->flip_done);
 FUNC_1(&VAR_0->hw_done);
 FUNC_1(&VAR_0->cleanup_done);
 FUNC_0(&VAR_0->commit_entry);
 FUNC_2(&VAR_0->ref);
 VAR_0->crtc = VAR_1;
}
