
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int grbm_soft_reset; int srbm_soft_reset; } ;
struct amdgpu_device {int dev; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 u32 VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10;

 if ((!VAR_7->gfx.grbm_soft_reset) &&
     (!VAR_7->gfx.srbm_soft_reset))
  return 0;

 VAR_8 = VAR_7->gfx.grbm_soft_reset;
 VAR_9 = VAR_7->gfx.srbm_soft_reset;

 if (VAR_8 || VAR_9) {
  VAR_10 = FUNC_1(VAR_3);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_1, 1);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_0, 1);
  FUNC_2(VAR_3, VAR_10);
  FUNC_4(50);
 }

 if (VAR_8) {
  VAR_10 = FUNC_1(VAR_4);
  VAR_10 |= VAR_8;
  FUNC_3(VAR_7->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_10);
  FUNC_2(VAR_4, VAR_10);
  VAR_10 = FUNC_1(VAR_4);

  FUNC_4(50);

  VAR_10 &= ~VAR_8;
  FUNC_2(VAR_4, VAR_10);
  VAR_10 = FUNC_1(VAR_4);
 }

 if (VAR_9) {
  VAR_10 = FUNC_1(VAR_5);
  VAR_10 |= VAR_9;
  FUNC_3(VAR_7->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_10);
  FUNC_2(VAR_5, VAR_10);
  VAR_10 = FUNC_1(VAR_5);

  FUNC_4(50);

  VAR_10 &= ~VAR_9;
  FUNC_2(VAR_5, VAR_10);
  VAR_10 = FUNC_1(VAR_5);
 }

 if (VAR_8 || VAR_9) {
  VAR_10 = FUNC_1(VAR_3);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_1, 0);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_0, 0);
  FUNC_2(VAR_3, VAR_10);
 }


 FUNC_4(50);

 return 0;
}
