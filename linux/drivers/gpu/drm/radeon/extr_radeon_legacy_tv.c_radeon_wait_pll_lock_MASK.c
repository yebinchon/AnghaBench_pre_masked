
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_5, unsigned VAR_6,
     unsigned VAR_7, unsigned VAR_8)
{
 struct drm_device *VAR_9 = VAR_5->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 uint32_t VAR_11;
 unsigned int VAR_12, VAR_13;

 FUNC_3(VAR_4, (FUNC_0(VAR_4) & 0xffff60ff) | 0x100);
 VAR_11 = FUNC_1(VAR_3);
 FUNC_4(VAR_3, VAR_11 & ~VAR_2);

 FUNC_5(VAR_1, VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_5(VAR_0 + 3, 0);
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   if (FUNC_2(VAR_0 + 3) >= VAR_8)
    break;
 }
 FUNC_4(VAR_3, VAR_11);
 FUNC_3(VAR_4, FUNC_0(VAR_4) & 0xffffe0ff);
}
