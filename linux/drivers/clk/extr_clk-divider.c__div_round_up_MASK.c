
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct clk_div_table const*,int) ;

__attribute__((used)) static int FUNC_3(const struct clk_div_table *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 int VAR_5 = FUNC_0((u64)VAR_2, VAR_3);

 if (VAR_4 & VAR_0)
  VAR_5 = FUNC_1(VAR_5);
 if (VAR_1)
  VAR_5 = FUNC_2(VAR_1, VAR_5);

 return VAR_5;
}
