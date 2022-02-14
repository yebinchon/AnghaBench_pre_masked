
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_tgt_dev {int parent; } ;
struct nvm_rq {int dma_ppa_list; int ppa_list; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nvm_tgt_dev *VAR_0,
   struct nvm_rq *VAR_1)
{
 if (!VAR_1->ppa_list)
  return;

 FUNC_0(VAR_0->parent, VAR_1->ppa_list, VAR_1->dma_ppa_list);
}
