
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_avpll_vco {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (scalar_t__) ;
 struct berlin2_avpll_vco* FUNC_2 (struct clk_hw*) ;
 size_t* VAR_5 ;

__attribute__((used)) static unsigned long
FUNC_3(struct clk_hw *VAR_6, unsigned long VAR_7)
{
 struct berlin2_avpll_vco *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9, VAR_10, VAR_11;
 u64 VAR_12 = VAR_7;


 VAR_9 = FUNC_1(VAR_8->base + VAR_0);
 VAR_10 = (VAR_9 & VAR_3) >> VAR_4;
 VAR_10 = VAR_5[VAR_10];
 VAR_11 = (VAR_9 & VAR_1) >> VAR_2;
 VAR_12 *= VAR_11;
 FUNC_0(VAR_12, VAR_10);

 return (unsigned long)VAR_12;
}
