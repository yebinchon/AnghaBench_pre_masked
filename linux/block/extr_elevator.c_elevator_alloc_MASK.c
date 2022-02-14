
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int node; } ;
struct elevator_type {int dummy; } ;
struct elevator_queue {int hash; int sysfs_lock; int kobj; struct elevator_type* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 struct elevator_queue* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

struct elevator_queue *FUNC_5(struct request_queue *VAR_2,
      struct elevator_type *VAR_3)
{
 struct elevator_queue *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0, VAR_2->node);
 if (FUNC_4(!VAR_4))
  return ((void*)0);

 VAR_4->type = VAR_3;
 FUNC_1(&VAR_4->kobj, &VAR_1);
 FUNC_3(&VAR_4->sysfs_lock);
 FUNC_0(VAR_4->hash);

 return VAR_4;
}
