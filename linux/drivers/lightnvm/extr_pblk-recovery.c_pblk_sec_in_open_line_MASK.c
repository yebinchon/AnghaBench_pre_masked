
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pblk_line_meta {int blk_per_line; scalar_t__ smeta_sec; } ;
struct pblk_line {int id; struct nvm_chk_meta* chks; int blk_bitmap; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct nvm_chk_meta {int state; scalar_t__ wp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct pblk*,char*,int ) ;
 int FUNC_2 (struct pblk*,struct pblk_line*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct pblk_line_meta *VAR_3 = &VAR_1->lm;
 int VAR_4 = FUNC_0(VAR_2->blk_bitmap, VAR_3->blk_per_line);
 u64 VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->blk_per_line; VAR_7++) {
  struct nvm_chk_meta *VAR_8 = &VAR_2->chks[VAR_7];

  if (VAR_8->state & VAR_0)
   continue;

  VAR_5 += VAR_8->wp;
  VAR_6++;
 }

 if (VAR_3->blk_per_line - VAR_4 != VAR_6)
  FUNC_1(VAR_1, "recovery line %d is bad\n", VAR_2->id);

 FUNC_2(VAR_1, VAR_2, VAR_5 - VAR_3->smeta_sec);

 return VAR_5;
}
