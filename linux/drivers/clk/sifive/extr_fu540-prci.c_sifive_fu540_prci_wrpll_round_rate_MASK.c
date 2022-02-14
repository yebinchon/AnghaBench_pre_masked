
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrpll_cfg {int dummy; } ;
struct clk_hw {int dummy; } ;
struct __prci_wrpll_data {int c; } ;
struct __prci_clock {struct __prci_wrpll_data* pwd; } ;
typedef int c ;


 struct __prci_clock* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct wrpll_cfg*,int *,int) ;
 long FUNC_2 (struct wrpll_cfg*,unsigned long) ;
 int FUNC_3 (struct wrpll_cfg*,unsigned long,unsigned long) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_0,
            unsigned long VAR_1,
            unsigned long *VAR_2)
{
 struct __prci_clock *VAR_3 = FUNC_0(VAR_0);
 struct __prci_wrpll_data *VAR_4 = VAR_3->pwd;
 struct wrpll_cfg VAR_5;

 FUNC_1(&VAR_5, &VAR_4->c, sizeof(VAR_5));

 FUNC_3(&VAR_5, VAR_1, *VAR_2);

 return FUNC_2(&VAR_5, *VAR_2);
}
