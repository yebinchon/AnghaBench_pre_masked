
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int,int) ;

void FUNC_8(struct drm_encoder *VAR_23, u32 VAR_24)
{
 struct drm_device *VAR_25 = VAR_23->dev;
 struct radeon_device *VAR_26 = VAR_25->dev_private;

 FUNC_7(VAR_11 + VAR_24,
  VAR_12 |
  FUNC_2(1) |
  FUNC_4(3) |
  VAR_5,
  ~(VAR_12 |
  VAR_6 |
  VAR_10 |
  VAR_5));

 FUNC_6(VAR_21 + VAR_24,
  VAR_8 |
  VAR_9);

 FUNC_7(VAR_22 + VAR_24,
  FUNC_3(2),
  ~VAR_7);

 FUNC_5(VAR_20 + VAR_24,
  ~(VAR_15 |
  VAR_13 |
  VAR_16 |
  VAR_19 |
  VAR_17 |
  VAR_14 |
  VAR_18));

 FUNC_7(VAR_0 + VAR_24,
  FUNC_0(1),
  ~(VAR_2 |
  VAR_4));

 FUNC_7(VAR_1 + VAR_24,
  FUNC_1(2),
  ~VAR_3);
}
