
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pblk_line_mgmt {int bad_list; int bb_aux; int bb_template; } ;
struct pblk_line_meta {int sec_per_line; int blk_per_line; int smeta_sec; int* emeta_sec; } ;
struct pblk_line {int sec_in_line; int cur_sec; int emeta_ssec; int left_msecs; int id; int list; int lock; int state; int invalid_bitmap; int * vsc; scalar_t__ nr_valid_lbas; int map_bitmap; int blk_bitmap; } ;
struct pblk {struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int ws_opt; scalar_t__ clba; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct pblk*,char*) ;
 int FUNC_10 (struct pblk*) ;
 int FUNC_11 (struct pblk*,char*,int ) ;
 scalar_t__ FUNC_12 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct pblk *VAR_1, struct pblk_line *VAR_2,
        int VAR_3)
{
 struct nvm_tgt_dev *VAR_4 = VAR_1->dev;
 struct nvm_geo *VAR_5 = &VAR_4->geo;
 struct pblk_line_meta *VAR_6 = &VAR_1->lm;
 struct pblk_line_mgmt *VAR_7 = &VAR_1->l_mg;
 u64 VAR_8;
 int VAR_9 = -1;
 int VAR_10;

 VAR_2->sec_in_line = VAR_6->sec_per_line;


 while ((VAR_9 = FUNC_7(VAR_2->blk_bitmap, VAR_6->blk_per_line,
     VAR_9 + 1)) < VAR_6->blk_per_line) {
  VAR_8 = VAR_9 * VAR_5->ws_opt;
  FUNC_3(VAR_7->bb_aux, VAR_7->bb_template, VAR_8,
       VAR_6->sec_per_line);
  FUNC_1(VAR_2->map_bitmap, VAR_2->map_bitmap, VAR_7->bb_aux,
       VAR_6->sec_per_line);
  VAR_2->sec_in_line -= VAR_5->clba;
 }


 VAR_9 = FUNC_6(VAR_2->blk_bitmap, VAR_6->blk_per_line);
 VAR_8 = VAR_9 * VAR_5->ws_opt;
 FUNC_2(VAR_2->map_bitmap, VAR_8, VAR_6->smeta_sec);
 VAR_2->sec_in_line -= VAR_6->smeta_sec;
 VAR_2->cur_sec = VAR_8 + VAR_6->smeta_sec;

 if (VAR_3 && FUNC_12(VAR_1, VAR_2, VAR_8)) {
  FUNC_9(VAR_1, "line smeta I/O failed. Retry\n");
  return 0;
 }

 FUNC_0(VAR_2->invalid_bitmap, VAR_2->map_bitmap, VAR_6->sec_per_line);




 VAR_10 = VAR_6->emeta_sec[0];
 VAR_8 = VAR_6->sec_per_line;
 while (VAR_10) {
  VAR_8 -= VAR_5->ws_opt;
  if (!FUNC_15(VAR_8, VAR_2->invalid_bitmap)) {
   FUNC_2(VAR_2->invalid_bitmap, VAR_8, VAR_5->ws_opt);
   VAR_10 -= VAR_5->ws_opt;
  }
 }

 VAR_2->emeta_ssec = VAR_8;
 VAR_2->sec_in_line -= VAR_6->emeta_sec[0];
 VAR_2->nr_valid_lbas = 0;
 VAR_2->left_msecs = VAR_2->sec_in_line;
 *VAR_2->vsc = FUNC_5(VAR_2->sec_in_line);

 if (VAR_6->sec_per_line - VAR_2->sec_in_line !=
  FUNC_4(VAR_2->invalid_bitmap, VAR_6->sec_per_line)) {
  FUNC_13(&VAR_2->lock);
  VAR_2->state = VAR_0;
  FUNC_16(FUNC_10(VAR_1), VAR_2->id,
     VAR_2->state);
  FUNC_14(&VAR_2->lock);

  FUNC_8(&VAR_2->list, &VAR_7->bad_list);
  FUNC_11(VAR_1, "unexpected line %d is bad\n", VAR_2->id);

  return 0;
 }

 return 1;
}
