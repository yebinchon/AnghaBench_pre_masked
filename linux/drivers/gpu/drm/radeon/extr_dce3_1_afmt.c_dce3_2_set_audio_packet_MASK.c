
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;

void FUNC_5(struct drm_encoder *VAR_8, u32 VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;

 FUNC_3(VAR_5 + VAR_9,
  FUNC_0(1) |
  FUNC_2(3));

 FUNC_3(VAR_1 + VAR_9,
  VAR_2 |
  VAR_0);

 FUNC_4(VAR_6 + VAR_9,
  VAR_4 |
  VAR_3);

 FUNC_4(VAR_7 + VAR_9,
  FUNC_1(2));
}
