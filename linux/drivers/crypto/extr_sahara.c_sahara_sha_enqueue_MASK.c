
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_sha_reqctx {int last; int active; int first; } ;
struct sahara_dev {int kthread; int queue_mutex; int queue; } ;
struct ahash_request {int base; int nbytes; } ;


 struct sahara_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *,int *) ;
 struct sahara_dev* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_1, int VAR_2)
{
 struct sahara_sha_reqctx *VAR_3 = FUNC_0(VAR_1);
 struct sahara_dev *VAR_4 = VAR_0;
 int VAR_5;

 if (!VAR_1->nbytes && !VAR_2)
  return 0;

 VAR_3->last = VAR_2;

 if (!VAR_3->active) {
  VAR_3->active = 1;
  VAR_3->first = 1;
 }

 FUNC_2(&VAR_4->queue_mutex);
 VAR_5 = FUNC_1(&VAR_4->queue, &VAR_1->base);
 FUNC_3(&VAR_4->queue_mutex);

 FUNC_4(VAR_4->kthread);

 return VAR_5;
}
