
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line_meta {int* emeta_sec; } ;
struct pblk_line {int id; int blk_bitmap; scalar_t__ emeta_ssec; } ;
struct pblk {int min_write_pgs; int inflight_io; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int csecs; } ;
struct nvm_tgt_dev {int parent; struct nvm_geo geo; } ;
struct nvm_rq {int dma_meta_list; int dma_ppa_list; int nr_ppas; int is_seq; scalar_t__ error; void* meta_list; int opcode; void* ppa_list; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ppa_addr FUNC_0 (struct pblk*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvm_rq*,int ,int) ;
 void* FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,void*,int) ;
 struct ppa_addr* FUNC_5 (struct nvm_rq*) ;
 scalar_t__ FUNC_6 (struct pblk*,scalar_t__) ;
 int FUNC_7 (struct pblk*,int,int ,int) ;
 int FUNC_8 (struct pblk*) ;
 int FUNC_9 (struct pblk*,char*,int) ;
 scalar_t__ FUNC_10 (struct pblk*,int) ;
 int FUNC_11 (struct pblk*,struct nvm_rq*) ;
 int FUNC_12 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_13 (struct pblk*,struct nvm_rq*,void*) ;
 scalar_t__ FUNC_14 (int,int ) ;

int FUNC_15(struct pblk *VAR_6, struct pblk_line *VAR_7,
    void *VAR_8)
{
 struct nvm_tgt_dev *VAR_9 = VAR_6->dev;
 struct nvm_geo *VAR_10 = &VAR_9->geo;
 struct pblk_line_meta *VAR_11 = &VAR_6->lm;
 void *VAR_12, *VAR_13;
 struct ppa_addr *VAR_14;
 struct nvm_rq VAR_15;
 u64 VAR_16 = VAR_7->emeta_ssec;
 dma_addr_t VAR_17, VAR_18;
 int VAR_19 = VAR_6->min_write_pgs;
 int VAR_20 = VAR_11->emeta_sec[0];
 int VAR_21 = VAR_7->id;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;

 VAR_13 = FUNC_3(VAR_9->parent, VAR_3,
       &VAR_18);
 if (!VAR_13)
  return -VAR_2;

 VAR_12 = VAR_13 + FUNC_8(VAR_6);
 VAR_17 = VAR_18 + FUNC_8(VAR_6);

next_rq:
 FUNC_2(&VAR_15, 0, sizeof(struct nvm_rq));

 VAR_22 = FUNC_7(VAR_6, VAR_20, 0, 0);
 VAR_23 = VAR_22 * VAR_10->csecs;

 VAR_15.meta_list = VAR_13;
 VAR_15.ppa_list = VAR_12;
 VAR_15.dma_meta_list = VAR_18;
 VAR_15.dma_ppa_list = VAR_17;
 VAR_15.opcode = VAR_4;
 VAR_15.nr_ppas = VAR_22;
 VAR_14 = FUNC_5(&VAR_15);

 for (VAR_24 = 0; VAR_24 < VAR_15.nr_ppas; ) {
  struct ppa_addr VAR_27 = FUNC_0(VAR_6, VAR_16, VAR_21);
  int VAR_28 = FUNC_12(VAR_10, VAR_27);

  if (FUNC_10(VAR_6, VAR_22))
   VAR_15.is_seq = 1;

  while (FUNC_14(VAR_28, VAR_7->blk_bitmap)) {
   VAR_16 += VAR_19;
   if (FUNC_6(VAR_6, VAR_16)) {
    VAR_26 = -VAR_0;
    goto free_rqd_dma;
   }

   VAR_27 = FUNC_0(VAR_6, VAR_16, VAR_21);
   VAR_28 = FUNC_12(VAR_10, VAR_27);
  }

  if (FUNC_6(VAR_6, VAR_16 + VAR_19)) {
   VAR_26 = -VAR_0;
   goto free_rqd_dma;
  }

  for (VAR_25 = 0; VAR_25 < VAR_19; VAR_25++, VAR_24++, VAR_16++)
   VAR_14[VAR_24] = FUNC_0(VAR_6, VAR_16, VAR_21);
 }

 VAR_26 = FUNC_13(VAR_6, &VAR_15, VAR_8);
 if (VAR_26) {
  FUNC_9(VAR_6, "emeta I/O submission failed: %d\n", VAR_26);
  goto free_rqd_dma;
 }

 FUNC_1(&VAR_6->inflight_io);

 if (VAR_15.error && VAR_15.error != VAR_5) {
  FUNC_11(VAR_6, &VAR_15);
  VAR_26 = -VAR_1;
  goto free_rqd_dma;
 }

 VAR_8 += VAR_23;
 VAR_20 -= VAR_22;
 if (VAR_20)
  goto next_rq;

free_rqd_dma:
 FUNC_4(VAR_9->parent, VAR_15.meta_list, VAR_15.dma_meta_list);
 return VAR_26;
}
