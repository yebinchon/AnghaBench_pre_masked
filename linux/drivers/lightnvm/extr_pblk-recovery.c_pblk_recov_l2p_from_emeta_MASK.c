
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line_meta {size_t smeta_sec; } ;
struct pblk_line {size_t emeta_ssec; scalar_t__ left_msecs; int id; int lock; int vsc; int invalid_bitmap; int blk_bitmap; struct pblk_emeta* emeta; } ;
struct pblk_emeta {struct line_emeta* buf; } ;
struct pblk {struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct line_emeta {int nr_valid_lbas; } ;
typedef int __le64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ppa_addr FUNC_1 (struct pblk*,size_t,int ) ;
 int * FUNC_2 (struct pblk*,struct line_emeta*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pblk*,char*,int ,size_t,size_t) ;
 size_t FUNC_6 (struct pblk*,struct pblk_line*) ;
 int FUNC_7 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_8 (struct pblk*,scalar_t__,struct ppa_addr) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (size_t,int ) ;
 scalar_t__ FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_1->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct pblk_line_meta *VAR_5 = &VAR_1->lm;
 struct pblk_emeta *VAR_6 = VAR_2->emeta;
 struct line_emeta *VAR_7 = VAR_6->buf;
 __le64 *VAR_8;
 u64 VAR_9, VAR_10;
 u64 VAR_11, VAR_12 = 0;
 u64 VAR_13;

 VAR_8 = FUNC_2(VAR_1, VAR_7);
 if (!VAR_8)
  return 1;

 VAR_9 = FUNC_6(VAR_1, VAR_2) + VAR_5->smeta_sec;
 VAR_10 = VAR_2->emeta_ssec;
 VAR_11 = FUNC_4(VAR_7->nr_valid_lbas);

 for (VAR_13 = VAR_9; VAR_13 < VAR_10; VAR_13++) {
  struct ppa_addr VAR_14;
  int VAR_15;

  VAR_14 = FUNC_1(VAR_1, VAR_13, VAR_2->id);
  VAR_15 = FUNC_7(VAR_4, VAR_14);


  if (FUNC_12(VAR_15, VAR_2->blk_bitmap))
   continue;

  if (FUNC_4(VAR_8[VAR_13]) == VAR_0) {
   FUNC_9(&VAR_2->lock);
   if (FUNC_11(VAR_13, VAR_2->invalid_bitmap))
    FUNC_0(1, "pblk: rec. double invalidate:\n");
   else
    FUNC_3(VAR_2->vsc, -1);
   FUNC_10(&VAR_2->lock);

   continue;
  }

  FUNC_8(VAR_1, FUNC_4(VAR_8[VAR_13]), VAR_14);
  VAR_12++;
 }

 if (VAR_11 != VAR_12)
  FUNC_5(VAR_1, "line %d - inconsistent lba list(%llu/%llu)\n",
    VAR_2->id, VAR_11, VAR_12);

 VAR_2->left_msecs = 0;

 return 0;
}
