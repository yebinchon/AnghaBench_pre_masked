
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct psb_pipe {int dpll; int fp0; int fp1; } ;
struct psb_offset {int fp1; int fp0; int dpll; } ;
struct gma_crtc {int pipe; } ;
struct gma_clock_t {int m1; int m2; int n; int p1; int p2; int dot; } ;
struct TYPE_3__ {int saveLVDS; } ;
struct TYPE_4__ {TYPE_1__ psb; struct psb_pipe* pipe; } ;
struct drm_psb_private {TYPE_2__ regs; struct psb_offset* regmap; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int,struct gma_clock_t*) ;
 struct gma_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_16,
    struct drm_crtc *VAR_17)
{
 struct drm_psb_private *VAR_18 = VAR_16->dev_private;
 struct gma_crtc *VAR_19 = FUNC_6(VAR_17);
 int VAR_20 = VAR_19->pipe;
 const struct psb_offset *VAR_21 = &VAR_18->regmap[VAR_20];
 u32 VAR_22;
 u32 VAR_23;
 struct gma_clock_t VAR_24;
 bool VAR_25;
 struct psb_pipe *VAR_26 = &VAR_18->regs.pipe[VAR_20];

 if (FUNC_3(VAR_16, 0)) {
  VAR_22 = FUNC_0(VAR_21->dpll);
  if ((VAR_22 & VAR_0) == 0)
   VAR_23 = FUNC_0(VAR_21->fp0);
  else
   VAR_23 = FUNC_0(VAR_21->fp1);
  VAR_25 = (VAR_20 == 1) && (FUNC_0(VAR_10) & VAR_11);
  FUNC_4(VAR_16);
 } else {
  VAR_22 = VAR_26->dpll;
  if ((VAR_22 & VAR_0) == 0)
   VAR_23 = VAR_26->fp0;
  else
   VAR_23 = VAR_26->fp1;

  VAR_25 = (VAR_20 == 1) &&
    (VAR_18->regs.psb.saveLVDS & VAR_11);
 }

 VAR_24.m1 = (VAR_23 & VAR_4) >> VAR_5;
 VAR_24.m2 = (VAR_23 & VAR_6) >> VAR_7;
 VAR_24.n = (VAR_23 & VAR_8) >> VAR_9;

 if (VAR_25) {
  VAR_24.p1 =
      FUNC_2((VAR_22 &
    VAR_2) >>
   VAR_3);
  if (VAR_24.p1 == 0) {
   VAR_24.p1 = 4;
   FUNC_1(VAR_16->dev, "PLL %d\n", VAR_22);
  }
  VAR_24.p2 = 14;

  if ((VAR_22 & VAR_15) ==
      VAR_12) {

   FUNC_5(66000, &VAR_24);
  } else
   FUNC_5(48000, &VAR_24);
 } else {
  if (VAR_22 & VAR_13)
   VAR_24.p1 = 2;
  else {
   VAR_24.p1 =
       ((VAR_22 &
         VAR_1) >>
        VAR_3) + 2;
  }
  if (VAR_22 & VAR_14)
   VAR_24.p2 = 4;
  else
   VAR_24.p2 = 2;

  FUNC_5(48000, &VAR_24);
 }






 return VAR_24.dot;
}
