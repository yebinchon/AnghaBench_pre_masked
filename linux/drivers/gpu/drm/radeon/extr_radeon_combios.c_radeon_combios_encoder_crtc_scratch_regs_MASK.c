
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int devices; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void
FUNC_3(struct drm_encoder *VAR_19, int VAR_20)
{
 struct drm_device *VAR_21 = VAR_19->dev;
 struct radeon_device *VAR_22 = VAR_21->dev_private;
 struct radeon_encoder *VAR_23 = FUNC_2(VAR_19);
 uint32_t VAR_24 = FUNC_0(VAR_6);

 if (VAR_23->devices & VAR_5) {
  VAR_24 &= ~VAR_17;
  VAR_24 |= (VAR_20 << VAR_18);
 }
 if (VAR_23->devices & VAR_0) {
  VAR_24 &= ~VAR_7;
  VAR_24 |= (VAR_20 << VAR_8);
 }
 if (VAR_23->devices & VAR_1) {
  VAR_24 &= ~VAR_9;
  VAR_24 |= (VAR_20 << VAR_10);
 }
 if (VAR_23->devices & VAR_4) {
  VAR_24 &= ~VAR_15;
  VAR_24 |= (VAR_20 << VAR_16);
 }
 if (VAR_23->devices & VAR_2) {
  VAR_24 &= ~VAR_11;
  VAR_24 |= (VAR_20 << VAR_12);
 }
 if (VAR_23->devices & VAR_3) {
  VAR_24 &= ~VAR_13;
  VAR_24 |= (VAR_20 << VAR_14);
 }
 FUNC_1(VAR_6, VAR_24);
}
