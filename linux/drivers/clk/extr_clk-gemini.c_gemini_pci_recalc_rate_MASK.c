
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_gemini_pci {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 struct clk_gemini_pci* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
         unsigned long VAR_3)
{
 struct clk_gemini_pci *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 FUNC_0(VAR_4->map, VAR_0, &VAR_5);
 if (VAR_5 & VAR_1)
  return 66000000;
 return 33000000;
}
