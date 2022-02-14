
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_gemini_pci {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_gemini_pci* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, unsigned long VAR_4,
          unsigned long VAR_5)
{
 struct clk_gemini_pci *VAR_6 = FUNC_1(VAR_3);

 if (VAR_4 == 33000000)
  return FUNC_0(VAR_6->map,
       VAR_1,
       VAR_2, 0);
 if (VAR_4 == 66000000)
  return FUNC_0(VAR_6->map,
       VAR_1,
       0, VAR_2);
 return -VAR_0;
}
