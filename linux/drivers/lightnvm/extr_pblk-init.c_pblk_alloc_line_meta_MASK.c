
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_err_gc {int dummy; } ;
struct pblk_line_meta {int blk_bitmap_len; int blk_per_line; } ;
struct pblk_line {void* blk_bitmap; void* erase_bitmap; void* chks; void* w_err_gc; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct nvm_chk_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pblk *VAR_2, struct pblk_line *VAR_3)
{
 struct pblk_line_meta *VAR_4 = &VAR_2->lm;

 VAR_3->blk_bitmap = FUNC_2(VAR_4->blk_bitmap_len, VAR_1);
 if (!VAR_3->blk_bitmap)
  return -VAR_0;

 VAR_3->erase_bitmap = FUNC_2(VAR_4->blk_bitmap_len, VAR_1);
 if (!VAR_3->erase_bitmap)
  goto free_blk_bitmap;


 VAR_3->chks = FUNC_1(VAR_4->blk_per_line,
       sizeof(struct nvm_chk_meta), VAR_1);
 if (!VAR_3->chks)
  goto free_erase_bitmap;

 VAR_3->w_err_gc = FUNC_2(sizeof(struct pblk_w_err_gc), VAR_1);
 if (!VAR_3->w_err_gc)
  goto free_chks;

 return 0;

free_chks:
 FUNC_0(VAR_3->chks);
free_erase_bitmap:
 FUNC_0(VAR_3->erase_bitmap);
free_blk_bitmap:
 FUNC_0(VAR_3->blk_bitmap);
 return -VAR_0;
}
