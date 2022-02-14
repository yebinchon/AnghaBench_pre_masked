
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rng_dev {int irq; int failure_timer; scalar_t__ failure_cnt; } ;
struct timer_list {int dummy; } ;


 struct xgene_rng_dev* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct xgene_rng_dev* FUNC_3 (int ,struct timer_list*,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct xgene_rng_dev *VAR_3 = FUNC_3(VAR_3, VAR_2, VAR_1);


 FUNC_1(VAR_3->irq);
 VAR_3->failure_cnt = 0;
 FUNC_0(&VAR_3->failure_timer);
 FUNC_2(VAR_3->irq);
}
