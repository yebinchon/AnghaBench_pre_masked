
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct clk_dto {int src_offset; } ;


 int FUNC_0 (int ,int ) ;
 struct clk_dto* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_dto *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->src_offset);
 return 0;
}
