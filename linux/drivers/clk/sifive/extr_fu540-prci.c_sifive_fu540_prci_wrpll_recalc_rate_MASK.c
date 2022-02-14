
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct __prci_wrpll_data {int c; } ;
struct __prci_clock {struct __prci_wrpll_data* pwd; } ;


 struct __prci_clock* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
        unsigned long VAR_1)
{
 struct __prci_clock *VAR_2 = FUNC_0(VAR_0);
 struct __prci_wrpll_data *VAR_3 = VAR_2->pwd;

 return FUNC_1(&VAR_3->c, VAR_1);
}
