
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (scalar_t__,int) ;
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
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 struct amdgpu_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_42)
{
 struct amdgpu_crtc *VAR_43 = FUNC_2(VAR_42);
 struct drm_device *VAR_44 = VAR_42->dev;
 struct amdgpu_device *VAR_45 = VAR_44->dev_private;
 u16 *VAR_46, *VAR_47, *VAR_48;
 int VAR_49;

 FUNC_0("%d\n", VAR_43->crtc_id);

 FUNC_1(VAR_36 + VAR_43->crtc_offset,
        ((VAR_8 << VAR_9) |
  (VAR_8 << VAR_10)));
 FUNC_1(VAR_39 + VAR_43->crtc_offset,
        VAR_17);
 FUNC_1(VAR_40 + VAR_43->crtc_offset,
        VAR_18);
 FUNC_1(VAR_37 + VAR_43->crtc_offset,
        ((VAR_13 << VAR_11) |
  (VAR_13 << VAR_12)));

 FUNC_1(VAR_27 + VAR_43->crtc_offset, 0);

 FUNC_1(VAR_24 + VAR_43->crtc_offset, 0);
 FUNC_1(VAR_25 + VAR_43->crtc_offset, 0);
 FUNC_1(VAR_26 + VAR_43->crtc_offset, 0);

 FUNC_1(VAR_30 + VAR_43->crtc_offset, 0xffff);
 FUNC_1(VAR_31 + VAR_43->crtc_offset, 0xffff);
 FUNC_1(VAR_32 + VAR_43->crtc_offset, 0xffff);

 FUNC_1(VAR_29 + VAR_43->crtc_offset, 0);
 FUNC_1(VAR_33 + VAR_43->crtc_offset, 0x00000007);

 FUNC_1(VAR_28 + VAR_43->crtc_offset, 0);
 VAR_46 = VAR_42->gamma_store;
 VAR_47 = VAR_46 + VAR_42->gamma_size;
 VAR_48 = VAR_47 + VAR_42->gamma_size;
 for (VAR_49 = 0; VAR_49 < 256; VAR_49++) {
  FUNC_1(VAR_23 + VAR_43->crtc_offset,
         ((*VAR_46++ & 0xffc0) << 14) |
         ((*VAR_47++ & 0xffc0) << 4) |
         (*VAR_48++ >> 6));
 }

 FUNC_1(VAR_34 + VAR_43->crtc_offset,
        ((VAR_1 << VAR_3) |
  (VAR_1 << VAR_4) |
  (VAR_1 << VAR_2)));
 FUNC_1(VAR_35 + VAR_43->crtc_offset,
        ((VAR_5 << VAR_6) |
  (VAR_5 << VAR_7)));
 FUNC_1(VAR_41 + VAR_43->crtc_offset,
        ((VAR_19 << VAR_20) |
  (VAR_19 << VAR_21)));
 FUNC_1(VAR_38 + VAR_43->crtc_offset,
        ((VAR_14 << VAR_15) |
  (VAR_14 << VAR_16)));

 FUNC_1(0x1a50 + VAR_43->crtc_offset, 0);



 FUNC_1(VAR_22 + VAR_43->crtc_offset,
        VAR_0);
}
