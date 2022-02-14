
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct __prci_data {int dummy; } ;
struct __prci_clock {struct __prci_data* pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct __prci_data*,int ) ;
 struct __prci_clock* FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (unsigned long,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_2,
           unsigned long VAR_3)
{
 struct __prci_clock *VAR_4 = FUNC_1(VAR_2);
 struct __prci_data *VAR_5 = VAR_4->pd;
 u32 VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 &= VAR_1;
 VAR_7 = VAR_6 ? 1 : 2;

 return FUNC_2(VAR_3, VAR_7);
}
