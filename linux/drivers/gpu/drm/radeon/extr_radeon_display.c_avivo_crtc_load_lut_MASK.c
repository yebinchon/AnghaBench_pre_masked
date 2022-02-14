
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; scalar_t__ crtc_offset; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int ,int ) ;
 struct radeon_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_13)
{
 struct radeon_crtc *VAR_14 = FUNC_4(VAR_13);
 struct drm_device *VAR_15 = VAR_13->dev;
 struct radeon_device *VAR_16 = VAR_15->dev_private;
 u16 *VAR_17, *VAR_18, *VAR_19;
 int VAR_20;

 FUNC_0("%d\n", VAR_14->crtc_id);
 FUNC_1(VAR_4 + VAR_14->crtc_offset, 0);

 FUNC_1(VAR_1 + VAR_14->crtc_offset, 0);
 FUNC_1(VAR_2 + VAR_14->crtc_offset, 0);
 FUNC_1(VAR_3 + VAR_14->crtc_offset, 0);

 FUNC_1(VAR_5 + VAR_14->crtc_offset, 0xffff);
 FUNC_1(VAR_6 + VAR_14->crtc_offset, 0xffff);
 FUNC_1(VAR_7 + VAR_14->crtc_offset, 0xffff);

 FUNC_1(VAR_11, VAR_14->crtc_id);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_12, 0x0000003f);

 FUNC_3(VAR_9, 0);
 VAR_17 = VAR_13->gamma_store;
 VAR_18 = VAR_17 + VAR_13->gamma_size;
 VAR_19 = VAR_18 + VAR_13->gamma_size;
 for (VAR_20 = 0; VAR_20 < 256; VAR_20++) {
  FUNC_1(VAR_8,
         ((*VAR_17++ & 0xffc0) << 14) |
         ((*VAR_18++ & 0xffc0) << 4) |
         (*VAR_19++ >> 6));
 }


 FUNC_2(VAR_0 + VAR_14->crtc_offset, VAR_14->crtc_id, ~1);
}
