
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct vc4_crtc {int cob_size; int t_vblank; int channel; } ;
struct drm_display_mode {int flags; int crtc_htotal; int crtc_hdisplay; int vtotal; int vdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct drm_crtc* FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 () ;
 struct vc4_crtc* FUNC_5 (struct drm_crtc*) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;

bool FUNC_7(struct drm_device *VAR_3, unsigned int VAR_4,
        bool VAR_5, int *VAR_6, int *VAR_7,
        ktime_t *VAR_8, ktime_t *VAR_9,
        const struct drm_display_mode *VAR_10)
{
 struct vc4_dev *VAR_11 = FUNC_6(VAR_3);
 struct drm_crtc *VAR_12 = FUNC_3(VAR_3, VAR_4);
 struct vc4_crtc *VAR_13 = FUNC_5(VAR_12);
 u32 VAR_14;
 int VAR_15;
 int VAR_16;
 bool VAR_17 = 0;




 if (VAR_8)
  *VAR_8 = FUNC_4();





 VAR_14 = FUNC_0(FUNC_1(VAR_13->channel));


 if (VAR_9)
  *VAR_9 = FUNC_4();




 *VAR_6 = FUNC_2(VAR_14, VAR_2);
 *VAR_7 = 0;

 if (VAR_10->flags & VAR_0) {
  *VAR_6 /= 2;


  if (FUNC_2(VAR_14, VAR_1) % 2)
   *VAR_7 += VAR_10->crtc_htotal / 2;
 }


 VAR_15 = VAR_13->cob_size / VAR_10->crtc_hdisplay;

 if (VAR_15 > 0)
  VAR_17 = 1;


 if (*VAR_6 > VAR_15) {
  *VAR_6 -= VAR_15 + 1;

  return VAR_17;
 }
 VAR_16 = VAR_10->vtotal - VAR_10->vdisplay;

 if (VAR_5) {
  *VAR_6 = -VAR_16;

  if (VAR_8)
   *VAR_8 = VAR_13->t_vblank;
  if (VAR_9)
   *VAR_9 = VAR_13->t_vblank;
 } else {






  *VAR_6 = 0;
 }

 return VAR_17;
}
