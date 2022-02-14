
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppa_addr {int dummy; } ;
struct pblk_line_meta {int blk_per_line; scalar_t__ smeta_sec; } ;
struct pblk_line {scalar_t__ state; struct nvm_chk_meta* chks; int blk_bitmap; } ;
struct pblk {TYPE_1__* luns; struct nvm_tgt_dev* dev; struct pblk_line_meta lm; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int state; scalar_t__ wp; } ;
struct TYPE_2__ {struct ppa_addr bppa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (struct nvm_geo*,struct ppa_addr) ;

__attribute__((used)) static int FUNC_2(struct pblk_line *VAR_3,
     struct pblk *VAR_4)
{

 struct pblk_line_meta *VAR_5 = &VAR_4->lm;
 struct nvm_tgt_dev *VAR_6 = VAR_4->dev;
 struct nvm_geo *VAR_7 = &VAR_6->geo;
 struct nvm_chk_meta *VAR_8;
 struct ppa_addr VAR_9;
 int VAR_10;

 if (VAR_3->state == VAR_2)
  return 0;

 VAR_10 = FUNC_0(VAR_3->blk_bitmap, VAR_5->blk_per_line);
 if (VAR_10 >= VAR_5->blk_per_line)
  return 0;

 VAR_9 = VAR_4->luns[VAR_10].bppa;
 VAR_8 = &VAR_3->chks[FUNC_1(VAR_7, VAR_9)];

 if (VAR_8->state & VAR_0 ||
     (VAR_8->state & VAR_1
      && VAR_8->wp >= VAR_5->smeta_sec))
  return 1;

 return 0;
}
