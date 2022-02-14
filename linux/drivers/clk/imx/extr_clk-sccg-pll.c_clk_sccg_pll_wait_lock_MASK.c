
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_sccg_pll {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_sccg_pll *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->base + VAR_0);


 if (!(VAR_5 & VAR_3))
  return FUNC_0(VAR_4->base, VAR_5, VAR_5 & VAR_1,
      0, VAR_2);

 return 0;
}
