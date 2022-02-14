
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int node; } ;
struct blkg_policy_data {int plid; struct blkcg_gq* blkg; } ;
struct blkcg_policy {struct blkg_policy_data* (* pd_alloc_fn ) (int ,struct request_queue*,struct blkcg*) ;} ;
struct blkcg_gq {struct blkg_policy_data** pd; struct blkcg* blkcg; int async_bio_work; int async_bios; int async_bio_lock; int q_node; struct request_queue* q; int stat_ios; int stat_bytes; int refcnt; } ;
struct blkcg {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct blkcg_policy** VAR_1 ;
 int FUNC_3 (struct request_queue*,struct blkcg_policy*) ;
 int VAR_2 ;
 int FUNC_4 (struct blkcg_gq*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 struct blkcg_gq* FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 struct blkg_policy_data* FUNC_9 (int ,struct request_queue*,struct blkcg*) ;

__attribute__((used)) static struct blkcg_gq *FUNC_10(struct blkcg *VAR_4, struct request_queue *VAR_5,
       gfp_t VAR_6)
{
 struct blkcg_gq *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_6, VAR_5->node);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_7(&VAR_7->refcnt, VAR_3, 0, VAR_6))
  goto err_free;

 if (FUNC_5(&VAR_7->stat_bytes, VAR_6) ||
     FUNC_5(&VAR_7->stat_ios, VAR_6))
  goto err_free;

 VAR_7->q = VAR_5;
 FUNC_0(&VAR_7->q_node);
 FUNC_8(&VAR_7->async_bio_lock);
 FUNC_2(&VAR_7->async_bios);
 FUNC_1(&VAR_7->async_bio_work, VAR_2);
 VAR_7->blkcg = VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  struct blkcg_policy *VAR_9 = VAR_1[VAR_8];
  struct blkg_policy_data *VAR_10;

  if (!FUNC_3(VAR_5, VAR_9))
   continue;


  VAR_10 = VAR_9->pd_alloc_fn(VAR_6, VAR_5, VAR_4);
  if (!VAR_10)
   goto err_free;

  VAR_7->pd[VAR_8] = VAR_10;
  VAR_10->blkg = VAR_7;
  VAR_10->plid = VAR_8;
 }

 return VAR_7;

err_free:
 FUNC_4(VAR_7);
 return ((void*)0);
}
