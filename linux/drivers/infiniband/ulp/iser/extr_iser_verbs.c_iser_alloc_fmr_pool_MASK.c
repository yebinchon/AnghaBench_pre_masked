
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct ib_fmr_pool* fmr_pool; struct iser_page_vec* page_vec; } ;
struct iser_page_vec {int list; TYPE_1__ rsc; int * pages; } ;
struct iser_fr_pool {int list; int lock; } ;
struct iser_fr_desc {int list; TYPE_1__ rsc; int * pages; } ;
struct iser_device {int pd; } ;
struct ib_fmr_pool_param {unsigned int max_pages_per_fmr; unsigned int pool_size; unsigned int dirty_watermark; int access; int * flush_function; scalar_t__ cache; int page_shift; } ;
struct ib_fmr_pool {int dummy; } ;
struct ib_conn {struct iser_fr_pool fr_pool; struct iser_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ib_fmr_pool*) ;
 int FUNC_2 (struct ib_fmr_pool*) ;
 int VAR_5 ;
 struct ib_fmr_pool* FUNC_3 (int ,struct ib_fmr_pool_param*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct iser_page_vec*) ;
 struct iser_page_vec* FUNC_6 (int,int ) ;
 struct iser_page_vec* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ib_conn *VAR_6,
   unsigned VAR_7,
   unsigned int VAR_8)
{
 struct iser_device *VAR_9 = VAR_6->device;
 struct iser_fr_pool *VAR_10 = &VAR_6->fr_pool;
 struct iser_page_vec *VAR_11;
 struct iser_fr_desc *VAR_12;
 struct ib_fmr_pool *VAR_13;
 struct ib_fmr_pool_param VAR_14;
 int VAR_15;

 FUNC_0(&VAR_10->list);
 FUNC_9(&VAR_10->lock);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_6(sizeof(*VAR_11) + (sizeof(u64) * VAR_8),
      VAR_1);
 if (!VAR_11) {
  VAR_15 = -VAR_0;
  goto err_frpl;
 }

 VAR_11->pages = (u64 *)(VAR_11 + 1);

 VAR_14.page_shift = VAR_5;
 VAR_14.max_pages_per_fmr = VAR_8;


 VAR_14.pool_size = VAR_7 * 2;
 VAR_14.dirty_watermark = VAR_7;
 VAR_14.cache = 0;
 VAR_14.flush_function = ((void*)0);
 VAR_14.access = (VAR_2 |
        VAR_4 |
        VAR_3);

 VAR_13 = FUNC_3(VAR_9->pd, &VAR_14);
 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  FUNC_4("FMR allocation failed, err %d\n", VAR_15);
  goto err_fmr;
 }

 VAR_12->rsc.page_vec = VAR_11;
 VAR_12->rsc.fmr_pool = VAR_13;
 FUNC_8(&VAR_12->list, &VAR_10->list);

 return 0;

err_fmr:
 FUNC_5(VAR_11);
err_frpl:
 FUNC_5(VAR_12);

 return VAR_15;
}
