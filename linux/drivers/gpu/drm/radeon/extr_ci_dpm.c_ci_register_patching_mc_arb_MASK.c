
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_1,
     const u32 VAR_2,
     const u32 VAR_3,
     u32 *VAR_4)
{
 bool VAR_5;
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0);
 VAR_5 = ((VAR_6 & 0x0000f00) == 0x300) ? 1 : 0;

 if (VAR_5 &&
     ((VAR_1->pdev->device == 0x67B0) ||
      (VAR_1->pdev->device == 0x67B1))) {
  if ((VAR_3 > 100000) && (VAR_3 <= 125000)) {
   VAR_7 = (((0x31 * VAR_2) / 125000) - 1) & 0xff;
   *VAR_4 &= ~0x00ff0000;
   *VAR_4 |= VAR_7 << 16;
  } else if ((VAR_3 > 125000) && (VAR_3 <= 137500)) {
   VAR_7 = (((0x36 * VAR_2) / 137500) - 1) & 0xff;
   *VAR_4 &= ~0x00ff0000;
   *VAR_4 |= VAR_7 << 16;
  }
 }
}
