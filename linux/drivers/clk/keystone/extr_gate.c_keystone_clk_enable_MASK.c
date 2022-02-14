
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_psc_data {int domain_id; int domain_base; int control_base; } ;
struct clk_psc {scalar_t__ lock; struct clk_psc_data* psc_data; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_psc* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_psc *VAR_2 = FUNC_3(VAR_1);
 struct clk_psc_data *VAR_3 = VAR_2->psc_data;
 unsigned long VAR_4 = 0;

 if (VAR_2->lock)
  FUNC_1(VAR_2->lock, VAR_4);

 FUNC_0(VAR_3->control_base, VAR_3->domain_base,
    VAR_0, VAR_3->domain_id);

 if (VAR_2->lock)
  FUNC_2(VAR_2->lock, VAR_4);

 return 0;
}
