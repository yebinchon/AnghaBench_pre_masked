
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_rb_node {int refcount; int pid; } ;
struct qib_user_sdma_queue {int pkt_slab; int header_cache; struct qib_user_sdma_rb_node* sdma_rb_node; int dma_pages_root; int header_cache_name; int pkt_slab_name; int lock; int sent_lock; int sent; scalar_t__ added; scalar_t__ num_sending; scalar_t__ num_pending; scalar_t__ sent_counter; scalar_t__ counter; } ;
struct qib_user_sdma_pkt {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,struct device*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qib_user_sdma_queue*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct qib_user_sdma_rb_node*) ;
 int VAR_4 ;
 struct qib_user_sdma_rb_node* FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int,char*,int,int,int) ;
 int FUNC_11 (int *) ;

struct qib_user_sdma_queue *
FUNC_12(struct device *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct qib_user_sdma_queue *VAR_9 =
  FUNC_4(sizeof(struct qib_user_sdma_queue), VAR_0);
 struct qib_user_sdma_rb_node *VAR_10;

 if (!VAR_9)
  goto done;

 VAR_9->counter = 0;
 VAR_9->sent_counter = 0;
 VAR_9->num_pending = 0;
 VAR_9->num_sending = 0;
 VAR_9->added = 0;
 VAR_9->sdma_rb_node = ((void*)0);

 FUNC_0(&VAR_9->sent);
 FUNC_11(&VAR_9->sent_lock);
 FUNC_7(&VAR_9->lock);

 FUNC_10(VAR_9->pkt_slab_name, sizeof(VAR_9->pkt_slab_name),
   "qib-user-sdma-pkts-%u-%02u.%02u", VAR_6, VAR_7, VAR_8);
 VAR_9->pkt_slab = FUNC_5(VAR_9->pkt_slab_name,
      sizeof(struct qib_user_sdma_pkt),
      0, 0, ((void*)0));

 if (!VAR_9->pkt_slab)
  goto err_kfree;

 FUNC_10(VAR_9->header_cache_name, sizeof(VAR_9->header_cache_name),
   "qib-user-sdma-headers-%u-%02u.%02u", VAR_6, VAR_7, VAR_8);
 VAR_9->header_cache = FUNC_1(VAR_9->header_cache_name,
        VAR_5,
        VAR_1,
        4, 0);
 if (!VAR_9->header_cache)
  goto err_slab;

 VAR_9->dma_pages_root = VAR_2;

 VAR_10 = FUNC_9(&VAR_4,
     VAR_3->pid);
 if (VAR_10) {
  VAR_10->refcount++;
 } else {
  VAR_10 = FUNC_4(sizeof(
   struct qib_user_sdma_rb_node), VAR_0);
  if (!VAR_10)
   goto err_rb;

  VAR_10->refcount = 1;
  VAR_10->pid = VAR_3->pid;

  FUNC_8(&VAR_4, VAR_10);
 }
 VAR_9->sdma_rb_node = VAR_10;

 goto done;

err_rb:
 FUNC_2(VAR_9->header_cache);
err_slab:
 FUNC_6(VAR_9->pkt_slab);
err_kfree:
 FUNC_3(VAR_9);
 VAR_9 = ((void*)0);

done:
 return VAR_9;
}
