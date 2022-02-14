
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct ccu_pll_nb {int lock; int common; int enable; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 struct ccu_pll_nb* FUNC_4 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_1,
          unsigned long VAR_2, void *VAR_3)
{
 struct ccu_pll_nb *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = 0;

 if (VAR_2 != VAR_0)
  goto out;

 FUNC_0(VAR_4->common, VAR_4->enable);

 VAR_5 = FUNC_1(VAR_4->common, VAR_4->enable);
 if (VAR_5)
  goto out;

 FUNC_2(VAR_4->common, VAR_4->lock);

out:
 return FUNC_3(VAR_5);
}
