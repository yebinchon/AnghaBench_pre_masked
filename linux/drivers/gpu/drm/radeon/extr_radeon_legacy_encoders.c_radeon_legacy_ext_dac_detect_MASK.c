
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct drm_encoder *VAR_25,
      struct drm_connector *VAR_26)
{
 struct drm_device *VAR_27 = VAR_25->dev;
 struct radeon_device *VAR_28 = VAR_27->dev_private;
 uint32_t VAR_29, VAR_30, VAR_31, VAR_32;
 uint32_t VAR_33, VAR_34, VAR_35;
 uint32_t VAR_36, VAR_37, VAR_38;
 uint32_t VAR_39, VAR_40, VAR_41;
 uint32_t VAR_42, VAR_43;
 bool VAR_44 = 0;
 int VAR_45;


 VAR_29 = FUNC_0(VAR_23);
 VAR_30 = FUNC_0(VAR_19);
 VAR_31 = FUNC_0(VAR_16);
 VAR_32 = FUNC_0(VAR_4);
 VAR_33 = FUNC_0(VAR_10);
 VAR_34 = FUNC_0(VAR_11);
 VAR_35 = FUNC_0(VAR_12);
 VAR_36 = FUNC_0(VAR_13);
 VAR_37 = FUNC_0(VAR_14);
 VAR_38 = FUNC_0(VAR_15);
 VAR_40 = FUNC_0(VAR_6);
 VAR_41 = FUNC_0(VAR_8);
 VAR_42 = FUNC_0(VAR_5);
 VAR_43 = FUNC_0(VAR_7);

 VAR_39 = FUNC_0(VAR_23);
 VAR_39 &= ~VAR_22;
 FUNC_1(VAR_23, VAR_39);

 FUNC_1(VAR_19, (VAR_20 |
         VAR_21 |
         VAR_1 |
         VAR_18 |
         VAR_0));

 FUNC_1(VAR_16, (VAR_9 |
      VAR_17));

 FUNC_1(VAR_4, (VAR_3 |
           VAR_2));

 FUNC_1(VAR_10, 0x00000000);
 FUNC_1(VAR_11, 0x000003f0);
 FUNC_1(VAR_12, 0x00000000);
 FUNC_1(VAR_13, 0x000003f0);
 FUNC_1(VAR_14, 0x00000000);
 FUNC_1(VAR_15, 0x000003f0);

 FUNC_1(VAR_6, 0x01000008);
 FUNC_1(VAR_5, 0x00000800);
 FUNC_1(VAR_8, 0x00080001);
 FUNC_1(VAR_7, 0x00000080);

 for (VAR_45 = 0; VAR_45 < 200; VAR_45++) {
  VAR_39 = FUNC_0(VAR_23);
  if (VAR_39 & VAR_24)
   VAR_44 = 1;

  if (VAR_44)
   break;

  if (!FUNC_2())
   FUNC_3(1);
  else
   FUNC_4(1);
 }


 FUNC_1(VAR_10, VAR_33);
 FUNC_1(VAR_11, VAR_34);
 FUNC_1(VAR_12, VAR_35);
 FUNC_1(VAR_13, VAR_36);
 FUNC_1(VAR_14, VAR_37);
 FUNC_1(VAR_15, VAR_38);
 FUNC_1(VAR_6, VAR_40);
 FUNC_1(VAR_8, VAR_41);
 FUNC_1(VAR_5, VAR_42);
 FUNC_1(VAR_7, VAR_43);
 FUNC_1(VAR_4, VAR_32);
 FUNC_1(VAR_16, VAR_31);
 FUNC_1(VAR_19, VAR_30);
 FUNC_1(VAR_23, VAR_29);

 return VAR_44;
}
