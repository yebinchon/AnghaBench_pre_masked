
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {struct zx_crtc* aux_crtc; struct zx_crtc* main_crtc; scalar_t__ osd; scalar_t__ otfppu; struct device* dev; } ;
struct zx_plane {int plane; int * bits; scalar_t__ rsz; scalar_t__ hbsc; scalar_t__ csc; scalar_t__ layer; struct device* dev; } ;
struct zx_crtc {int chn_type; int crtc; int * primary; int pixclk; int * bits; int * regs; scalar_t__ dither; scalar_t__ chncsc; scalar_t__ chnreg; struct zx_vou_hw* vou; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum vou_chn_type { ____Placeholder_vou_chn_type } vou_chn_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*,int *,int *,int *,int *,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_7 (struct drm_device*,struct zx_plane*,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_25, struct zx_vou_hw *VAR_26,
   enum vou_chn_type VAR_27)
{
 struct device *VAR_28 = VAR_26->dev;
 struct zx_plane *VAR_29;
 struct zx_crtc *VAR_30;
 int VAR_31;

 VAR_30 = FUNC_4(VAR_28, sizeof(*VAR_30), VAR_8);
 if (!VAR_30)
  return -VAR_7;

 VAR_30->vou = VAR_26;
 VAR_30->chn_type = VAR_27;

 VAR_29 = FUNC_4(VAR_28, sizeof(*VAR_29), VAR_8);
 if (!VAR_29)
  return -VAR_7;

 VAR_29->dev = VAR_28;

 if (VAR_27 == VAR_17) {
  VAR_29->layer = VAR_26->osd + VAR_12;
  VAR_29->csc = VAR_26->osd + VAR_11;
  VAR_29->hbsc = VAR_26->osd + VAR_13;
  VAR_29->rsz = VAR_26->otfppu + VAR_14;
  VAR_29->bits = &VAR_24[0];
  VAR_30->chnreg = VAR_26->osd + VAR_16;
  VAR_30->chncsc = VAR_26->osd + VAR_9;
  VAR_30->dither = VAR_26->osd + VAR_10;
  VAR_30->regs = &VAR_21;
  VAR_30->bits = &VAR_20;
 } else {
  VAR_29->layer = VAR_26->osd + VAR_3;
  VAR_29->csc = VAR_26->osd + VAR_2;
  VAR_29->hbsc = VAR_26->osd + VAR_4;
  VAR_29->rsz = VAR_26->otfppu + VAR_5;
  VAR_29->bits = &VAR_24[1];
  VAR_30->chnreg = VAR_26->osd + VAR_15;
  VAR_30->chncsc = VAR_26->osd + VAR_0;
  VAR_30->dither = VAR_26->osd + VAR_1;
  VAR_30->regs = &VAR_19;
  VAR_30->bits = &VAR_18;
 }

 VAR_30->pixclk = FUNC_3(VAR_28, (VAR_27 == VAR_17) ?
       "main_wclk" : "aux_wclk");
 if (FUNC_1(VAR_30->pixclk)) {
  VAR_31 = FUNC_2(VAR_30->pixclk);
  FUNC_0(VAR_28, "failed to get pix clk: %d\n", VAR_31);
  return VAR_31;
 }

 VAR_31 = FUNC_7(VAR_25, VAR_29, VAR_6);
 if (VAR_31) {
  FUNC_0(VAR_28, "failed to init primary plane: %d\n", VAR_31);
  return VAR_31;
 }

 VAR_30->primary = &VAR_29->plane;

 VAR_31 = FUNC_6(VAR_25, &VAR_30->crtc, VAR_30->primary, ((void*)0),
     &VAR_22, ((void*)0));
 if (VAR_31) {
  FUNC_0(VAR_28, "failed to init drm crtc: %d\n", VAR_31);
  return VAR_31;
 }

 FUNC_5(&VAR_30->crtc, &VAR_23);

 if (VAR_27 == VAR_17)
  VAR_26->main_crtc = VAR_30;
 else
  VAR_26->aux_crtc = VAR_30;

 return 0;
}
