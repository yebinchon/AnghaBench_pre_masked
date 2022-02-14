
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
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
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int) ;

__attribute__((used)) static enum drm_connector_status FUNC_8(struct drm_encoder *VAR_23,
          struct drm_connector *VAR_24)
{
 struct drm_device *VAR_25 = VAR_23->dev;
 struct radeon_device *VAR_26 = VAR_25->dev_private;
 uint32_t VAR_27, VAR_28;
 uint32_t VAR_29, VAR_30, VAR_31, VAR_32;
 enum drm_connector_status VAR_33 = VAR_22;
 bool VAR_34 = 1;





 if (FUNC_1(VAR_26)) {
  return VAR_21;
 }


 VAR_27 = FUNC_4(VAR_20);
 VAR_28 = FUNC_3(VAR_1);
 VAR_29 = FUNC_3(VAR_5);
 VAR_30 = FUNC_3(VAR_4);
 VAR_31 = FUNC_3(VAR_11);

 VAR_32 = VAR_27 &
  ~(VAR_18 | VAR_19);
 FUNC_6(VAR_20, VAR_32);

 VAR_32 = VAR_28 | VAR_0;
 FUNC_5(VAR_1, VAR_32);

 VAR_32 = VAR_6 |
  VAR_7;

 if (VAR_34)
  VAR_32 |= VAR_9;
 else
  VAR_32 |= VAR_8;

 if (FUNC_0(VAR_26))
  VAR_32 |= (0x1b6 << VAR_10);
 else if (FUNC_2(VAR_26))
  VAR_32 |= (0x1ac << VAR_10);
 else
  VAR_32 |= (0x180 << VAR_10);

 FUNC_5(VAR_5, VAR_32);

 VAR_32 = VAR_30 & ~(VAR_16 | VAR_12);
 VAR_32 |= VAR_17 | VAR_2;
 FUNC_5(VAR_4, VAR_32);

 VAR_32 = VAR_31;
 VAR_32 &= ~(VAR_15 |
   VAR_14 |
   VAR_13);

 FUNC_5(VAR_11, VAR_32);

 FUNC_7(2);

 if (FUNC_3(VAR_4) & VAR_3)
  VAR_33 = VAR_21;


 FUNC_5(VAR_4, VAR_30);
 FUNC_5(VAR_11, VAR_31);
 FUNC_5(VAR_5, VAR_29);
 FUNC_5(VAR_1, VAR_28);
 FUNC_6(VAR_20, VAR_27);

 return VAR_33;
}
