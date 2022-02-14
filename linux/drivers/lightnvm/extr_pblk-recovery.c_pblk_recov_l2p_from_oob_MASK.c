
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_recov_alloc {void* dma_meta_list; void* dma_ppa_list; void* data; struct nvm_rq* rqd; void* meta_list; struct ppa_addr* ppa_list; } ;
struct pblk_line {int dummy; } ;
struct pblk {int r_rq_pool; int max_write_pgs; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int csecs; } ;
struct nvm_tgt_dev {int parent; struct nvm_geo geo; } ;
struct nvm_rq {int dummy; } ;
typedef scalar_t__ meta_list ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (void*) ;
 struct nvm_rq* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct nvm_rq*,int *) ;
 int FUNC_4 (struct nvm_rq*,int ,int ) ;
 void* FUNC_5 (int ,int ,void**) ;
 int FUNC_6 (int ,void*,void*) ;
 scalar_t__ FUNC_7 (struct pblk*) ;
 int FUNC_8 (struct pblk*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (struct pblk_line*) ;
 int FUNC_10 (struct pblk*,struct pblk_line*) ;
 int FUNC_11 (struct pblk*,struct pblk_line*,struct pblk_recov_alloc) ;

__attribute__((used)) static int FUNC_12(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_3->dev;
 struct nvm_geo *VAR_6 = &VAR_5->geo;
 struct nvm_rq *VAR_7;
 struct ppa_addr *VAR_8;
 void *VAR_9;
 struct pblk_recov_alloc VAR_10;
 void *VAR_11;
 dma_addr_t VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_9 = FUNC_5(VAR_5->parent, VAR_1, &VAR_13);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = (void *)(VAR_9) + FUNC_7(VAR_3);
 VAR_12 = VAR_13 + FUNC_7(VAR_3);

 VAR_11 = FUNC_0(VAR_3->max_write_pgs, VAR_6->csecs, VAR_1);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto free_meta_list;
 }

 VAR_7 = FUNC_2(&VAR_3->r_rq_pool, VAR_1);
 FUNC_4(VAR_7, 0, VAR_2);

 VAR_10.ppa_list = VAR_8;
 VAR_10.meta_list = VAR_9;
 VAR_10.rqd = VAR_7;
 VAR_10.data = VAR_11;
 VAR_10.dma_ppa_list = VAR_12;
 VAR_10.dma_meta_list = VAR_13;

 VAR_14 = FUNC_11(VAR_3, VAR_4, VAR_10);
 if (VAR_14) {
  FUNC_8(VAR_3, "could not recover L2P form OOB\n");
  goto out;
 }

 if (FUNC_9(VAR_4))
  FUNC_10(VAR_3, VAR_4);

out:
 FUNC_3(VAR_7, &VAR_3->r_rq_pool);
 FUNC_1(VAR_11);
free_meta_list:
 FUNC_6(VAR_5->parent, VAR_9, VAR_13);

 return VAR_14;
}
