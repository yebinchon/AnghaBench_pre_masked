
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int blk_bitmap; } ;
struct pblk {scalar_t__ max_write_pgs; struct pblk_line_meta lm; } ;
struct nvm_chk_meta {scalar_t__ wp; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 struct nvm_chk_meta* FUNC_2 (struct pblk*,struct pblk_line*,int) ;

__attribute__((used)) static int FUNC_3(struct pblk *VAR_0,
          struct pblk_line *VAR_1)
{
 struct pblk_line_meta *VAR_2 = &VAR_0->lm;
 int VAR_3 = VAR_2->blk_per_line;
 struct nvm_chk_meta *VAR_4;
 u64 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1->blk_bitmap, VAR_3);




 if (VAR_7 >= (VAR_3 - 1))
  return 0;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_7);
 VAR_5 = VAR_4->wp;
 if (VAR_5 > VAR_0->max_write_pgs)
  VAR_6 = VAR_5 - VAR_0->max_write_pgs;
 else
  VAR_6 = 0;

 VAR_7 = FUNC_1(VAR_1->blk_bitmap, VAR_3, VAR_7 + 1);
 while (VAR_7 < VAR_3) {
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_7);
  if (VAR_4->wp > VAR_5 || VAR_4->wp < VAR_6)
   return 1;

  VAR_7 = FUNC_1(VAR_1->blk_bitmap, VAR_3, VAR_7 + 1);
 }

 return 0;
}
