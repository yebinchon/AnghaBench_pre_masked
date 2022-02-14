
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
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
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
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 struct amdgpu_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_38)
{
 struct amdgpu_crtc *VAR_39 = FUNC_4(VAR_38);
 struct drm_device *VAR_40 = VAR_38->dev;
 struct amdgpu_device *VAR_41 = VAR_40->dev_private;
 u16 *VAR_42, *VAR_43, *VAR_44;
 int VAR_45;
 u32 VAR_46;

 FUNC_0("%d\n", VAR_39->crtc_id);

 VAR_46 = FUNC_2(VAR_33 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_11, VAR_12, 0);
 FUNC_3(VAR_33 + VAR_39->crtc_offset, VAR_46);

 VAR_46 = FUNC_2(VAR_36 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_16, VAR_9, 1);
 FUNC_3(VAR_36 + VAR_39->crtc_offset, VAR_46);

 VAR_46 = FUNC_2(VAR_34 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_13, VAR_8, 0);
 FUNC_3(VAR_34 + VAR_39->crtc_offset, VAR_46);

 FUNC_3(VAR_23 + VAR_39->crtc_offset, 0);

 FUNC_3(VAR_20 + VAR_39->crtc_offset, 0);
 FUNC_3(VAR_21 + VAR_39->crtc_offset, 0);
 FUNC_3(VAR_22 + VAR_39->crtc_offset, 0);

 FUNC_3(VAR_26 + VAR_39->crtc_offset, 0xffff);
 FUNC_3(VAR_27 + VAR_39->crtc_offset, 0xffff);
 FUNC_3(VAR_28 + VAR_39->crtc_offset, 0xffff);

 FUNC_3(VAR_25 + VAR_39->crtc_offset, 0);
 FUNC_3(VAR_29 + VAR_39->crtc_offset, 0x00000007);

 FUNC_3(VAR_24 + VAR_39->crtc_offset, 0);
 VAR_42 = VAR_38->gamma_store;
 VAR_43 = VAR_42 + VAR_38->gamma_size;
 VAR_44 = VAR_43 + VAR_38->gamma_size;
 for (VAR_45 = 0; VAR_45 < 256; VAR_45++) {
  FUNC_3(VAR_19 + VAR_39->crtc_offset,
         ((*VAR_42++ & 0xffc0) << 14) |
         ((*VAR_43++ & 0xffc0) << 4) |
         (*VAR_44++ >> 6));
 }

 VAR_46 = FUNC_2(VAR_30 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_4, VAR_6, 0);
 VAR_46 = FUNC_1(VAR_46, VAR_4, VAR_3, 0);
 VAR_46 = FUNC_1(VAR_46, VAR_4, VAR_1, 0);
 FUNC_3(VAR_30 + VAR_39->crtc_offset, VAR_46);

 VAR_46 = FUNC_2(VAR_32 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_5, VAR_7, 0);
 FUNC_3(VAR_32 + VAR_39->crtc_offset, VAR_46);

 VAR_46 = FUNC_2(VAR_37 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_17, VAR_10, 0);
 FUNC_3(VAR_37 + VAR_39->crtc_offset, VAR_46);

 VAR_46 = FUNC_2(VAR_35 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_14, VAR_15, 0);
 FUNC_3(VAR_35 + VAR_39->crtc_offset, VAR_46);


 FUNC_3(VAR_31 + VAR_39->crtc_offset, 0);



 VAR_46 = FUNC_2(VAR_18 + VAR_39->crtc_offset);
 VAR_46 = FUNC_1(VAR_46, VAR_0, VAR_2, 1);
 FUNC_3(VAR_18 + VAR_39->crtc_offset, VAR_46);
}
