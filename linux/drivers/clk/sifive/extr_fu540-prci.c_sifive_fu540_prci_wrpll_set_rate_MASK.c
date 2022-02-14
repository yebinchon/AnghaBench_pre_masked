
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct __prci_wrpll_data {int (* disable_bypass ) (struct __prci_data*) ;int c; int (* enable_bypass ) (struct __prci_data*) ;} ;
struct __prci_data {int dummy; } ;
struct __prci_clock {struct __prci_data* pd; struct __prci_wrpll_data* pwd; } ;


 int FUNC_0 (struct __prci_data*,struct __prci_wrpll_data*,int *) ;
 struct __prci_clock* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct __prci_data*) ;
 int FUNC_3 (struct __prci_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0,
         unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct __prci_clock *VAR_3 = FUNC_1(VAR_0);
 struct __prci_wrpll_data *VAR_4 = VAR_3->pwd;
 struct __prci_data *VAR_5 = VAR_3->pd;
 int VAR_6;

 VAR_6 = FUNC_6(&VAR_4->c, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->enable_bypass)
  VAR_4->enable_bypass(VAR_5);

 FUNC_0(VAR_5, VAR_4, &VAR_4->c);

 FUNC_4(FUNC_5(&VAR_4->c));

 if (VAR_4->disable_bypass)
  VAR_4->disable_bypass(VAR_5);

 return 0;
}
