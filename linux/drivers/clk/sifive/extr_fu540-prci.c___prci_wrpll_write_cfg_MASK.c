
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrpll_cfg {int dummy; } ;
struct __prci_wrpll_data {int c; int cfg0_offs; } ;
struct __prci_data {int dummy; } ;


 int FUNC_0 (int ,int ,struct __prci_data*) ;
 int FUNC_1 (struct wrpll_cfg*) ;
 int FUNC_2 (int *,struct wrpll_cfg*,int) ;

__attribute__((used)) static void FUNC_3(struct __prci_data *VAR_0,
       struct __prci_wrpll_data *VAR_1,
       struct wrpll_cfg *VAR_2)
{
 FUNC_0(FUNC_1(VAR_2), VAR_1->cfg0_offs, VAR_0);

 FUNC_2(&VAR_1->c, VAR_2, sizeof(*VAR_2));
}
