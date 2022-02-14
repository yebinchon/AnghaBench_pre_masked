
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pblk_line_mgmt {int free_lock; } ;
struct pblk_line {int left_msecs; } ;
struct pblk {scalar_t__ min_write_pgs; struct pblk_line_mgmt l_mg; } ;


 int FUNC_0 (struct pblk*,struct pblk_line*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pblk *VAR_0, struct pblk_line *VAR_1,
    u64 VAR_2)
{
 struct pblk_line_mgmt *VAR_3 = &VAR_0->l_mg;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += VAR_0->min_write_pgs)
  FUNC_0(VAR_0, VAR_1, VAR_0->min_write_pgs);

 FUNC_1(&VAR_3->free_lock);
 if (VAR_2 > VAR_1->left_msecs) {




  VAR_1->left_msecs = 0;
 } else {

  VAR_1->left_msecs -= VAR_2;
 }
 FUNC_2(&VAR_3->free_lock);
}
