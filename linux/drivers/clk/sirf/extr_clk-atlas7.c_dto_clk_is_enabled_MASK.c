
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_dto {int src_offset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct clk_dto* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_dto *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = VAR_3->src_offset + VAR_0 - VAR_1;

 return !!(FUNC_1(VAR_4) & FUNC_0(0));
}
