
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct page {int dummy; } ;
struct dmatest_data {int cnt; unsigned int off; int ** aligned; } ;
struct dmatest_done {int done; } ;
struct dmatest_thread {int pending; scalar_t__ type; int done; int done_wait; struct dmatest_data dst; struct dmatest_data src; struct dma_chan* chan; struct dmatest_info* info; struct dmatest_done test_done; } ;
struct dmatest_params {scalar_t__ alignment; int xor_sources; int pq_sources; unsigned int buf_size; unsigned int iterations; int transfer_size; scalar_t__ noverify; int timeout; scalar_t__ polled; scalar_t__ norandom; } ;
struct dmatest_info {struct dmatest_params params; } ;
struct dmaengine_unmap_data {unsigned int len; unsigned int* addr; int bidi_cnt; int to_cnt; } ;
struct dma_device {unsigned int copy_align; unsigned int fill_align; unsigned int xor_align; unsigned int pq_align; struct dma_async_tx_descriptor* (* device_prep_dma_pq ) (struct dma_chan*,unsigned int*,unsigned int*,int,unsigned int*,unsigned int,int) ;struct dma_async_tx_descriptor* (* device_prep_dma_xor ) (struct dma_chan*,unsigned int,unsigned int*,int,unsigned int,int) ;struct dma_async_tx_descriptor* (* device_prep_dma_memset ) (struct dma_chan*,unsigned int,int ,unsigned int,int) ;struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,unsigned int,unsigned int,unsigned int,int) ;int dev; int max_xor; } ;
struct dma_chan {struct dma_device* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct dmatest_done* callback_param; int callback; } ;
typedef int s64 ;
typedef int ktime_t ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_cookie_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (unsigned long long) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_2 (struct dma_chan*,int ,int *,int *) ;
 int FUNC_3 (struct dma_chan*) ;
 void* FUNC_4 (int ,struct page*,unsigned long,unsigned int,int ) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct dma_device*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct dma_chan*,int ) ;
 struct dmaengine_unmap_data* FUNC_9 (int ,int,int ) ;
 int FUNC_10 (struct dma_chan*) ;
 int FUNC_11 (struct dmaengine_unmap_data*) ;
 int FUNC_12 (int ,unsigned long long) ;
 scalar_t__ FUNC_13 (struct dmatest_data*,unsigned int,unsigned int) ;
 int VAR_16 ;
 int FUNC_14 (struct dmatest_data*) ;
 int FUNC_15 (int **,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_16 (int **,unsigned int,unsigned int,unsigned int,int) ;
 unsigned long long FUNC_17 (int ,unsigned int) ;
 unsigned int FUNC_18 () ;
 unsigned int FUNC_19 (int **,unsigned int,unsigned int,unsigned int,int,int,int) ;
 unsigned int* FUNC_20 (int,int,int ) ;
 int FUNC_21 (unsigned int*) ;
 unsigned int* FUNC_22 (int,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int,int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int) ;
 unsigned long FUNC_31 (void*) ;
 int FUNC_32 (char*,int ) ;
 int FUNC_33 (char*,unsigned int,...) ;
 int FUNC_34 (char*,int ,unsigned int,unsigned int,int ,int ,int ,int) ;
 int FUNC_35 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_36 () ;
 int FUNC_37 (TYPE_1__*,int) ;
 int FUNC_38 () ;
 struct dma_async_tx_descriptor* FUNC_39 (struct dma_chan*,unsigned int,unsigned int,unsigned int,int) ;
 struct dma_async_tx_descriptor* FUNC_40 (struct dma_chan*,unsigned int,int ,unsigned int,int) ;
 struct dma_async_tx_descriptor* FUNC_41 (struct dma_chan*,unsigned int,unsigned int*,int,unsigned int,int) ;
 struct dma_async_tx_descriptor* FUNC_42 (struct dma_chan*,unsigned int*,unsigned int*,int,unsigned int*,unsigned int,int) ;
 int FUNC_43 (struct dma_async_tx_descriptor*) ;
 int VAR_17 ;
 int FUNC_44 (char*,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 struct page* FUNC_45 (void*) ;
 int FUNC_46 (int ,int,int ) ;
 int FUNC_47 (int *) ;

__attribute__((used)) static int FUNC_48(void *VAR_18)
{
 struct dmatest_thread *VAR_19 = VAR_18;
 struct dmatest_done *VAR_20 = &VAR_19->test_done;
 struct dmatest_info *VAR_21;
 struct dmatest_params *VAR_22;
 struct dma_chan *VAR_23;
 struct dma_device *VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26 = 0;
 unsigned int VAR_27 = 0;
 dma_cookie_t VAR_28;
 enum dma_status VAR_29;
 enum dma_ctrl_flags VAR_30;
 u8 *VAR_31 = ((void*)0);
 int VAR_32;
 unsigned int VAR_33;
 struct dmatest_data *VAR_34;
 struct dmatest_data *VAR_35;
 int VAR_36;
 ktime_t VAR_37, VAR_38, VAR_39;
 ktime_t VAR_40 = 0;
 ktime_t VAR_41 = 0;
 s64 VAR_42 = 0;
 unsigned long long VAR_43 = 0;
 unsigned long long VAR_44 = 0;
 u8 VAR_45 = 0;
 bool VAR_46 = 0;
 dma_addr_t *VAR_47;
 dma_addr_t *VAR_48;

 FUNC_36();

 VAR_32 = -VAR_10;

 FUNC_38();
 VAR_19->pending = 0;
 VAR_21 = VAR_19->info;
 VAR_22 = &VAR_21->params;
 VAR_23 = VAR_19->chan;
 VAR_24 = VAR_23->device;
 VAR_34 = &VAR_19->src;
 VAR_35 = &VAR_19->dst;
 if (VAR_19->type == VAR_4) {
  VAR_45 = VAR_22->alignment < 0 ? VAR_24->copy_align :
      VAR_22->alignment;
  VAR_34->cnt = VAR_35->cnt = 1;
 } else if (VAR_19->type == VAR_5) {
  VAR_45 = VAR_22->alignment < 0 ? VAR_24->fill_align :
      VAR_22->alignment;
  VAR_34->cnt = VAR_35->cnt = 1;
  VAR_46 = 1;
 } else if (VAR_19->type == VAR_9) {

  VAR_34->cnt = FUNC_28(VAR_22->xor_sources | 1, VAR_24->max_xor);
  VAR_35->cnt = 1;
  VAR_45 = VAR_22->alignment < 0 ? VAR_24->xor_align :
      VAR_22->alignment;
 } else if (VAR_19->type == VAR_6) {

  VAR_34->cnt = FUNC_28(VAR_22->pq_sources | 1, FUNC_6(VAR_24, 0));
  VAR_35->cnt = 2;
  VAR_45 = VAR_22->alignment < 0 ? VAR_24->pq_align :
      VAR_22->alignment;

  VAR_31 = FUNC_22(VAR_22->pq_sources + 1, VAR_11);
  if (!VAR_31)
   goto err_thread_type;

  for (VAR_36 = 0; VAR_36 < VAR_34->cnt; VAR_36++)
   VAR_31[VAR_36] = 1;
 } else
  goto err_thread_type;


 if ((VAR_34->cnt + VAR_35->cnt) >= 255) {
  FUNC_33("too many buffers (%d of 255 supported)\n",
         VAR_34->cnt + VAR_35->cnt);
  goto err_free_coefs;
 }

 VAR_33 = VAR_22->buf_size;
 if (1 << VAR_45 > VAR_33) {
  FUNC_33("%u-byte buffer too small for %d-byte alignment\n",
         VAR_33, 1 << VAR_45);
  goto err_free_coefs;
 }

 if (FUNC_13(VAR_34, VAR_33, VAR_45) < 0)
  goto err_free_coefs;

 if (FUNC_13(VAR_35, VAR_33, VAR_45) < 0)
  goto err_src;

 FUNC_37(VAR_15, 10);

 VAR_47 = FUNC_20(VAR_34->cnt, sizeof(dma_addr_t), VAR_11);
 if (!VAR_47)
  goto err_dst;

 VAR_48 = FUNC_20(VAR_35->cnt, sizeof(dma_addr_t), VAR_11);
 if (!VAR_48)
  goto err_srcs_array;




 if (VAR_22->polled)
  VAR_30 = VAR_2;
 else
  VAR_30 = VAR_2 | VAR_7;

 VAR_37 = FUNC_25();
 while (!FUNC_23()
        && !(VAR_22->iterations && VAR_27 >= VAR_22->iterations)) {
  struct dma_async_tx_descriptor *VAR_49 = ((void*)0);
  struct dmaengine_unmap_data *VAR_50;
  dma_addr_t *VAR_51;
  unsigned int VAR_52;

  VAR_27++;

  if (VAR_22->transfer_size) {
   if (VAR_22->transfer_size >= VAR_33) {
    FUNC_33("%u-byte transfer size must be lower than %u-buffer size\n",
           VAR_22->transfer_size, VAR_33);
    break;
   }
   VAR_52 = VAR_22->transfer_size;
  } else if (VAR_22->norandom) {
   VAR_52 = VAR_33;
  } else {
   VAR_52 = FUNC_18() % VAR_33 + 1;
  }


  if (!VAR_22->transfer_size) {
   VAR_52 = (VAR_52 >> VAR_45) << VAR_45;
   if (!VAR_52)
    VAR_52 = 1 << VAR_45;
  }
  VAR_43 += VAR_52;

  if (VAR_22->norandom) {
   VAR_34->off = 0;
   VAR_35->off = 0;
  } else {
   VAR_34->off = FUNC_18() % (VAR_33 - VAR_52 + 1);
   VAR_35->off = FUNC_18() % (VAR_33 - VAR_52 + 1);

   VAR_34->off = (VAR_34->off >> VAR_45) << VAR_45;
   VAR_35->off = (VAR_35->off >> VAR_45) << VAR_45;
  }

  if (!VAR_22->noverify) {
   VAR_38 = FUNC_25();
   FUNC_16(VAR_34->aligned, VAR_34->off, VAR_52,
       VAR_33, VAR_46);
   FUNC_15(VAR_35->aligned, VAR_35->off, VAR_52,
       VAR_33, VAR_46);

   VAR_39 = FUNC_26(FUNC_25(), VAR_38);
   VAR_40 = FUNC_24(VAR_40, VAR_39);
  }

  VAR_50 = FUNC_9(VAR_24->dev, VAR_34->cnt + VAR_35->cnt,
           VAR_11);
  if (!VAR_50) {
   VAR_26++;
   FUNC_35("unmap data NULL", VAR_27,
          VAR_34->off, VAR_35->off, VAR_52, VAR_32);
   continue;
  }

  VAR_50->len = VAR_33;
  for (VAR_36 = 0; VAR_36 < VAR_34->cnt; VAR_36++) {
   void *VAR_53 = VAR_34->aligned[VAR_36];
   struct page *VAR_54 = FUNC_45(VAR_53);
   unsigned long VAR_55 = FUNC_31(VAR_53);

   VAR_50->addr[VAR_36] = FUNC_4(VAR_24->dev, VAR_54, VAR_55,
         VAR_50->len, VAR_8);
   VAR_47[VAR_36] = VAR_50->addr[VAR_36] + VAR_34->off;
   VAR_32 = FUNC_5(VAR_24->dev, VAR_50->addr[VAR_36]);
   if (VAR_32) {
    FUNC_35("src mapping error", VAR_27,
           VAR_34->off, VAR_35->off, VAR_52, VAR_32);
    goto error_unmap_continue;
   }
   VAR_50->to_cnt++;
  }

  VAR_51 = &VAR_50->addr[VAR_34->cnt];
  for (VAR_36 = 0; VAR_36 < VAR_35->cnt; VAR_36++) {
   void *VAR_56 = VAR_35->aligned[VAR_36];
   struct page *VAR_57 = FUNC_45(VAR_56);
   unsigned long VAR_58 = FUNC_31(VAR_56);

   VAR_51[VAR_36] = FUNC_4(VAR_24->dev, VAR_57, VAR_58, VAR_50->len,
            VAR_0);
   VAR_32 = FUNC_5(VAR_24->dev, VAR_51[VAR_36]);
   if (VAR_32) {
    FUNC_35("dst mapping error", VAR_27,
           VAR_34->off, VAR_35->off, VAR_52, VAR_32);
    goto error_unmap_continue;
   }
   VAR_50->bidi_cnt++;
  }

  if (VAR_19->type == VAR_4)
   VAR_49 = VAR_24->device_prep_dma_memcpy(VAR_23,
        VAR_51[0] + VAR_35->off,
        VAR_47[0], VAR_52, VAR_30);
  else if (VAR_19->type == VAR_5)
   VAR_49 = VAR_24->device_prep_dma_memset(VAR_23,
      VAR_51[0] + VAR_35->off,
      *(VAR_34->aligned[0] + VAR_34->off),
      VAR_52, VAR_30);
  else if (VAR_19->type == VAR_9)
   VAR_49 = VAR_24->device_prep_dma_xor(VAR_23,
            VAR_51[0] + VAR_35->off,
            VAR_47, VAR_34->cnt,
            VAR_52, VAR_30);
  else if (VAR_19->type == VAR_6) {
   for (VAR_36 = 0; VAR_36 < VAR_35->cnt; VAR_36++)
    VAR_48[VAR_36] = VAR_51[VAR_36] + VAR_35->off;
   VAR_49 = VAR_24->device_prep_dma_pq(VAR_23, VAR_48, VAR_47,
           VAR_34->cnt, VAR_31,
           VAR_52, VAR_30);
  }

  if (!VAR_49) {
   FUNC_35("prep error", VAR_27, VAR_34->off,
          VAR_35->off, VAR_52, VAR_32);
   FUNC_30(100);
   goto error_unmap_continue;
  }

  VAR_20->done = 0;
  if (!VAR_22->polled) {
   VAR_49->callback = VAR_16;
   VAR_49->callback_param = VAR_20;
  }
  VAR_28 = VAR_49->tx_submit(VAR_49);

  if (FUNC_7(VAR_28)) {
   FUNC_35("submit error", VAR_27, VAR_34->off,
          VAR_35->off, VAR_52, VAR_32);
   FUNC_30(100);
   goto error_unmap_continue;
  }

  if (VAR_22->polled) {
   VAR_29 = FUNC_8(VAR_23, VAR_28);
   FUNC_10(VAR_23);
   if (VAR_29 == VAR_1)
    VAR_20->done = 1;
  } else {
   FUNC_3(VAR_23);

   FUNC_46(VAR_19->done_wait,
     VAR_20->done,
     FUNC_29(VAR_22->timeout));

   VAR_29 = FUNC_2(VAR_23, VAR_28, ((void*)0),
         ((void*)0));
  }

  if (!VAR_20->done) {
   FUNC_35("test timed out", VAR_27, VAR_34->off, VAR_35->off,
          VAR_52, 0);
   goto error_unmap_continue;
  } else if (VAR_29 != VAR_1) {
   FUNC_35(VAR_29 == VAR_3 ?
          "completion error status" :
          "completion busy status", VAR_27, VAR_34->off,
          VAR_35->off, VAR_52, VAR_32);
   goto error_unmap_continue;
  }

  FUNC_11(VAR_50);

  if (VAR_22->noverify) {
   FUNC_44("test passed", VAR_27, VAR_34->off,
           VAR_35->off, VAR_52, 0);
   continue;
  }

  VAR_38 = FUNC_25();
  FUNC_32("%s: verifying source buffer...\n", VAR_15->comm);
  VAR_25 = FUNC_19(VAR_34->aligned, 0, VAR_34->off,
    0, VAR_14, 1, VAR_46);
  VAR_25 += FUNC_19(VAR_34->aligned, VAR_34->off,
    VAR_34->off + VAR_52, VAR_34->off,
    VAR_14 | VAR_12, 1, VAR_46);
  VAR_25 += FUNC_19(VAR_34->aligned, VAR_34->off + VAR_52,
    VAR_33, VAR_34->off + VAR_52,
    VAR_14, 1, VAR_46);

  FUNC_32("%s: verifying dest buffer...\n", VAR_15->comm);
  VAR_25 += FUNC_19(VAR_35->aligned, 0, VAR_35->off,
    0, VAR_13, 0, VAR_46);

  VAR_25 += FUNC_19(VAR_35->aligned, VAR_35->off,
    VAR_35->off + VAR_52, VAR_34->off,
    VAR_14 | VAR_12, 0, VAR_46);

  VAR_25 += FUNC_19(VAR_35->aligned, VAR_35->off + VAR_52,
    VAR_33, VAR_35->off + VAR_52,
    VAR_13, 0, VAR_46);

  VAR_39 = FUNC_26(FUNC_25(), VAR_38);
  VAR_41 = FUNC_24(VAR_41, VAR_39);

  if (VAR_25) {
   FUNC_35("data error", VAR_27, VAR_34->off, VAR_35->off,
          VAR_52, VAR_25);
   VAR_26++;
  } else {
   FUNC_44("test passed", VAR_27, VAR_34->off,
           VAR_35->off, VAR_52, 0);
  }

  continue;

error_unmap_continue:
  FUNC_11(VAR_50);
  VAR_26++;
 }
 VAR_37 = FUNC_26(FUNC_25(), VAR_37);
 VAR_37 = FUNC_26(VAR_37, VAR_41);
 VAR_37 = FUNC_26(VAR_37, VAR_40);
 VAR_42 = FUNC_27(VAR_37);

 VAR_32 = 0;
 FUNC_21(VAR_48);
err_srcs_array:
 FUNC_21(VAR_47);
err_dst:
 FUNC_14(VAR_35);
err_src:
 FUNC_14(VAR_34);
err_free_coefs:
 FUNC_21(VAR_31);
err_thread_type:
 VAR_44 = FUNC_17(VAR_42, VAR_27);
 FUNC_34("%s: summary %u tests, %u failures %llu.%02llu iops %llu KB/s (%d)\n",
  VAR_15->comm, VAR_27, VAR_26,
  FUNC_1(VAR_44), FUNC_0(VAR_44),
  FUNC_12(VAR_42, VAR_43), VAR_32);


 if (VAR_32 || VAR_26)
  FUNC_10(VAR_23);

 VAR_19->done = 1;
 FUNC_47(&VAR_17);

 return VAR_32;
}
