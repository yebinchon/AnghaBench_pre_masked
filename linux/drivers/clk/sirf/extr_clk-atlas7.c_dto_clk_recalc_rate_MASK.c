
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_dto {scalar_t__ src_offset; scalar_t__ inc_offset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int ) ;
 struct clk_dto* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_4,
 unsigned long VAR_5)
{
 u64 VAR_6 = VAR_5;
 struct clk_dto *VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8 = FUNC_1(VAR_7->inc_offset);
 u32 VAR_9 = FUNC_1(VAR_7->src_offset + VAR_2 - VAR_3);

 VAR_6 *= VAR_8;
 if (VAR_9 & FUNC_0(0))

  FUNC_2(VAR_6, VAR_1);
 else
  FUNC_2(VAR_6, VAR_0);

 return VAR_6;
}
