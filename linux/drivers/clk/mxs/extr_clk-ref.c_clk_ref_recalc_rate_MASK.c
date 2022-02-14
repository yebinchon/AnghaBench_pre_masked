
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_ref {int idx; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 struct clk_ref* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_ref *VAR_2 = FUNC_2(VAR_0);
 u64 VAR_3 = VAR_1;
 u8 VAR_4 = (FUNC_1(VAR_2->reg) >> (VAR_2->idx * 8)) & 0x3f;

 VAR_3 *= 18;
 FUNC_0(VAR_3, VAR_4);

 return VAR_3;
}
