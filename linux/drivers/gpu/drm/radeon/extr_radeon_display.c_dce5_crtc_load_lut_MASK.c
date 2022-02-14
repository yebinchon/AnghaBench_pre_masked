
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; int output_csc; int crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_17 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_24 ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_16 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_17 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_18(struct drm_crtc *VAR_29)
{
 struct radeon_crtc *VAR_30 = FUNC_17(VAR_29);
 struct drm_device *VAR_31 = VAR_29->dev;
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 u16 *VAR_33, *VAR_34, *VAR_35;
 int VAR_36;

 FUNC_1("%d\n", VAR_30->crtc_id);

 FUNC_16(VAR_19 + VAR_30->crtc_offset,
        (FUNC_8(VAR_18) |
  FUNC_9(VAR_18)));
 FUNC_16(VAR_25 + VAR_30->crtc_offset,
        VAR_17);
 FUNC_16(VAR_26 + VAR_30->crtc_offset,
        VAR_24);
 FUNC_16(VAR_20 + VAR_30->crtc_offset,
        (FUNC_5(VAR_21) |
  FUNC_14(VAR_21)));

 FUNC_16(VAR_6 + VAR_30->crtc_offset, 0);

 FUNC_16(VAR_3 + VAR_30->crtc_offset, 0);
 FUNC_16(VAR_4 + VAR_30->crtc_offset, 0);
 FUNC_16(VAR_5 + VAR_30->crtc_offset, 0);

 FUNC_16(VAR_9 + VAR_30->crtc_offset, 0xffff);
 FUNC_16(VAR_10 + VAR_30->crtc_offset, 0xffff);
 FUNC_16(VAR_11 + VAR_30->crtc_offset, 0xffff);

 FUNC_16(VAR_8 + VAR_30->crtc_offset, 0);
 FUNC_16(VAR_12 + VAR_30->crtc_offset, 0x00000007);

 FUNC_16(VAR_7 + VAR_30->crtc_offset, 0);
 VAR_33 = VAR_29->gamma_store;
 VAR_34 = VAR_33 + VAR_29->gamma_size;
 VAR_35 = VAR_34 + VAR_29->gamma_size;
 for (VAR_36 = 0; VAR_36 < 256; VAR_36++) {
  FUNC_16(VAR_2 + VAR_30->crtc_offset,
         ((*VAR_33++ & 0xffc0) << 14) |
         ((*VAR_34++ & 0xffc0) << 4) |
         (*VAR_35++ >> 6));
 }

 FUNC_16(VAR_14 + VAR_30->crtc_offset,
        (FUNC_3(VAR_13) |
  FUNC_12(VAR_13) |
  FUNC_7(VAR_13) |
  FUNC_2(VAR_13)));
 FUNC_16(VAR_16 + VAR_30->crtc_offset,
        (FUNC_4(VAR_15) |
  FUNC_13(VAR_15)));
 FUNC_16(VAR_28 + VAR_30->crtc_offset,
        (FUNC_6(VAR_27) |
  FUNC_15(VAR_27)));
 FUNC_16(VAR_23 + VAR_30->crtc_offset,
        (FUNC_10(VAR_30->output_csc) |
  FUNC_11(VAR_22)));

 FUNC_16(0x6940 + VAR_30->crtc_offset, 0);
 if (FUNC_0(VAR_32)) {



  FUNC_16(VAR_0 + VAR_30->crtc_offset,
         VAR_1);
 }
}
