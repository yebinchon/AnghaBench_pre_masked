
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_ddc {int m_offset; int pre_div; } ;
struct clk_hw {int dummy; } ;


 struct sun4i_ddc* FUNC_0 (struct clk_hw*) ;
 long FUNC_1 (unsigned long,unsigned long,int ,int ,int *,int *) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
     unsigned long *VAR_2)
{
 struct sun4i_ddc *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, *VAR_2, VAR_3->pre_div,
          VAR_3->m_offset, ((void*)0), ((void*)0));
}
