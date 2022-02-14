
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
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;

void FUNC_13(struct drm_encoder *VAR_10, u32 VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;

 FUNC_11(VAR_7 + VAR_11,
  VAR_4);

 FUNC_11(VAR_0 + VAR_11,
  FUNC_6(1));

 FUNC_11(VAR_1 + VAR_11,
  FUNC_7(2));

 FUNC_11(VAR_2 + VAR_11,
  FUNC_0(3) |
  FUNC_1(4) |
  FUNC_2(5) |
  FUNC_3(6) |
  FUNC_4(7) |
  FUNC_5(8));

 FUNC_11(VAR_6 + VAR_11,
  FUNC_8(0xff));

 FUNC_11(VAR_9 + VAR_11,
        FUNC_9(1) |
        FUNC_10(3));


 FUNC_12(VAR_5 + VAR_11,
    VAR_8 | VAR_3);
}
