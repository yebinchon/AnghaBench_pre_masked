
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_hw {int dummy; } ;
struct clk_dto {scalar_t__ inc_offset; scalar_t__ src_offset; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 struct clk_dto* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3, unsigned long VAR_4,
 unsigned long VAR_5)
{
 u64 VAR_6 = VAR_4 * VAR_0;
 struct clk_dto *VAR_7 = FUNC_2(VAR_3);

 FUNC_1(VAR_6, VAR_5);
 FUNC_0(0, VAR_7->src_offset + VAR_1 - VAR_2);
 FUNC_0(VAR_6, VAR_7->inc_offset);

 return 0;
}
