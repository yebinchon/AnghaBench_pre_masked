
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_meta {int smeta_len; int smeta_sec; int* emeta_len; int* emeta_sec; int emeta_bb; int sec_bitmap_len; int blk_bitmap_len; int lun_bitmap_len; int blk_per_line; int sec_per_line; } ;
struct pblk {struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int clba; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct pblk *VAR_1, char *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_1->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct pblk_line_meta *VAR_5 = &VAR_1->lm;
 ssize_t VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_2, VAR_0 - VAR_6,
    "smeta - len:%d, secs:%d\n",
     VAR_5->smeta_len, VAR_5->smeta_sec);
 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_0 - VAR_6,
    "emeta - len:%d, sec:%d, bb_start:%d\n",
     VAR_5->emeta_len[0], VAR_5->emeta_sec[0],
     VAR_5->emeta_bb);
 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_0 - VAR_6,
    "bitmap lengths: sec:%d, blk:%d, lun:%d\n",
     VAR_5->sec_bitmap_len,
     VAR_5->blk_bitmap_len,
     VAR_5->lun_bitmap_len);
 VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_0 - VAR_6,
    "blk_line:%d, sec_line:%d, sec_blk:%d\n",
     VAR_5->blk_per_line,
     VAR_5->sec_per_line,
     VAR_4->clba);

 return VAR_6;
}
