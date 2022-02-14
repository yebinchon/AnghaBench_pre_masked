
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int devices; } ;
struct radeon_device {scalar_t__ family; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
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
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

void
FUNC_4(struct drm_encoder *VAR_23, bool VAR_24)
{
 struct drm_device *VAR_25 = VAR_23->dev;
 struct radeon_device *VAR_26 = VAR_25->dev_private;
 struct radeon_encoder *VAR_27 = FUNC_3(VAR_23);
 uint32_t VAR_28;

 if (FUNC_0(VAR_26))
  return;

 if (VAR_26->family >= VAR_20)
  VAR_28 = FUNC_1(VAR_21);
 else
  VAR_28 = FUNC_1(VAR_22);

 if (VAR_27->devices & VAR_9) {
  if (VAR_24)
   VAR_28 &= ~VAR_19;
  else
   VAR_28 |= VAR_19;
 }
 if (VAR_27->devices & VAR_2) {
  if (VAR_24)
   VAR_28 &= ~VAR_12;
  else
   VAR_28 |= VAR_12;
 }
 if (VAR_27->devices & VAR_0) {
  if (VAR_24)
   VAR_28 &= ~VAR_10;
  else
   VAR_28 |= VAR_10;
 }
 if (VAR_27->devices & VAR_1) {
  if (VAR_24)
   VAR_28 &= ~VAR_11;
  else
   VAR_28 |= VAR_11;
 }
 if (VAR_27->devices & VAR_8) {
  if (VAR_24)
   VAR_28 &= ~VAR_18;
  else
   VAR_28 |= VAR_18;
 }
 if (VAR_27->devices & VAR_3) {
  if (VAR_24)
   VAR_28 &= ~VAR_13;
  else
   VAR_28 |= VAR_13;
 }
 if (VAR_27->devices & VAR_4) {
  if (VAR_24)
   VAR_28 &= ~VAR_14;
  else
   VAR_28 |= VAR_14;
 }
 if (VAR_27->devices & VAR_5) {
  if (VAR_24)
   VAR_28 &= ~VAR_15;
  else
   VAR_28 |= VAR_15;
 }
 if (VAR_27->devices & VAR_6) {
  if (VAR_24)
   VAR_28 &= ~VAR_16;
  else
   VAR_28 |= VAR_16;
 }
 if (VAR_27->devices & VAR_7) {
  if (VAR_24)
   VAR_28 &= ~VAR_17;
  else
   VAR_28 |= VAR_17;
 }

 if (VAR_26->family >= VAR_20)
  FUNC_2(VAR_21, VAR_28);
 else
  FUNC_2(VAR_22, VAR_28);
}
