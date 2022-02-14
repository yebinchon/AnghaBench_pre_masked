
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_win {int dummy; } ;
struct vop {int len; int is_enabled; int dev; int dclk; int reg_lock; struct vop_win* win; TYPE_1__* data; scalar_t__ regs; int * regsbak; int drm_dev; } ;
struct drm_crtc_state {int self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int win_size; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vop*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 struct vop* FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (struct vop*) ;
 int FUNC_13 (struct vop*) ;
 int FUNC_14 (struct vop*) ;
 int FUNC_15 (struct vop*,struct vop_win*) ;
 int FUNC_16 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct drm_crtc *VAR_2, struct drm_crtc_state *VAR_3)
{
 struct vop *VAR_4 = FUNC_11(VAR_2);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_6(VAR_4->dev);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "failed to get pm runtime: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_14(VAR_4);
 if (FUNC_2(VAR_5 < 0))
  goto err_put_pm_runtime;

 VAR_5 = FUNC_4(VAR_4->dclk);
 if (FUNC_2(VAR_5 < 0))
  goto err_disable_core;







 VAR_5 = FUNC_8(VAR_4->drm_dev, VAR_4->dev);
 if (VAR_5) {
  FUNC_0(VAR_4->dev,
         "failed to attach dma mapping, %d\n", VAR_5);
  goto err_disable_dclk;
 }

 FUNC_9(&VAR_4->reg_lock);
 for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6 += 4)
  FUNC_16(VAR_4->regsbak[VAR_6 / 4], VAR_4->regs + VAR_6);
 if (!VAR_3 || !VAR_3->self_refresh_active) {
  for (VAR_6 = 0; VAR_6 < VAR_4->data->win_size; VAR_6++) {
   struct vop_win *VAR_7 = &VAR_4->win[VAR_6];

   FUNC_15(VAR_4, VAR_7);
  }
 }
 FUNC_10(&VAR_4->reg_lock);

 FUNC_12(VAR_4);




 VAR_4->is_enabled = 1;

 FUNC_9(&VAR_4->reg_lock);

 FUNC_1(VAR_4, VAR_0, VAR_1, 1);

 FUNC_10(&VAR_4->reg_lock);

 FUNC_5(VAR_2);

 return 0;

err_disable_dclk:
 FUNC_3(VAR_4->dclk);
err_disable_core:
 FUNC_13(VAR_4);
err_put_pm_runtime:
 FUNC_7(VAR_4->dev);
 return VAR_5;
}
