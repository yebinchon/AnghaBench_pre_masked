
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct throtl_service_queue {int * parent_sq; } ;
struct throtl_grp {struct throtl_data* td; struct throtl_service_queue service_queue; } ;
struct throtl_data {int service_queue; } ;
struct blkg_policy_data {int dummy; } ;
struct blkcg_gq {scalar_t__ parent; TYPE_1__* q; } ;
struct TYPE_4__ {int service_queue; } ;
struct TYPE_3__ {struct throtl_data* td; } ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 struct throtl_grp* FUNC_2 (struct blkg_policy_data*) ;
 struct blkcg_gq* FUNC_3 (struct throtl_grp*) ;

__attribute__((used)) static void FUNC_4(struct blkg_policy_data *VAR_1)
{
 struct throtl_grp *VAR_2 = FUNC_2(VAR_1);
 struct blkcg_gq *VAR_3 = FUNC_3(VAR_2);
 struct throtl_data *VAR_4 = VAR_3->q->td;
 struct throtl_service_queue *VAR_5 = &VAR_2->service_queue;
 VAR_5->parent_sq = &VAR_4->service_queue;
 if (FUNC_1(VAR_0) && VAR_3->parent)
  VAR_5->parent_sq = &FUNC_0(VAR_3->parent)->service_queue;
 VAR_2->td = VAR_4;
}
