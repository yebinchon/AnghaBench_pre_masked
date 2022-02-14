
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {int hactive; int vactive; scalar_t__ hfront_porch; scalar_t__ hback_porch; scalar_t__ hsync_len; } ;
struct exynos_mic {scalar_t__ reg; int i80_mode; int dev; struct videomode vm; } ;


 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct exynos_mic *VAR_3)
{
 struct videomode VAR_4 = VAR_3->vm;
 u32 VAR_5, VAR_6;

 FUNC_0(VAR_3->dev, "w: %u, h: %u\n", VAR_4.hactive, VAR_4.vactive);
 VAR_6 = ((VAR_4.hactive >> 2) << 1) + (VAR_4.vactive % 4);
 VAR_5 = FUNC_1(VAR_6);
 FUNC_5(VAR_5, VAR_3->reg + VAR_2);

 if (!VAR_3->i80_mode) {
  VAR_5 = FUNC_4(VAR_4.hsync_len) +
   FUNC_3(VAR_4.hsync_len + VAR_6 +
     VAR_4.hback_porch + VAR_4.hfront_porch);
  FUNC_5(VAR_5, VAR_3->reg + VAR_0);

  VAR_5 = FUNC_2(VAR_4.hback_porch) +
   FUNC_3(VAR_4.hfront_porch);
  FUNC_5(VAR_5, VAR_3->reg + VAR_1);
 }
}
