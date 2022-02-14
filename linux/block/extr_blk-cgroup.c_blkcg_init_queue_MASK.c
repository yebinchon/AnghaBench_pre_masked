
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; struct blkcg_gq* root_blkg; } ;
struct blkcg_gq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct blkcg_gq*) ;
 int FUNC_1 (struct blkcg_gq*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int VAR_2 ;
 struct blkcg_gq* FUNC_4 (int *,struct request_queue*,int ) ;
 struct blkcg_gq* FUNC_5 (int *,struct request_queue*,struct blkcg_gq*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct request_queue *VAR_3)
{
 struct blkcg_gq *VAR_4, *VAR_5;
 bool VAR_6;
 int VAR_7;

 VAR_4 = FUNC_4(&VAR_2, VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = !FUNC_7(VAR_1);


 FUNC_9();
 FUNC_11(&VAR_3->queue_lock);
 VAR_5 = FUNC_5(&VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  goto err_unlock;
 VAR_3->root_blkg = VAR_5;
 FUNC_12(&VAR_3->queue_lock);
 FUNC_10();

 if (VAR_6)
  FUNC_8();

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  goto err_destroy_all;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  goto err_destroy_all;
 return 0;

err_destroy_all:
 FUNC_6(VAR_3);
 return VAR_7;
err_unlock:
 FUNC_12(&VAR_3->queue_lock);
 FUNC_10();
 if (VAR_6)
  FUNC_8();
 return FUNC_1(VAR_5);
}
