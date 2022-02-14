
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hsdk_pll_clk {int dev; } ;
struct hsdk_pll_cfg {int idiv; int fbdiv; int odiv; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hsdk_pll_clk*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct hsdk_pll_clk *VAR_5,
        const struct hsdk_pll_cfg *VAR_6)
{
 u32 VAR_7 = 0;


 VAR_7 |= VAR_6->idiv << VAR_3;
 VAR_7 |= VAR_6->fbdiv << VAR_2;
 VAR_7 |= VAR_6->odiv << VAR_4;
 VAR_7 |= VAR_6->band << VAR_1;

 FUNC_0(VAR_5->dev, "write configuration: %#x\n", VAR_7);

 FUNC_1(VAR_5, VAR_0, VAR_7);
}
