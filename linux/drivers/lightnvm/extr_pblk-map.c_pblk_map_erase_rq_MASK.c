
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int blk; scalar_t__ reserved; } ;
struct ppa_addr {TYPE_2__ a; } ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int id; int left_eblks; int erase_bitmap; int lock; int blk_bitmap; } ;
struct pblk {int min_write_pgs; TYPE_1__* luns; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {int nr_ppas; } ;
struct TYPE_3__ {struct ppa_addr bppa; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 struct ppa_addr* FUNC_3 (struct nvm_rq*) ;
 void* FUNC_4 (struct pblk*,void*,int) ;
 void* FUNC_5 (struct pblk*,struct nvm_rq*) ;
 struct pblk_line* FUNC_6 (struct pblk*) ;
 struct pblk_line* FUNC_7 (struct pblk*) ;
 int FUNC_8 (struct pblk*,unsigned int,struct ppa_addr*,unsigned long*,void*,unsigned int) ;
 int FUNC_9 (struct pblk*,struct nvm_rq*,unsigned int,unsigned long*,unsigned int,int) ;
 int FUNC_10 (struct ppa_addr) ;
 int FUNC_11 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int,int ) ;
 scalar_t__ FUNC_16 (int ) ;

int FUNC_17(struct pblk *VAR_1, struct nvm_rq *VAR_2,
         unsigned int VAR_3, unsigned long *VAR_4,
         unsigned int VAR_5, struct ppa_addr *VAR_6)
{
 struct nvm_tgt_dev *VAR_7 = VAR_1->dev;
 struct nvm_geo *VAR_8 = &VAR_7->geo;
 struct pblk_line_meta *VAR_9 = &VAR_1->lm;
 void *VAR_10 = FUNC_5(VAR_1, VAR_2);
 void *VAR_11;
 struct ppa_addr *VAR_12 = FUNC_3(VAR_2);
 struct pblk_line *VAR_13, *VAR_14;
 unsigned int VAR_15;
 int VAR_16 = VAR_1->min_write_pgs;
 int VAR_17, VAR_18;
 int VAR_19;


 for (VAR_17 = 0; VAR_17 < VAR_2->nr_ppas; VAR_17 += VAR_16) {
  VAR_15 = (VAR_17 + VAR_16 > VAR_5) ? (VAR_5 % VAR_16) : VAR_16;
  VAR_11 = FUNC_4(VAR_1, VAR_10, VAR_17);

  VAR_19 = FUNC_8(VAR_1, VAR_3 + VAR_17, &VAR_12[VAR_17],
     VAR_4, VAR_11, VAR_15);
  if (VAR_19)
   return VAR_19;

  VAR_18 = FUNC_11(VAR_8, VAR_12[VAR_17]);




  VAR_13 = FUNC_7(VAR_1);
  if (!VAR_13)
   return FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_17 + VAR_16);

  FUNC_13(&VAR_13->lock);
  if (!FUNC_15(VAR_18, VAR_13->erase_bitmap)) {
   FUNC_12(VAR_18, VAR_13->erase_bitmap);
   FUNC_0(&VAR_13->left_eblks);

   *VAR_6 = VAR_12[VAR_17];
   VAR_6->a.blk = VAR_13->id;
   VAR_6->a.reserved = 0;

   FUNC_14(&VAR_13->lock);


   return FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_17 + VAR_16);
  }
  FUNC_14(&VAR_13->lock);
 }

 VAR_14 = FUNC_6(VAR_1);




 VAR_13 = FUNC_7(VAR_1);
 if (!VAR_13)
  return -VAR_0;


 if (FUNC_16(FUNC_10(*VAR_6)) &&
   FUNC_1(VAR_14->blk_bitmap, VAR_9->blk_per_line)) {
  int VAR_20 = -1;

retry:
  VAR_20 = FUNC_2(VAR_14->blk_bitmap,
      VAR_9->blk_per_line, VAR_20 + 1);
  if (VAR_20 >= VAR_9->blk_per_line)
   return 0;

  FUNC_13(&VAR_13->lock);
  if (FUNC_15(VAR_20, VAR_13->erase_bitmap)) {
   FUNC_14(&VAR_13->lock);
   goto retry;
  }
  FUNC_14(&VAR_13->lock);

  FUNC_12(VAR_20, VAR_13->erase_bitmap);
  FUNC_0(&VAR_13->left_eblks);
  *VAR_6 = VAR_1->luns[VAR_20].bppa;
  VAR_6->a.blk = VAR_13->id;
 }

 return 0;
}
