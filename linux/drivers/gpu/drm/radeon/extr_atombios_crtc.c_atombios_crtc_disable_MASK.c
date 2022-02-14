
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__** crtcs; } ;
struct radeon_device {int num_crtc; int family; TYPE_4__ mode_info; } ;
struct radeon_crtc {int crtc_id; int pll_id; int * connector; int * encoder; scalar_t__ adjusted_clock; scalar_t__ crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct radeon_atom_ss {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {TYPE_2__* primary; struct drm_device* dev; } ;
struct TYPE_7__ {int pll_id; scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_1__* fb; } ;
struct TYPE_5__ {int * obj; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct drm_crtc*,int ) ;
 int FUNC_6 (struct drm_crtc*,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int,struct radeon_atom_ss*) ;
 int FUNC_7 (struct drm_crtc*,int ) ;
 struct radeon_bo* FUNC_8 (int ) ;
 int FUNC_9 (struct radeon_bo*,int) ;
 int FUNC_10 (struct radeon_bo*) ;
 int FUNC_11 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_12 (struct drm_crtc*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct drm_crtc *VAR_10)
{
 struct radeon_crtc *VAR_11 = FUNC_12(VAR_10);
 struct drm_device *VAR_12 = VAR_10->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 struct radeon_atom_ss VAR_14;
 int VAR_15;

 FUNC_5(VAR_10, VAR_8);
 if (VAR_10->primary->fb) {
  int VAR_16;
  struct radeon_bo *VAR_17;

  VAR_17 = FUNC_8(VAR_10->primary->fb->obj[0]);
  VAR_16 = FUNC_9(VAR_17, 0);
  if (FUNC_13(VAR_16))
   FUNC_3("failed to reserve rbo before unpin\n");
  else {
   FUNC_10(VAR_17);
   FUNC_11(VAR_17);
  }
 }

 if (FUNC_1(VAR_13))
  FUNC_4(VAR_9 + VAR_11->crtc_offset, 0);
 else if (FUNC_0(VAR_13))
  FUNC_4(VAR_3 + VAR_11->crtc_offset, 0);

 if (FUNC_2(VAR_13))
  FUNC_7(VAR_10, VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_13->num_crtc; VAR_15++) {
  if (VAR_13->mode_info.crtcs[VAR_15] &&
      VAR_13->mode_info.crtcs[VAR_15]->enabled &&
      VAR_15 != VAR_11->crtc_id &&
      VAR_11->pll_id == VAR_13->mode_info.crtcs[VAR_15]->pll_id) {



   goto done;
  }
 }

 switch (VAR_11->pll_id) {
 case 129:
 case 128:

  FUNC_6(VAR_10, VAR_11->crtc_id, VAR_11->pll_id,
       0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_14);
  break;
 case 130:

  if ((VAR_13->family == VAR_4) ||
      (VAR_13->family == VAR_7) ||
      (VAR_13->family == VAR_5) ||
      (VAR_13->family == VAR_6))
   FUNC_6(VAR_10, VAR_11->crtc_id, VAR_11->pll_id,
        0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_14);
  break;
 default:
  break;
 }
done:
 VAR_11->pll_id = VAR_2;
 VAR_11->adjusted_clock = 0;
 VAR_11->encoder = ((void*)0);
 VAR_11->connector = ((void*)0);
}
