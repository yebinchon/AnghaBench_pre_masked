
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pblk_line_mgmt {int gc_lock; } ;
struct pblk_line {scalar_t__ state; int list; int lock; int vsc; int invalid_bitmap; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;
struct list_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct list_head* FUNC_4 (struct pblk*,struct pblk_line*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;

void FUNC_8(struct pblk *VAR_3, struct pblk_line *VAR_4,
      u64 VAR_5)
{
 struct pblk_line_mgmt *VAR_6 = &VAR_3->l_mg;
 struct list_head *VAR_7 = ((void*)0);





 FUNC_5(&VAR_4->lock);
 FUNC_0(VAR_4->state == VAR_1);

 if (FUNC_7(VAR_5, VAR_4->invalid_bitmap)) {
  FUNC_1(1, "pblk: double invalidate\n");
  FUNC_6(&VAR_4->lock);
  return;
 }
 FUNC_2(VAR_4->vsc, -1);

 if (VAR_4->state == VAR_0)
  VAR_7 = FUNC_4(VAR_3, VAR_4);
 FUNC_6(&VAR_4->lock);

 if (VAR_7) {
  FUNC_5(&VAR_6->gc_lock);
  FUNC_5(&VAR_4->lock);

  if (VAR_4->state == VAR_2) {
   FUNC_6(&VAR_4->lock);
   FUNC_6(&VAR_6->gc_lock);
   return;
  }
  FUNC_6(&VAR_4->lock);

  FUNC_3(&VAR_4->list, VAR_7);
  FUNC_6(&VAR_6->gc_lock);
 }
}
