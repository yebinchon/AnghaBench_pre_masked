
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_err_gc {int lba_list; } ;
struct pblk_line_mgmt {int dummy; } ;
struct pblk_line {struct pblk_w_err_gc* chks; struct pblk_w_err_gc* erase_bitmap; struct pblk_w_err_gc* blk_bitmap; struct pblk_w_err_gc* w_err_gc; } ;


 int FUNC_0 (struct pblk_w_err_gc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pblk_line_mgmt *VAR_0,
    struct pblk_line *VAR_1)
{
 struct pblk_w_err_gc *VAR_2 = VAR_1->w_err_gc;

 FUNC_0(VAR_1->blk_bitmap);
 FUNC_0(VAR_1->erase_bitmap);
 FUNC_0(VAR_1->chks);

 FUNC_1(VAR_2->lba_list);
 FUNC_0(VAR_2);
}
