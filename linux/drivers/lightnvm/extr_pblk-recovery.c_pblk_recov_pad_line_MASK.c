
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {int lba; } ;
struct pblk_pad_rq {int wait; int ref; struct pblk* pblk; } ;
struct pblk_line {size_t cur_sec; int left_msecs; int id; int blk_bitmap; int lock; TYPE_1__* emeta; } ;
struct pblk {int min_write_pgs; int max_write_pgs; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int csecs; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int is_seq; int nr_ppas; void* meta_list; struct pblk_pad_rq* private; int end_io; int opcode; int * bio; } ;
typedef int __le64 ;
struct TYPE_2__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ppa_addr FUNC_0 (struct pblk*,size_t,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct pblk*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pblk_pad_rq*) ;
 struct pblk_pad_rq* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct ppa_addr* FUNC_10 (struct nvm_rq*) ;
 size_t FUNC_11 (struct pblk*,struct pblk_line*,int) ;
 struct nvm_rq* FUNC_12 (struct pblk*,int ) ;
 int FUNC_13 (struct pblk*,struct nvm_rq*) ;
 int FUNC_14 (struct pblk*,int,int ,int) ;
 int FUNC_15 (struct pblk*,struct ppa_addr) ;
 int VAR_5 ;
 int FUNC_16 (struct pblk*,char*,int) ;
 int FUNC_17 (struct pblk*,struct nvm_rq*,int ) ;
 struct pblk_sec_meta* FUNC_18 (struct pblk*,void*,int) ;
 int FUNC_19 (struct pblk_line*) ;
 int FUNC_20 (struct pblk*,struct ppa_addr) ;
 int FUNC_21 (struct nvm_geo*,struct ppa_addr) ;
 int VAR_6 ;
 int FUNC_22 (struct pblk*,struct nvm_rq*,void*) ;
 int FUNC_23 (struct pblk*,struct ppa_addr) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int,int ) ;
 int FUNC_27 (void*) ;
 void* FUNC_28 (int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct pblk *VAR_7, struct pblk_line *VAR_8,
          int VAR_9)
{
 struct nvm_tgt_dev *VAR_10 = VAR_7->dev;
 struct nvm_geo *VAR_11 = &VAR_10->geo;
 void *VAR_12;
 struct pblk_pad_rq *VAR_13;
 struct nvm_rq *VAR_14;
 struct ppa_addr *VAR_15;
 void *VAR_16;
 __le64 *VAR_17 = FUNC_3(VAR_7, VAR_8->emeta->buf);
 u64 VAR_18 = VAR_8->cur_sec;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23 = 0;

 FUNC_24(&VAR_8->lock);
 VAR_19 = VAR_8->left_msecs;
 FUNC_25(&VAR_8->lock);

 VAR_13 = FUNC_6(sizeof(struct pblk_pad_rq), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_16 = FUNC_28(FUNC_1(VAR_7->max_write_pgs, VAR_11->csecs));
 if (!VAR_16) {
  VAR_23 = -VAR_1;
  goto free_rq;
 }

 VAR_13->pblk = VAR_7;
 FUNC_4(&VAR_13->wait);
 FUNC_8(&VAR_13->ref);

next_pad_rq:
 VAR_20 = FUNC_14(VAR_7, VAR_9, 0, 0);
 if (VAR_20 < VAR_7->min_write_pgs) {
  FUNC_16(VAR_7, "corrupted pad line %d\n", VAR_8->id);
  goto fail_complete;
 }

 VAR_14 = FUNC_12(VAR_7, VAR_4);

 VAR_23 = FUNC_13(VAR_7, VAR_14);
 if (VAR_23) {
  FUNC_17(VAR_7, VAR_14, VAR_4);
  goto fail_complete;
 }

 VAR_14->bio = ((void*)0);
 VAR_14->opcode = VAR_3;
 VAR_14->is_seq = 1;
 VAR_14->nr_ppas = VAR_20;
 VAR_14->end_io = VAR_5;
 VAR_14->private = VAR_13;

 VAR_15 = FUNC_10(VAR_14);
 VAR_12 = VAR_14->meta_list;

 for (VAR_21 = 0; VAR_21 < VAR_14->nr_ppas; ) {
  struct ppa_addr VAR_24;
  int VAR_25;

  VAR_18 = FUNC_11(VAR_7, VAR_8, VAR_7->min_write_pgs);
  VAR_24 = FUNC_0(VAR_7, VAR_18, VAR_8->id);
  VAR_25 = FUNC_21(VAR_11, VAR_24);

  while (FUNC_26(VAR_25, VAR_8->blk_bitmap)) {
   VAR_18 += VAR_7->min_write_pgs;
   VAR_24 = FUNC_0(VAR_7, VAR_18, VAR_8->id);
   VAR_25 = FUNC_21(VAR_11, VAR_24);
  }

  for (VAR_22 = 0; VAR_22 < VAR_7->min_write_pgs; VAR_22++, VAR_21++, VAR_18++) {
   struct ppa_addr VAR_26;
   struct pblk_sec_meta *VAR_27;
   __le64 VAR_28 = FUNC_2(VAR_0);

   VAR_26 = FUNC_0(VAR_7, VAR_18, VAR_8->id);

   FUNC_20(VAR_7, VAR_26);
   VAR_17[VAR_18] = VAR_28;
   VAR_27 = FUNC_18(VAR_7, VAR_12, VAR_21);
   VAR_27->lba = VAR_28;
   VAR_15[VAR_21] = VAR_26;
  }
 }

 FUNC_7(&VAR_13->ref);
 FUNC_15(VAR_7, VAR_15[0]);

 VAR_23 = FUNC_22(VAR_7, VAR_14, VAR_16);
 if (VAR_23) {
  FUNC_16(VAR_7, "I/O submission failed: %d\n", VAR_23);
  FUNC_23(VAR_7, VAR_15[0]);
  FUNC_9(&VAR_13->ref, VAR_6);
  FUNC_17(VAR_7, VAR_14, VAR_4);
  goto fail_complete;
 }

 VAR_19 -= VAR_20;
 VAR_9 -= VAR_20;
 if (VAR_9 && VAR_19)
  goto next_pad_rq;

fail_complete:
 FUNC_9(&VAR_13->ref, VAR_6);
 FUNC_29(&VAR_13->wait);

 if (!FUNC_19(VAR_8))
  FUNC_16(VAR_7, "corrupted padded line: %d\n", VAR_8->id);

 FUNC_27(VAR_16);
free_rq:
 FUNC_5(VAR_13);
 return VAR_23;
}
