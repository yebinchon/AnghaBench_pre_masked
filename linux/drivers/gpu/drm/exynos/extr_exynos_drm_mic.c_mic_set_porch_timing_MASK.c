
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct videomode {scalar_t__ hfront_porch; scalar_t__ hback_porch; scalar_t__ hactive; scalar_t__ hsync_len; scalar_t__ vfront_porch; scalar_t__ vback_porch; scalar_t__ vactive; scalar_t__ vsync_len; } ;
struct exynos_mic {scalar_t__ reg; struct videomode vm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct exynos_mic *VAR_4)
{
 struct videomode VAR_5 = VAR_4->vm;
 u32 VAR_6;

 VAR_6 = FUNC_3(VAR_5.vsync_len) +
  FUNC_2(VAR_5.vsync_len + VAR_5.vactive +
    VAR_5.vback_porch + VAR_5.vfront_porch);
 FUNC_4(VAR_6, VAR_4->reg + VAR_2);

 VAR_6 = FUNC_0(VAR_5.vback_porch) +
  FUNC_1(VAR_5.vfront_porch);
 FUNC_4(VAR_6, VAR_4->reg + VAR_3);

 VAR_6 = FUNC_3(VAR_5.hsync_len) +
  FUNC_2(VAR_5.hsync_len + VAR_5.hactive +
    VAR_5.hback_porch + VAR_5.hfront_porch);
 FUNC_4(VAR_6, VAR_4->reg + VAR_0);

 VAR_6 = FUNC_0(VAR_5.hback_porch) +
  FUNC_1(VAR_5.hfront_porch);
 FUNC_4(VAR_6, VAR_4->reg + VAR_1);
}
