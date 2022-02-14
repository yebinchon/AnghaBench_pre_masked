
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_std {int enable_bit; } ;
struct clk_hw {int dummy; } ;
typedef int reg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 struct clk_std* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4;
 struct clk_std *VAR_5 = FUNC_4(VAR_1);

 FUNC_1(VAR_5->enable_bit < 0 || VAR_5->enable_bit > 63);

 VAR_4 = VAR_5->enable_bit % 32;
 VAR_3 = VAR_5->enable_bit / 32;
 VAR_3 = VAR_0 + VAR_3 * sizeof(VAR_3);

 VAR_2 = FUNC_2(VAR_3) | FUNC_0(VAR_4);
 FUNC_3(VAR_2, VAR_3);
 return 0;
}
