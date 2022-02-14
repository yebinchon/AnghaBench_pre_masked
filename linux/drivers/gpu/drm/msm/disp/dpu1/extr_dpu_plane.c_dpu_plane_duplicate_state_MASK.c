
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int dummy; } ;
struct drm_plane {int state; } ;
struct dpu_plane_state {int pending; struct drm_plane_state base; } ;
struct dpu_plane {int dummy; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_plane*,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_plane*,struct drm_plane_state*) ;
 struct dpu_plane_state* FUNC_4 (struct dpu_plane_state*,int,int ) ;
 struct dpu_plane* FUNC_5 (struct drm_plane*) ;
 struct dpu_plane_state* FUNC_6 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_7(struct drm_plane *VAR_1)
{
 struct dpu_plane *VAR_2;
 struct dpu_plane_state *VAR_3;
 struct dpu_plane_state *VAR_4;

 if (!VAR_1) {
  FUNC_1("invalid plane\n");
  return ((void*)0);
 } else if (!VAR_1->state) {
  FUNC_1("invalid plane state\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_6(VAR_1->state);
 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = FUNC_4(VAR_4, sizeof(*VAR_4), VAR_0);
 if (!VAR_3) {
  FUNC_2(VAR_2, "failed to allocate state\n");
  return ((void*)0);
 }

 FUNC_0(VAR_2, "\n");

 VAR_3->pending = 0;

 FUNC_3(VAR_1, &VAR_3->base);

 return &VAR_3->base;
}
