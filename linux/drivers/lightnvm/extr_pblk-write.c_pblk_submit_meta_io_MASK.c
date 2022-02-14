
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line_mgmt {int close_lock; } ;
struct pblk_line_meta {scalar_t__* emeta_len; } ;
struct pblk_line {int id; int list; int lock; struct pblk_emeta* emeta; } ;
struct pblk_g_ctx {struct pblk_line* private; } ;
struct pblk_emeta {int mem; scalar_t__ buf; } ;
struct pblk {int min_write_pgs; struct pblk_line_meta lm; struct pblk_line_mgmt l_mg; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int csecs; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int nr_ppas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pblk*,struct pblk_line*,int) ;
 struct ppa_addr FUNC_1 (struct pblk*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct pblk_g_ctx* FUNC_4 (struct nvm_rq*) ;
 struct ppa_addr* FUNC_5 (struct nvm_rq*) ;
 struct nvm_rq* FUNC_6 (struct pblk*,int ) ;
 int FUNC_7 (struct pblk*,struct nvm_rq*,int,int ) ;
 int FUNC_8 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_9 (struct pblk*,struct ppa_addr) ;
 int VAR_2 ;
 int FUNC_10 (struct pblk*,char*,int) ;
 int FUNC_11 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_12 (struct pblk*,struct nvm_rq*,void*) ;
 int FUNC_13 (struct pblk*,struct ppa_addr) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_3->dev;
 struct nvm_geo *VAR_6 = &VAR_5->geo;
 struct pblk_line_mgmt *VAR_7 = &VAR_3->l_mg;
 struct pblk_line_meta *VAR_8 = &VAR_3->lm;
 struct pblk_emeta *VAR_9 = VAR_4->emeta;
 struct ppa_addr *VAR_10;
 struct pblk_g_ctx *VAR_11;
 struct nvm_rq *VAR_12;
 void *VAR_13;
 u64 VAR_14;
 int VAR_15 = VAR_3->min_write_pgs;
 int VAR_16 = VAR_4->id;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 VAR_12 = FUNC_6(VAR_3, VAR_1);

 VAR_11 = FUNC_4(VAR_12);
 VAR_11->private = VAR_4;

 VAR_17 = VAR_15 * VAR_6->csecs;
 VAR_13 = ((void *)VAR_9->buf) + VAR_9->mem;

 VAR_20 = FUNC_7(VAR_3, VAR_12, VAR_15, VAR_2);
 if (VAR_20)
  goto fail_free_rqd;

 VAR_10 = FUNC_5(VAR_12);
 for (VAR_18 = 0; VAR_18 < VAR_12->nr_ppas; ) {
  FUNC_14(&VAR_4->lock);
  VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_15);
  FUNC_15(&VAR_4->lock);
  for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++, VAR_18++, VAR_14++)
   VAR_10[VAR_18] = FUNC_1(VAR_3, VAR_14, VAR_16);
 }

 FUNC_14(&VAR_7->close_lock);
 VAR_9->mem += VAR_17;
 if (VAR_9->mem >= VAR_8->emeta_len[0])
  FUNC_3(&VAR_4->list);
 FUNC_15(&VAR_7->close_lock);

 FUNC_9(VAR_3, VAR_10[0]);

 VAR_20 = FUNC_12(VAR_3, VAR_12, VAR_13);
 if (VAR_20) {
  FUNC_10(VAR_3, "emeta I/O submission failed: %d\n", VAR_20);
  goto fail_rollback;
 }

 return VAR_0;

fail_rollback:
 FUNC_13(VAR_3, VAR_10[0]);
 FUNC_14(&VAR_7->close_lock);
 FUNC_8(VAR_3, VAR_4, VAR_15);
 FUNC_2(&VAR_4->list, &VAR_4->list);
 FUNC_15(&VAR_7->close_lock);
fail_free_rqd:
 FUNC_11(VAR_3, VAR_12, VAR_1);
 return VAR_20;
}
