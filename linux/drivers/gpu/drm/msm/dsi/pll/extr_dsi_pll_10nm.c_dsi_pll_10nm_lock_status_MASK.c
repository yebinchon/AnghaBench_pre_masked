
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_pll_10nm {int id; scalar_t__ mmio; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int const,int const) ;

__attribute__((used)) static int FUNC_3(struct dsi_pll_10nm *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;
 u32 const VAR_4 = 100;
 u32 const VAR_5 = 5000;

 VAR_2 = FUNC_2(VAR_1->mmio +
           VAR_0,
           VAR_3,
           ((VAR_3 & FUNC_0(0)) > 0),
           VAR_4,
           VAR_5);
 if (VAR_2)
  FUNC_1("DSI PLL(%d) lock failed, status=0x%08x\n",
         VAR_1->id, VAR_3);

 return VAR_2;
}
