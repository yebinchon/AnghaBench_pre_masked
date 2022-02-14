
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_device {struct hibmc_drm_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_1, unsigned long VAR_2)
{
 u32 VAR_3;
 struct hibmc_drm_private *VAR_4 = VAR_1->dev_private;

 VAR_3 = FUNC_3(VAR_4->mmio + VAR_0);
 VAR_3 &= ~(FUNC_1(1));
 FUNC_5(VAR_3, VAR_4->mmio + VAR_0);

 VAR_3 = FUNC_0(1) | FUNC_2(1);
 FUNC_5(VAR_3, VAR_4->mmio + VAR_0);

 FUNC_5(VAR_2, VAR_4->mmio + VAR_0);

 FUNC_4(1000, 2000);

 VAR_3 = VAR_2 & ~(FUNC_2(1));
 FUNC_5(VAR_3, VAR_4->mmio + VAR_0);

 FUNC_4(1000, 2000);

 VAR_3 &= ~(FUNC_0(1));
 FUNC_5(VAR_3, VAR_4->mmio + VAR_0);

 FUNC_4(1000, 2000);

 VAR_3 |= FUNC_1(1);
 FUNC_5(VAR_3, VAR_4->mmio + VAR_0);
}
