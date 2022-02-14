
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun4i_ddc {int reg; int m_offset; int pre_div; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sun4i_ddc* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long,unsigned long,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct sun4i_ddc *VAR_3 = FUNC_2(VAR_0);
 u8 VAR_4, VAR_5;

 FUNC_4(VAR_1, VAR_2, VAR_3->pre_div,
          VAR_3->m_offset, &VAR_4, &VAR_5);

 FUNC_3(VAR_3->reg,
      FUNC_0(VAR_4) |
      FUNC_1(VAR_5));

 return 0;
}
