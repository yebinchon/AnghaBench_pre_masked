
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_34)
{

 struct amdgpu_crtc *VAR_35 = FUNC_3(VAR_34);
 struct drm_device *VAR_36 = VAR_34->dev;
 struct amdgpu_device *VAR_37 = VAR_36->dev_private;
 u16 *VAR_38, *VAR_39, *VAR_40;
 int VAR_41;

 FUNC_0("%d\n", VAR_35->crtc_id);

 FUNC_2(VAR_28 + VAR_35->crtc_offset,
        ((0 << VAR_5) |
  (0 << VAR_6)));
 FUNC_2(VAR_31 + VAR_35->crtc_offset,
        VAR_11);
 FUNC_2(VAR_32 + VAR_35->crtc_offset,
        VAR_12);
 FUNC_2(VAR_29 + VAR_35->crtc_offset,
        ((0 << VAR_7) |
  (0 << VAR_8)));

 FUNC_2(VAR_19 + VAR_35->crtc_offset, 0);

 FUNC_2(VAR_16 + VAR_35->crtc_offset, 0);
 FUNC_2(VAR_17 + VAR_35->crtc_offset, 0);
 FUNC_2(VAR_18 + VAR_35->crtc_offset, 0);

 FUNC_2(VAR_22 + VAR_35->crtc_offset, 0xffff);
 FUNC_2(VAR_23 + VAR_35->crtc_offset, 0xffff);
 FUNC_2(VAR_24 + VAR_35->crtc_offset, 0xffff);

 FUNC_2(VAR_21 + VAR_35->crtc_offset, 0);
 FUNC_2(VAR_25 + VAR_35->crtc_offset, 0x00000007);

 FUNC_2(VAR_20 + VAR_35->crtc_offset, 0);
 VAR_38 = VAR_34->gamma_store;
 VAR_39 = VAR_38 + VAR_34->gamma_size;
 VAR_40 = VAR_39 + VAR_34->gamma_size;
 for (VAR_41 = 0; VAR_41 < 256; VAR_41++) {
  FUNC_2(VAR_15 + VAR_35->crtc_offset,
         ((*VAR_38++ & 0xffc0) << 14) |
         ((*VAR_39++ & 0xffc0) << 4) |
         (*VAR_40++ >> 6));
 }

 FUNC_2(VAR_26 + VAR_35->crtc_offset,
        ((0 << VAR_1) |
  (0 << VAR_2) |
  FUNC_1(0) |
  (0 << VAR_0)));
 FUNC_2(VAR_27 + VAR_35->crtc_offset,
        ((0 << VAR_3) |
  (0 << VAR_4)));
 FUNC_2(VAR_33 + VAR_35->crtc_offset,
        ((0 << VAR_13) |
  (0 << VAR_14)));
 FUNC_2(VAR_30 + VAR_35->crtc_offset,
        ((0 << VAR_9) |
  (0 << VAR_10)));

 FUNC_2(0x1a50 + VAR_35->crtc_offset, 0);


}
