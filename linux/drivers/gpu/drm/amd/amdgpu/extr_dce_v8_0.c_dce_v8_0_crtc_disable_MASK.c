
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {TYPE_2__* primary; struct drm_device* dev; } ;
struct TYPE_8__ {int num_crtc; TYPE_3__** crtcs; } ;
struct amdgpu_device {int asic_type; TYPE_4__ mode_info; } ;
struct amdgpu_crtc {int crtc_id; int pll_id; int * connector; int * encoder; scalar_t__ adjusted_clock; } ;
struct amdgpu_bo {int dummy; } ;
struct amdgpu_atom_ss {int dummy; } ;
struct TYPE_7__ {int pll_id; scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_1__* fb; } ;
struct TYPE_5__ {int * obj; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 int FUNC_2 (struct drm_crtc*,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int,struct amdgpu_atom_ss*) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct drm_crtc*,int ) ;
 int FUNC_7 (struct drm_crtc*,int) ;
 struct amdgpu_bo* FUNC_8 (int ) ;
 struct amdgpu_crtc* FUNC_9 (struct drm_crtc*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_7)
{
 struct amdgpu_crtc *VAR_8 = FUNC_9(VAR_7);
 struct drm_device *VAR_9 = VAR_7->dev;
 struct amdgpu_device *VAR_10 = VAR_9->dev_private;
 struct amdgpu_atom_ss VAR_11;
 int VAR_12;

 FUNC_6(VAR_7, VAR_6);
 if (VAR_7->primary->fb) {
  int VAR_13;
  struct amdgpu_bo *VAR_14;

  VAR_14 = FUNC_8(VAR_7->primary->fb->obj[0]);
  VAR_13 = FUNC_3(VAR_14, 1);
  if (FUNC_10(VAR_13))
   FUNC_0("failed to reserve abo before unpin\n");
  else {
   FUNC_4(VAR_14);
   FUNC_5(VAR_14);
  }
 }

 FUNC_7(VAR_7, 0);

 FUNC_1(VAR_7, VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_10->mode_info.num_crtc; VAR_12++) {
  if (VAR_10->mode_info.crtcs[VAR_12] &&
      VAR_10->mode_info.crtcs[VAR_12]->enabled &&
      VAR_12 != VAR_8->crtc_id &&
      VAR_8->pll_id == VAR_10->mode_info.crtcs[VAR_12]->pll_id) {



   goto done;
  }
 }

 switch (VAR_8->pll_id) {
 case 129:
 case 128:

  FUNC_2(VAR_7, VAR_8->crtc_id, VAR_8->pll_id,
                                                 0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_11);
  break;
 case 130:

  if ((VAR_10->asic_type == VAR_5) ||
      (VAR_10->asic_type == VAR_3) ||
      (VAR_10->asic_type == VAR_4))
   FUNC_2(VAR_7, VAR_8->crtc_id, VAR_8->pll_id,
        0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_11);
  break;
 default:
  break;
 }
done:
 VAR_8->pll_id = VAR_2;
 VAR_8->adjusted_clock = 0;
 VAR_8->encoder = ((void*)0);
 VAR_8->connector = ((void*)0);
}
