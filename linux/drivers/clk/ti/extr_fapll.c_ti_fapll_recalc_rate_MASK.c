
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fapll_data {int base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fapll_data*) ;
 struct fapll_data* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct fapll_data *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3, VAR_4, VAR_5;
 u64 VAR_6;

 if (FUNC_2(VAR_2))
  return VAR_1;

 VAR_6 = VAR_1;


 VAR_5 = FUNC_1(VAR_2->base);
 VAR_4 = (VAR_5 >> 8) & 0xff;
 if (VAR_4)
  FUNC_0(VAR_6, VAR_4);
 VAR_3 = VAR_5 >> 16;
 if (VAR_3)
  VAR_6 *= VAR_3;

 return VAR_6;
}
