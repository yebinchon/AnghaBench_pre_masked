
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_plane* plane; } ;
struct dpu_plane_state {TYPE_1__ base; } ;
struct dpu_plane {int dummy; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_plane*,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_plane*,TYPE_1__*) ;
 struct dpu_plane_state* FUNC_4 (int,int ) ;
 struct dpu_plane* FUNC_5 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_1)
{
 struct dpu_plane *VAR_2;
 struct dpu_plane_state *VAR_3;

 if (!VAR_1) {
  FUNC_1("invalid plane\n");
  return;
 }

 VAR_2 = FUNC_5(VAR_1);
 FUNC_0(VAR_2, "\n");


 if (VAR_1->state) {
  FUNC_3(VAR_1, VAR_1->state);
  VAR_1->state = 0;
 }

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_2(VAR_2, "failed to allocate state\n");
  return;
 }

 VAR_3->base.plane = VAR_1;

 VAR_1->state = &VAR_3->base;
}
