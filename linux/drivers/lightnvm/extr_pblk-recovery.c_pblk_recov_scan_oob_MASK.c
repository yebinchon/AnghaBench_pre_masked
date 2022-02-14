
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_sec_meta {int lba; } ;
struct pblk_recov_alloc {void* dma_meta_list; void* dma_ppa_list; void* data; struct nvm_rq* rqd; void* meta_list; struct ppa_addr* ppa_list; } ;
struct pblk_line_meta {scalar_t__ smeta_sec; } ;
struct pblk_line {int nr_valid_lbas; int id; int blk_bitmap; TYPE_1__* emeta; } ;
struct pblk {int min_write_pgs; scalar_t__ capacity; int inflight_io; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int nr_ppas; int is_seq; scalar_t__ error; void* dma_meta_list; void* dma_ppa_list; struct ppa_addr* ppa_list; void* meta_list; int opcode; int * bio; } ;
typedef void* dma_addr_t ;
typedef int __le64 ;
struct TYPE_2__ {int buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 struct ppa_addr FUNC_1 (struct pblk*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (struct pblk*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct nvm_rq*,int ,int ) ;
 struct ppa_addr* FUNC_7 (struct nvm_rq*) ;
 int FUNC_8 (struct pblk*,scalar_t__,int ,int) ;
 int FUNC_9 (struct pblk*,char*,int) ;
 int VAR_4 ;
 struct pblk_sec_meta* FUNC_10 (struct pblk*,void*,int) ;
 int FUNC_11 (struct pblk*,struct nvm_rq*) ;
 scalar_t__ FUNC_12 (struct pblk*,int) ;
 int FUNC_13 (struct pblk_line*) ;
 scalar_t__ FUNC_14 (struct pblk*,struct pblk_line*) ;
 scalar_t__ FUNC_15 (struct pblk*,struct pblk_line*) ;
 int FUNC_16 (struct pblk*,struct nvm_rq*) ;
 int FUNC_17 (struct pblk*,struct pblk_line*) ;
 int FUNC_18 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_19 (struct pblk*,struct pblk_line*,int) ;
 scalar_t__ FUNC_20 (struct pblk*,struct pblk_line*) ;
 int FUNC_21 (struct pblk*,struct nvm_rq*,void*) ;
 int FUNC_22 (struct pblk*,scalar_t__,struct ppa_addr) ;
 int FUNC_23 (struct pblk*,char*,int ) ;
 scalar_t__ FUNC_24 (int,int ) ;

__attribute__((used)) static int FUNC_25(struct pblk *VAR_5, struct pblk_line *VAR_6,
          struct pblk_recov_alloc VAR_7)
{
 struct nvm_tgt_dev *VAR_8 = VAR_5->dev;
 struct pblk_line_meta *VAR_9 = &VAR_5->lm;
 struct nvm_geo *VAR_10 = &VAR_8->geo;
 struct ppa_addr *VAR_11;
 void *VAR_12;
 struct nvm_rq *VAR_13;
 void *VAR_14;
 dma_addr_t VAR_15, VAR_16;
 __le64 *VAR_17;
 u64 VAR_18 = FUNC_14(VAR_5, VAR_6) + VAR_9->smeta_sec;
 bool VAR_19 = 0;
 int VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;
 u64 VAR_24 = FUNC_20(VAR_5, VAR_6) - VAR_9->smeta_sec;

 if (FUNC_15(VAR_5, VAR_6))
  FUNC_23(VAR_5, "recovering unbalanced line (%d)\n", VAR_6->id);

 VAR_11 = VAR_7.ppa_list;
 VAR_12 = VAR_7.meta_list;
 VAR_13 = VAR_7.rqd;
 VAR_14 = VAR_7.data;
 VAR_15 = VAR_7.dma_ppa_list;
 VAR_16 = VAR_7.dma_meta_list;

 VAR_17 = FUNC_4(VAR_5, VAR_6->emeta->buf);

next_rq:
 FUNC_6(VAR_13, 0, VAR_4);

 VAR_20 = FUNC_8(VAR_5, VAR_24, 0, 0);
 if (!VAR_20)
  VAR_20 = VAR_5->min_write_pgs;

retry_rq:
 VAR_13->bio = ((void*)0);
 VAR_13->opcode = VAR_2;
 VAR_13->meta_list = VAR_12;
 VAR_13->nr_ppas = VAR_20;
 VAR_13->ppa_list = VAR_11;
 VAR_13->dma_ppa_list = VAR_15;
 VAR_13->dma_meta_list = VAR_16;
 VAR_11 = FUNC_7(VAR_13);

 if (FUNC_12(VAR_5, VAR_20))
  VAR_13->is_seq = 1;

 for (VAR_21 = 0; VAR_21 < VAR_13->nr_ppas; ) {
  struct ppa_addr VAR_25;
  int VAR_26;

  VAR_25 = FUNC_1(VAR_5, VAR_18, VAR_6->id);
  VAR_26 = FUNC_18(VAR_10, VAR_25);

  while (FUNC_24(VAR_26, VAR_6->blk_bitmap)) {
   VAR_18 += VAR_5->min_write_pgs;
   VAR_25 = FUNC_1(VAR_5, VAR_18, VAR_6->id);
   VAR_26 = FUNC_18(VAR_10, VAR_25);
  }

  for (VAR_22 = 0; VAR_22 < VAR_5->min_write_pgs; VAR_22++, VAR_21++)
   VAR_11[VAR_21] =
    FUNC_1(VAR_5, VAR_18 + VAR_22, VAR_6->id);
 }

 VAR_23 = FUNC_21(VAR_5, VAR_13, VAR_14);
 if (VAR_23) {
  FUNC_9(VAR_5, "I/O submission failed: %d\n", VAR_23);
  return VAR_23;
 }

 FUNC_2(&VAR_5->inflight_io);


 if (VAR_13->error && VAR_13->error != VAR_3) {
  int VAR_27, VAR_28;

  if (VAR_19) {
   FUNC_16(VAR_5, VAR_13);
   return -VAR_1;
  }

  VAR_27 = FUNC_17(VAR_5, VAR_6);
  VAR_28 = FUNC_19(VAR_5, VAR_6, VAR_27);
  if (VAR_28) {
   return VAR_28;
  }

  VAR_19 = 1;
  goto retry_rq;
 }

 FUNC_11(VAR_5, VAR_13);

 for (VAR_21 = 0; VAR_21 < VAR_13->nr_ppas; VAR_21++) {
  struct pblk_sec_meta *VAR_29 = FUNC_10(VAR_5, VAR_12, VAR_21);
  u64 VAR_30 = FUNC_5(VAR_29->lba);

  VAR_17[VAR_18++] = FUNC_3(VAR_30);

  if (VAR_30 == VAR_0 || VAR_30 >= VAR_5->capacity)
   continue;

  VAR_6->nr_valid_lbas++;
  FUNC_22(VAR_5, VAR_30, VAR_11[VAR_21]);
 }

 VAR_24 -= VAR_20;
 if (VAR_24 > 0)
  goto next_rq;





 return 0;
}
