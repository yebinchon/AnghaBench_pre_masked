
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chk; } ;
struct ppa_addr {TYPE_1__ m; } ;
struct pblk_lun {struct ppa_addr bppa; } ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int blk_bitmap; int id; struct nvm_chk_meta* chks; } ;
struct pblk {struct pblk_lun* luns; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int state; int type; int wp; int cnlb; int slba; int wi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct nvm_chk_meta* FUNC_1 (struct pblk*,struct nvm_chk_meta*,struct ppa_addr) ;
 int FUNC_2 (struct pblk*) ;
 int FUNC_3 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,struct ppa_addr*,int) ;

__attribute__((used)) static int FUNC_6(struct pblk *VAR_2, struct pblk_line *VAR_3,
       struct nvm_chk_meta *VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_2->dev;
 struct nvm_geo *VAR_6 = &VAR_5->geo;
 struct pblk_line_meta *VAR_7 = &VAR_2->lm;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->blk_per_line; VAR_8++) {
  struct pblk_lun *VAR_10 = &VAR_2->luns[VAR_8];
  struct nvm_chk_meta *VAR_11;
  struct nvm_chk_meta *VAR_12;
  struct ppa_addr VAR_13;
  int VAR_14;

  VAR_13 = VAR_10->bppa;
  VAR_14 = FUNC_3(VAR_6, VAR_13);
  VAR_11 = &VAR_3->chks[VAR_14];

  VAR_13.m.chk = VAR_3->id;
  VAR_12 = FUNC_1(VAR_2, VAR_4, VAR_13);

  VAR_11->state = VAR_12->state;
  VAR_11->type = VAR_12->type;
  VAR_11->wi = VAR_12->wi;
  VAR_11->slba = VAR_12->slba;
  VAR_11->cnlb = VAR_12->cnlb;
  VAR_11->wp = VAR_12->wp;

  FUNC_5(FUNC_2(VAR_2), &VAR_13,
     VAR_11->state);

  if (VAR_11->type & VAR_1) {
   FUNC_0(1, "pblk: custom-sized chunks unsupported\n");
   continue;
  }

  if (!(VAR_11->state & VAR_0))
   continue;

  FUNC_4(VAR_14, VAR_3->blk_bitmap);
  VAR_9++;
 }

 return VAR_9;
}
