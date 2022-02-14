
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {int parent; } ;
struct nvm_rq {int dma_meta_list; int meta_list; } ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct pblk *VAR_0, struct nvm_rq *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;

 if (VAR_1->meta_list)
  FUNC_0(VAR_2->parent, VAR_1->meta_list,
    VAR_1->dma_meta_list);
}
