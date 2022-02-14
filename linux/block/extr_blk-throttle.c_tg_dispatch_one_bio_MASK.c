
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_service_queue {int * queued; int * nr_queued; struct throtl_service_queue* parent_sq; } ;
struct throtl_grp {TYPE_1__* td; int * qnode_on_parent; struct throtl_service_queue service_queue; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {scalar_t__* nr_queued; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct throtl_grp* FUNC_2 (struct throtl_service_queue*) ;
 int FUNC_3 (struct throtl_grp*,struct throtl_grp*,int) ;
 int FUNC_4 (struct throtl_grp*) ;
 int FUNC_5 (struct bio*,int *,struct throtl_grp*) ;
 int FUNC_6 (struct throtl_grp*,struct bio*) ;
 struct bio* FUNC_7 (int *,struct throtl_grp**) ;
 int FUNC_8 (struct bio*,int *,int *) ;
 int FUNC_9 (struct throtl_grp*,int) ;

__attribute__((used)) static void FUNC_10(struct throtl_grp *VAR_0, bool VAR_1)
{
 struct throtl_service_queue *VAR_2 = &VAR_0->service_queue;
 struct throtl_service_queue *VAR_3 = VAR_2->parent_sq;
 struct throtl_grp *VAR_4 = FUNC_2(VAR_3);
 struct throtl_grp *VAR_5 = ((void*)0);
 struct bio *VAR_6;







 VAR_6 = FUNC_7(&VAR_2->queued[VAR_1], &VAR_5);
 VAR_2->nr_queued[VAR_1]--;

 FUNC_6(VAR_0, VAR_6);
 if (VAR_4) {
  FUNC_5(VAR_6, &VAR_0->qnode_on_parent[VAR_1], VAR_4);
  FUNC_3(VAR_0, VAR_4, VAR_1);
 } else {
  FUNC_8(VAR_6, &VAR_0->qnode_on_parent[VAR_1],
         &VAR_3->queued[VAR_1]);
  FUNC_0(VAR_0->td->nr_queued[VAR_1] <= 0);
  VAR_0->td->nr_queued[VAR_1]--;
 }

 FUNC_9(VAR_0, VAR_1);

 if (VAR_5)
  FUNC_1(FUNC_4(VAR_5));
}
