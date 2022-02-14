
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int blkg_list; int id; int backing_dev_info; int queue_lock; } ;
struct blkcg_policy {int (* pd_online_fn ) (int ) ;int (* pd_init_fn ) (int ) ;} ;
struct blkcg_gq {int online; int * pd; int q_node; int blkcg_node; int parent; struct bdi_writeback_congested* wb_congested; } ;
struct TYPE_3__ {int id; } ;
struct blkcg {TYPE_1__ css; int lock; int blkg_list; int blkg_tree; } ;
struct bdi_writeback_congested {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct blkcg_gq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,struct request_queue*,int) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (struct blkcg*) ;
 struct blkcg_policy** VAR_5 ;
 struct blkcg_gq* FUNC_5 (struct blkcg*,struct request_queue*,int) ;
 int FUNC_6 (struct blkcg_gq*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct blkcg_gq*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,struct blkcg_gq*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int) ;
 struct bdi_writeback_congested* FUNC_22 (int ,int ,int) ;
 int FUNC_23 (struct bdi_writeback_congested*) ;

__attribute__((used)) static struct blkcg_gq *FUNC_24(struct blkcg *VAR_6,
        struct request_queue *VAR_7,
        struct blkcg_gq *VAR_8)
{
 struct blkcg_gq *VAR_9;
 struct bdi_writeback_congested *VAR_10;
 int VAR_11, VAR_12;

 FUNC_1(!FUNC_16());
 FUNC_14(&VAR_7->queue_lock);


 if (FUNC_3(VAR_7)) {
  VAR_12 = -VAR_1;
  goto err_free_blkg;
 }


 if (!FUNC_10(&VAR_6->css)) {
  VAR_12 = -VAR_1;
  goto err_free_blkg;
 }

 VAR_10 = FUNC_22(VAR_7->backing_dev_info,
            VAR_6->css.id,
            VAR_3 | VAR_4);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  goto err_put_css;
 }


 if (!VAR_8) {
  VAR_8 = FUNC_5(VAR_6, VAR_7, VAR_3 | VAR_4);
  if (FUNC_21(!VAR_8)) {
   VAR_12 = -VAR_2;
   goto err_put_congested;
  }
 }
 VAR_9 = VAR_8;
 VAR_9->wb_congested = VAR_10;


 if (FUNC_4(VAR_6)) {
  VAR_9->parent = FUNC_2(FUNC_4(VAR_6), VAR_7, 0);
  if (FUNC_1(!VAR_9->parent)) {
   VAR_12 = -VAR_1;
   goto err_put_congested;
  }
  FUNC_7(VAR_9->parent);
 }


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  struct blkcg_policy *VAR_13 = VAR_5[VAR_11];

  if (VAR_9->pd[VAR_11] && VAR_13->pd_init_fn)
   VAR_13->pd_init_fn(VAR_9->pd[VAR_11]);
 }


 FUNC_17(&VAR_6->lock);
 VAR_12 = FUNC_15(&VAR_6->blkg_tree, VAR_7->id, VAR_9);
 if (FUNC_12(!VAR_12)) {
  FUNC_11(&VAR_9->blkcg_node, &VAR_6->blkg_list);
  FUNC_13(&VAR_9->q_node, &VAR_7->blkg_list);

  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   struct blkcg_policy *VAR_14 = VAR_5[VAR_11];

   if (VAR_9->pd[VAR_11] && VAR_14->pd_online_fn)
    VAR_14->pd_online_fn(VAR_9->pd[VAR_11]);
  }
 }
 VAR_9->online = 1;
 FUNC_18(&VAR_6->lock);

 if (!VAR_12)
  return VAR_9;


 FUNC_8(VAR_9);
 return FUNC_0(VAR_12);

err_put_congested:
 FUNC_23(VAR_10);
err_put_css:
 FUNC_9(&VAR_6->css);
err_free_blkg:
 FUNC_6(VAR_8);
 return FUNC_0(VAR_12);
}
