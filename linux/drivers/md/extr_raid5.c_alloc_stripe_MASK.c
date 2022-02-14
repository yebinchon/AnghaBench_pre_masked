
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int ppl_page; struct r5dev* dev; int log_start; struct r5conf* raid_conf; int count; int log_list; int r5c; int lru; int batch_list; int batch_lock; int stripe_lock; } ;
struct r5dev {int rvec; int rreq; int vec; int req; } ;
struct r5conf {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct kmem_cache*,struct stripe_head*) ;
 struct stripe_head* FUNC_5 (struct kmem_cache*,int ) ;
 scalar_t__ FUNC_6 (struct r5conf*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct stripe_head *FUNC_8(struct kmem_cache *VAR_1, gfp_t VAR_2,
 int VAR_3, struct r5conf *VAR_4)
{
 struct stripe_head *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_7(&VAR_5->stripe_lock);
  FUNC_7(&VAR_5->batch_lock);
  FUNC_0(&VAR_5->batch_list);
  FUNC_0(&VAR_5->lru);
  FUNC_0(&VAR_5->r5c);
  FUNC_0(&VAR_5->log_list);
  FUNC_2(&VAR_5->count, 1);
  VAR_5->raid_conf = VAR_4;
  VAR_5->log_start = VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   struct r5dev *VAR_7 = &VAR_5->dev[VAR_6];

   FUNC_3(&VAR_7->req, &VAR_7->vec, 1);
   FUNC_3(&VAR_7->rreq, &VAR_7->rvec, 1);
  }

  if (FUNC_6(VAR_4)) {
   VAR_5->ppl_page = FUNC_1(VAR_2);
   if (!VAR_5->ppl_page) {
    FUNC_4(VAR_1, VAR_5);
    VAR_5 = ((void*)0);
   }
  }
 }
 return VAR_5;
}
