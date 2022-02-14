
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_gq {int delay_timer; int waitq_timer; int active_list; struct ioc* ioc; } ;
struct ioc {int lock; } ;
struct blkg_policy_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ioc_gq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ioc_gq* FUNC_4 (struct blkg_policy_data*) ;
 int FUNC_5 (struct ioc_gq*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct blkg_policy_data *VAR_0)
{
 struct ioc_gq *VAR_1 = FUNC_4(VAR_0);
 struct ioc *VAR_2 = VAR_1->ioc;

 if (VAR_2) {
  FUNC_6(&VAR_2->lock);
  if (!FUNC_3(&VAR_1->active_list)) {
   FUNC_5(VAR_1, 0, 0);
   FUNC_2(&VAR_1->active_list);
  }
  FUNC_7(&VAR_2->lock);

  FUNC_0(&VAR_1->waitq_timer);
  FUNC_0(&VAR_1->delay_timer);
 }
 FUNC_1(VAR_1);
}
