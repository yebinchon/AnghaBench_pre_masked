
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct komeda_pipeline {int id; int pxlclk; } ;
struct komeda_dev {int dpmode; int lock; int aclk; TYPE_4__* funcs; } ;
struct drm_display_mode {int crtc_clock; } ;
struct TYPE_7__ {struct drm_display_mode adjusted_mode; } ;
struct komeda_crtc_state {TYPE_3__ base; } ;
struct TYPE_6__ {int state; TYPE_1__* dev; } ;
struct komeda_crtc {TYPE_2__ base; struct komeda_pipeline* master; } ;
struct TYPE_8__ {int (* change_opmode ) (struct komeda_dev*,int) ;} ;
struct TYPE_5__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct komeda_crtc_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct komeda_dev*,int) ;
 struct komeda_crtc_state* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct komeda_crtc *VAR_1)
{
 struct komeda_dev *VAR_2 = VAR_1->base.dev->dev_private;
 struct komeda_pipeline *VAR_3 = VAR_1->master;
 struct komeda_crtc_state *VAR_4 = FUNC_9(VAR_1->base.state);
 struct drm_display_mode *VAR_5 = &VAR_4->base.adjusted_mode;
 u32 VAR_6;
 int VAR_7;

 FUNC_6(&VAR_2->lock);

 VAR_6 = VAR_2->dpmode | FUNC_0(VAR_3->id);
 if (FUNC_2(VAR_6 == VAR_2->dpmode)) {
  VAR_7 = 0;
  goto unlock;
 }

 VAR_7 = VAR_2->funcs->change_opmode(VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_1("failed to change opmode: 0x%x -> 0x%x.\n,",
     VAR_2->dpmode, VAR_6);
  goto unlock;
 }

 VAR_2->dpmode = VAR_6;





 if (VAR_6 != VAR_0) {
  VAR_7 = FUNC_4(VAR_2->aclk, FUNC_5(VAR_4));
  if (VAR_7)
   FUNC_1("failed to set aclk.\n");
  VAR_7 = FUNC_3(VAR_2->aclk);
  if (VAR_7)
   FUNC_1("failed to enable aclk.\n");
 }

 VAR_7 = FUNC_4(VAR_3->pxlclk, VAR_5->crtc_clock * 1000);
 if (VAR_7)
  FUNC_1("failed to set pxlclk for pipe%d\n", VAR_3->id);
 VAR_7 = FUNC_3(VAR_3->pxlclk);
 if (VAR_7)
  FUNC_1("failed to enable pxl clk for pipe%d.\n", VAR_3->id);

unlock:
 FUNC_7(&VAR_2->lock);

 return VAR_7;
}
