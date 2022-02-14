
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int sysfs_lock; TYPE_2__* elevator; } ;
struct list_head {int dummy; } ;
struct blk_mq_qe_pair {TYPE_1__* type; int node; struct request_queue* q; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int elevator_owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*,int *) ;
 struct blk_mq_qe_pair* FUNC_3 (int,int) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct list_head *VAR_3,
  struct request_queue *VAR_4)
{
 struct blk_mq_qe_pair *VAR_5;

 if (!VAR_4->elevator)
  return 1;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0 | VAR_2 | VAR_1);
 if (!VAR_5)
  return 0;

 FUNC_0(&VAR_5->node);
 VAR_5->q = VAR_4;
 VAR_5->type = VAR_4->elevator->type;
 FUNC_4(&VAR_5->node, VAR_3);

 FUNC_5(&VAR_4->sysfs_lock);







 FUNC_1(VAR_5->type->elevator_owner);
 FUNC_2(VAR_4, ((void*)0));
 FUNC_6(&VAR_4->sysfs_lock);

 return 1;
}
