
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int * nr_queued; int * queued; } ;
struct throtl_qnode {int dummy; } ;
struct throtl_grp {int flags; struct throtl_qnode* qnode_on_self; struct throtl_service_queue service_queue; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct throtl_grp*) ;
 int FUNC_2 (struct bio*,struct throtl_qnode*,int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1, struct throtl_qnode *VAR_2,
         struct throtl_grp *VAR_3)
{
 struct throtl_service_queue *VAR_4 = &VAR_3->service_queue;
 bool VAR_5 = FUNC_0(VAR_1);

 if (!VAR_2)
  VAR_2 = &VAR_3->qnode_on_self[VAR_5];







 if (!VAR_4->nr_queued[VAR_5])
  VAR_3->flags |= VAR_0;

 FUNC_2(VAR_1, VAR_2, &VAR_4->queued[VAR_5]);

 VAR_4->nr_queued[VAR_5]++;
 FUNC_1(VAR_3);
}
