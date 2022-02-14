
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_framebuffer {TYPE_1__ base; } ;
struct dpu_plane_state {scalar_t__ aspace; } ;
struct dpu_plane {int base; } ;
struct TYPE_4__ {scalar_t__ aspace; } ;
struct dpu_kms {TYPE_2__ base; } ;
struct dpu_hw_fmt_layout {int dummy; } ;


 int FUNC_0 (struct dpu_plane*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_plane*,char*,int) ;
 struct dpu_kms* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,struct drm_framebuffer*,struct dpu_hw_fmt_layout*) ;
 int FUNC_5 (struct drm_plane*,struct drm_plane_state*) ;
 int FUNC_6 (struct drm_framebuffer*,scalar_t__) ;
 struct dpu_plane* FUNC_7 (struct drm_plane*) ;
 struct dpu_plane_state* FUNC_8 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_9(struct drm_plane *VAR_0,
  struct drm_plane_state *VAR_1)
{
 struct drm_framebuffer *VAR_2 = VAR_1->fb;
 struct dpu_plane *VAR_3 = FUNC_7(VAR_0);
 struct dpu_plane_state *VAR_4 = FUNC_8(VAR_1);
 struct dpu_hw_fmt_layout VAR_5;
 struct dpu_kms *VAR_6 = FUNC_3(&VAR_3->base);
 int VAR_7;

 if (!VAR_1->fb)
  return 0;

 FUNC_0(VAR_3, "FB[%u]\n", VAR_2->base.id);


 VAR_4->aspace = VAR_6->base.aspace;






 FUNC_5(VAR_0, VAR_1);

 if (VAR_4->aspace) {
  VAR_7 = FUNC_6(VAR_1->fb,
    VAR_4->aspace);
  if (VAR_7) {
   FUNC_1("failed to prepare framebuffer\n");
   return VAR_7;
  }
 }


 VAR_7 = FUNC_4(VAR_4->aspace,
   VAR_1->fb, &VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_3, "failed to get format layout, %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
