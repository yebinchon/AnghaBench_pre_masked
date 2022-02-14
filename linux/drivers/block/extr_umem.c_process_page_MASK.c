
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bi_size; } ;
struct mm_page {size_t headcnt; size_t cnt; struct bio* bio; TYPE_2__ iter; struct mm_dma_desc* desc; } ;
struct mm_dma_desc {int transfer_size; int local_addr; int data_dma_handle; int sem_control_bits; } ;
struct cardinfo {unsigned int dma_status; size_t Active; int init_size; int mm_size; int lock; scalar_t__ check_batteries; TYPE_1__* dev; struct mm_page* mm_pages; } ;
struct bio_vec {int bv_len; } ;
struct bio {struct bio* bi_next; int bi_status; TYPE_2__ bi_iter; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cardinfo*) ;
 int FUNC_1 (struct bio*,TYPE_2__*,int ) ;
 int FUNC_2 (struct bio*) ;
 struct bio_vec FUNC_3 (struct bio*,TYPE_2__) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct cardinfo*) ;
 int VAR_12 ;
 int FUNC_6 (int ,int *,char*,...) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (struct cardinfo*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct cardinfo*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct mm_page*) ;
 int FUNC_14 (struct cardinfo*,int ,int ) ;
 int FUNC_15 (struct cardinfo*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(unsigned long VAR_13)
{






 struct mm_page *VAR_14;
 struct bio *VAR_15 = ((void*)0);
 struct cardinfo *VAR_16 = (struct cardinfo *)VAR_13;
 unsigned int VAR_17 = VAR_16->dma_status;

 FUNC_16(&VAR_16->lock);
 if (VAR_16->Active < 0)
  goto out_unlock;
 VAR_14 = &VAR_16->mm_pages[VAR_16->Active];

 while (VAR_14->headcnt < VAR_14->cnt) {
  struct bio *VAR_18 = VAR_14->bio;
  struct mm_dma_desc *VAR_19 = &VAR_14->desc[VAR_14->headcnt];
  int VAR_20 = FUNC_9(VAR_19->sem_control_bits);
  int VAR_21 = 0;
  struct bio_vec VAR_22;

  if (!(VAR_20 & VAR_2)) {
   VAR_20 = VAR_17;
   VAR_21 = 1;
  }

  VAR_14->headcnt++;
  VAR_22 = FUNC_3(VAR_18, VAR_14->iter);
  FUNC_1(VAR_18, &VAR_14->iter, VAR_22.bv_len);

  if (!VAR_14->iter.bi_size) {
   VAR_14->bio = VAR_18->bi_next;
   if (VAR_14->bio)
    VAR_14->iter = VAR_14->bio->bi_iter;
  }

  FUNC_7(&VAR_16->dev->dev, VAR_19->data_dma_handle,
          VAR_22.bv_len,
     (VAR_20 & VAR_4) ?
    VAR_6 : VAR_5);
  if (VAR_20 & VAR_3) {

   VAR_18->bi_status = VAR_0;
   FUNC_6(VAR_8, &VAR_16->dev->dev,
    "I/O error on sector %d/%d\n",
    FUNC_9(VAR_19->local_addr)>>9,
    FUNC_9(VAR_19->transfer_size));
   FUNC_8(VAR_16, VAR_20);
  } else if (FUNC_11(FUNC_4(VAR_18)) &&
      FUNC_9(VAR_19->local_addr) >> 9 ==
    VAR_16->init_size) {
   VAR_16->init_size += FUNC_9(VAR_19->transfer_size) >> 9;
   if (VAR_16->init_size >> 1 >= VAR_16->mm_size) {
    FUNC_6(VAR_7, &VAR_16->dev->dev,
     "memory now initialised\n");
    FUNC_15(VAR_16, VAR_11, 1);
   }
  }
  if (VAR_18 != VAR_14->bio) {
   VAR_18->bi_next = VAR_15;
   VAR_15 = VAR_18;
  }

  if (VAR_21)
   break;
 }

 if (VAR_12 & VAR_1)
  FUNC_14(VAR_16, VAR_10, VAR_9);

 if (VAR_16->check_batteries) {
  VAR_16->check_batteries = 0;
  FUNC_5(VAR_16);
 }
 if (VAR_14->headcnt >= VAR_14->cnt) {
  FUNC_13(VAR_14);
  VAR_16->Active = -1;
  FUNC_0(VAR_16);
 } else {

  FUNC_12("do some more\n");
  FUNC_10(VAR_16);
 }
 out_unlock:
 FUNC_17(&VAR_16->lock);

 while (VAR_15) {
  struct bio *VAR_23 = VAR_15;

  VAR_15 = VAR_23->bi_next;
  VAR_23->bi_next = ((void*)0);
  FUNC_2(VAR_23);
 }
}
