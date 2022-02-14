
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fapll_data {int base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fapll_data*) ;
 scalar_t__ FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct fapll_data*) ;
 int FUNC_4 (unsigned long,unsigned long,int*,int*) ;
 int FUNC_5 (struct fapll_data*) ;
 struct fapll_data* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_4, unsigned long VAR_5,
        unsigned long VAR_6)
{
 struct fapll_data *VAR_7 = FUNC_6(VAR_4);
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_5)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_5, VAR_6,
          &VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_7);
 VAR_10 = FUNC_0(VAR_7->base);
 VAR_10 &= ~VAR_1;
 VAR_10 |= VAR_8 << VAR_2;
 VAR_10 |= VAR_9 << VAR_3;
 FUNC_7(VAR_10, VAR_7->base);
 if (FUNC_2(VAR_4))
  FUNC_5(VAR_7);
 FUNC_1(VAR_7);

 return 0;
}
