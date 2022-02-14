
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
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
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 struct amdgpu_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_46)
{
 struct amdgpu_crtc *VAR_47 = FUNC_4(VAR_46);
 struct drm_device *VAR_48 = VAR_46->dev;
 struct amdgpu_device *VAR_49 = VAR_48->dev_private;
 u16 *VAR_50, *VAR_51, *VAR_52;
 int VAR_53;
 u32 VAR_54;

 FUNC_0("%d\n", VAR_47->crtc_id);

 VAR_54 = FUNC_2(VAR_40 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_10, VAR_11, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_10, VAR_12, 0);
 FUNC_3(VAR_40 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_43 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_22, VAR_8, 1);
 FUNC_3(VAR_43 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_44 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_23, VAR_20, 1);
 FUNC_3(VAR_44 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_41 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_13, VAR_7, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_13, VAR_19, 0);
 FUNC_3(VAR_41 + VAR_47->crtc_offset, VAR_54);

 FUNC_3(VAR_30 + VAR_47->crtc_offset, 0);

 FUNC_3(VAR_27 + VAR_47->crtc_offset, 0);
 FUNC_3(VAR_28 + VAR_47->crtc_offset, 0);
 FUNC_3(VAR_29 + VAR_47->crtc_offset, 0);

 FUNC_3(VAR_33 + VAR_47->crtc_offset, 0xffff);
 FUNC_3(VAR_34 + VAR_47->crtc_offset, 0xffff);
 FUNC_3(VAR_35 + VAR_47->crtc_offset, 0xffff);

 FUNC_3(VAR_32 + VAR_47->crtc_offset, 0);
 FUNC_3(VAR_36 + VAR_47->crtc_offset, 0x00000007);

 FUNC_3(VAR_31 + VAR_47->crtc_offset, 0);
 VAR_50 = VAR_46->gamma_store;
 VAR_51 = VAR_50 + VAR_46->gamma_size;
 VAR_52 = VAR_51 + VAR_46->gamma_size;
 for (VAR_53 = 0; VAR_53 < 256; VAR_53++) {
  FUNC_3(VAR_26 + VAR_47->crtc_offset,
         ((*VAR_50++ & 0xffc0) << 14) |
         ((*VAR_51++ & 0xffc0) << 4) |
         (*VAR_52++ >> 6));
 }

 VAR_54 = FUNC_2(VAR_37 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_3, VAR_5, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_3, VAR_17, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_3, VAR_2, 0);
 FUNC_3(VAR_37 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_39 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_4, VAR_6, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_4, VAR_18, 0);
 FUNC_3(VAR_39 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_45 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_24, VAR_9, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_24, VAR_21, 0);
 FUNC_3(VAR_45 + VAR_47->crtc_offset, VAR_54);

 VAR_54 = FUNC_2(VAR_42 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_14, VAR_15, 0);
 VAR_54 = FUNC_1(VAR_54, VAR_14, VAR_16, 0);
 FUNC_3(VAR_42 + VAR_47->crtc_offset, VAR_54);


 FUNC_3(VAR_38 + VAR_47->crtc_offset, 0);



 VAR_54 = FUNC_2(VAR_25 + VAR_47->crtc_offset);
 VAR_54 = FUNC_1(VAR_54, VAR_0, VAR_1, 1);
 FUNC_3(VAR_25 + VAR_47->crtc_offset, VAR_54);
}
