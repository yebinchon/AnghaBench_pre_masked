
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; } ;
struct blkcg_policy {int dummy; } ;
struct blkcg_gq {int dummy; } ;
struct blkcg {int dummy; } ;


 int VAR_0 ;
 struct blkcg_gq* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct blkcg_gq* FUNC_2 (struct blkcg*,struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,struct blkcg_policy const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static struct blkcg_gq *FUNC_6(struct blkcg *VAR_1,
       const struct blkcg_policy *VAR_2,
       struct request_queue *VAR_3)
{
 FUNC_1(!FUNC_5());
 FUNC_4(&VAR_3->queue_lock);

 if (!FUNC_3(VAR_3, VAR_2))
  return FUNC_0(-VAR_0);
 return FUNC_2(VAR_1, VAR_3, 1 );
}
