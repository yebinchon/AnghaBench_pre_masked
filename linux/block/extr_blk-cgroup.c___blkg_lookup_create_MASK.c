
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct blkcg_gq* root_blkg; int queue_lock; } ;
struct blkcg_gq {int dummy; } ;
struct blkcg {int dummy; } ;


 scalar_t__ FUNC_0 (struct blkcg_gq*) ;
 int FUNC_1 (int) ;
 struct blkcg_gq* FUNC_2 (struct blkcg*,struct request_queue*,int) ;
 struct blkcg* FUNC_3 (struct blkcg*) ;
 struct blkcg_gq* FUNC_4 (struct blkcg*,struct request_queue*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

struct blkcg_gq *FUNC_7(struct blkcg *VAR_0,
          struct request_queue *VAR_1)
{
 struct blkcg_gq *VAR_2;

 FUNC_1(!FUNC_6());
 FUNC_5(&VAR_1->queue_lock);

 VAR_2 = FUNC_2(VAR_0, VAR_1, 1);
 if (VAR_2)
  return VAR_2;






 while (1) {
  struct blkcg *VAR_3 = VAR_0;
  struct blkcg *VAR_4 = FUNC_3(VAR_0);
  struct blkcg_gq *VAR_5 = VAR_1->root_blkg;

  while (VAR_4) {
   VAR_2 = FUNC_2(VAR_4, VAR_1, 0);
   if (VAR_2) {

    VAR_5 = VAR_2;
    break;
   }
   VAR_3 = VAR_4;
   VAR_4 = FUNC_3(VAR_4);
  }

  VAR_2 = FUNC_4(VAR_3, VAR_1, ((void*)0));
  if (FUNC_0(VAR_2))
   return VAR_5;
  if (VAR_3 == VAR_0)
   return VAR_2;
 }
}
