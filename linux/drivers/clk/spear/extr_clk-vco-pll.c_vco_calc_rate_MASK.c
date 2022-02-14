
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_vco {int rtbl; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ,unsigned long,int,int *) ;
 struct clk_vco* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1, int VAR_2)
{
 struct clk_vco *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->rtbl, VAR_1, VAR_2, ((void*)0));
}
