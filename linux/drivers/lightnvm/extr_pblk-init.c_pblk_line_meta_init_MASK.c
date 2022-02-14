
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_meta {int sec_per_line; int blk_per_line; int blk_bitmap_len; int sec_bitmap_len; int lun_bitmap_len; int mid_thrs; int high_thrs; int meta_distance; int smeta_sec; int smeta_len; int* emeta_sec; int* emeta_len; int emeta_bb; int min_blk_line; } ;
struct pblk {int min_write_pgs; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int clba; int all_luns; int ws_opt; int csecs; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct line_smeta {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (struct pblk*) ;
 int FUNC_3 (struct pblk*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pblk *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_1->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_line_meta *VAR_4 = &VAR_1->lm;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_4->sec_per_line = VAR_3->clba * VAR_3->all_luns;
 VAR_4->blk_per_line = VAR_3->all_luns;
 VAR_4->blk_bitmap_len = FUNC_0(VAR_3->all_luns) * sizeof(long);
 VAR_4->sec_bitmap_len = FUNC_0(VAR_4->sec_per_line) * sizeof(long);
 VAR_4->lun_bitmap_len = FUNC_0(VAR_3->all_luns) * sizeof(long);
 VAR_4->mid_thrs = VAR_4->sec_per_line / 2;
 VAR_4->high_thrs = VAR_4->sec_per_line / 4;
 VAR_4->meta_distance = (VAR_3->all_luns / 2) * VAR_1->min_write_pgs;




 VAR_7 = 1;
add_smeta_page:
 VAR_4->smeta_sec = VAR_7 * VAR_3->ws_opt;
 VAR_4->smeta_len = VAR_4->smeta_sec * VAR_3->csecs;

 VAR_5 = sizeof(struct line_smeta) + VAR_4->lun_bitmap_len;
 if (VAR_5 > VAR_4->smeta_len) {
  VAR_7++;
  goto add_smeta_page;
 }




 VAR_7 = 1;
add_emeta_page:
 VAR_4->emeta_sec[0] = VAR_7 * VAR_3->ws_opt;
 VAR_4->emeta_len[0] = VAR_4->emeta_sec[0] * VAR_3->csecs;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6 > VAR_4->emeta_len[0]) {
  VAR_7++;
  goto add_emeta_page;
 }

 VAR_4->emeta_bb = VAR_3->all_luns > VAR_7 ? VAR_3->all_luns - VAR_7 : 0;

 VAR_4->min_blk_line = 1;
 if (VAR_3->all_luns > 1)
  VAR_4->min_blk_line += FUNC_1(VAR_4->smeta_sec +
     VAR_4->emeta_sec[0], VAR_3->clba);

 if (VAR_4->min_blk_line > VAR_4->blk_per_line) {
  FUNC_3(VAR_1, "config. not supported. Min. LUN in line:%d\n",
       VAR_4->blk_per_line);
  return -VAR_0;
 }

 return 0;
}
