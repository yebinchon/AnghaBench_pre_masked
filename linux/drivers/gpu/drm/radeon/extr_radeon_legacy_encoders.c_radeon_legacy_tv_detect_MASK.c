
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_encoder*,struct drm_connector*) ;

__attribute__((used)) static bool FUNC_6(struct drm_encoder *VAR_29,
        struct drm_connector *VAR_30)
{
 struct drm_device *VAR_31 = VAR_29->dev;
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 uint32_t VAR_33, VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37, VAR_38;
 bool VAR_39 = 0;

 if (FUNC_0(VAR_32))
  return FUNC_5(VAR_29, VAR_30);

 VAR_34 = FUNC_2(VAR_8);
 VAR_37 = FUNC_2(VAR_25);
 VAR_33 = FUNC_2(VAR_16);
 VAR_35 = FUNC_2(VAR_3);
 VAR_36 = FUNC_2(VAR_28);

 VAR_38 = VAR_34 & ~VAR_7;
 FUNC_3(VAR_8, VAR_38);

 VAR_38 = VAR_37 | VAR_27;
 VAR_38 &= ~(VAR_13 |
   VAR_11 |
   VAR_5 |
   VAR_23 |
   VAR_12);
 VAR_38 |= VAR_22 | VAR_4;
 FUNC_3(VAR_25, VAR_38);

 VAR_38 = VAR_19 | VAR_20 |
  VAR_26 | VAR_21 |
  (8 << VAR_15);

 if (VAR_35 & VAR_1)
  VAR_38 |= (4 << VAR_17);
 else
  VAR_38 |= (8 << VAR_17);
 FUNC_3(VAR_16, VAR_38);

 VAR_38 = VAR_6 | VAR_2 |
  VAR_10 |
  VAR_9 |
  VAR_0 |
  (0x109 << VAR_24);
 FUNC_3(VAR_28, VAR_38);

 FUNC_4(3);
 VAR_38 = FUNC_2(VAR_16);
 if (VAR_38 & VAR_18) {
  VAR_39 = 1;
  FUNC_1("S-video TV connection detected\n");
 } else if ((VAR_38 & VAR_14) != 0) {
  VAR_39 = 1;
  FUNC_1("Composite TV connection detected\n");
 }

 FUNC_3(VAR_28, VAR_36);
 FUNC_3(VAR_16, VAR_33);
 FUNC_3(VAR_25, VAR_37);
 FUNC_3(VAR_8, VAR_34);
 return VAR_39;
}
