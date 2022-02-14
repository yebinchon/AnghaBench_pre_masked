
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_dto {int src_offset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 struct clk_dto* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct clk_dto *VAR_5 = FUNC_3(VAR_2);

 VAR_4 = VAR_5->src_offset + VAR_0 - VAR_1;

 VAR_3 = FUNC_1(VAR_4) | FUNC_0(0);
 FUNC_2(VAR_3, VAR_4);
 return 0;
}
