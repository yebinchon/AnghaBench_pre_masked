
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int blk_bitmap; } ;
struct pblk {struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int ws_opt; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int FUNC_0 (int ,int) ;

u64 FUNC_1(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_line_meta *VAR_4 = &VAR_0->lm;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_1->blk_bitmap, VAR_4->blk_per_line);
 if (VAR_5 >= VAR_4->blk_per_line)
  return -1;

 return VAR_5 * VAR_3->ws_opt;
}
