
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {int id; int blk_bitmap; int blk_in_line; } ;
struct pblk {int bb_wq; int erase_failed; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ version; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ppa_addr* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pblk*,char*,int ,int) ;
 int FUNC_4 (struct pblk*,char*,int ,int) ;
 int FUNC_5 (struct pblk*,int *,struct ppa_addr*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct nvm_geo*,struct ppa_addr) ;
 scalar_t__ FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct pblk *VAR_3, struct pblk_line *VAR_4,
    struct ppa_addr VAR_5)
{
 struct nvm_tgt_dev *VAR_6 = VAR_3->dev;
 struct nvm_geo *VAR_7 = &VAR_6->geo;
 struct ppa_addr *VAR_8;
 int VAR_9 = FUNC_6(VAR_7, VAR_5);

 FUNC_3(VAR_3, "erase failed: line:%d, pos:%d\n", VAR_4->id, VAR_9);
 FUNC_1(&VAR_3->erase_failed);

 FUNC_0(&VAR_4->blk_in_line);
 if (FUNC_7(VAR_9, VAR_4->blk_bitmap))
  FUNC_4(VAR_3, "attempted to erase bb: line:%d, pos:%d\n",
       VAR_4->id, VAR_9);


 if (VAR_7->version == VAR_1)
  return;

 VAR_8 = FUNC_2(sizeof(struct ppa_addr), VAR_0);
 if (!VAR_8)
  return;

 *VAR_8 = VAR_5;
 FUNC_5(VAR_3, ((void*)0), VAR_8, VAR_2,
      VAR_0, VAR_3->bb_wq);
}
