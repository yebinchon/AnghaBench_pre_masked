
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_rng {scalar_t__ base; int clk; } ;
struct hwrng {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct mtk_rng* FUNC_2 (struct hwrng*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hwrng *VAR_2)
{
 struct mtk_rng *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->clk);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_3(VAR_4, VAR_3->base + VAR_0);

 return 0;
}
