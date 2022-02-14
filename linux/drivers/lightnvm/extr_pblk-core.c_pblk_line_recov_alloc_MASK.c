
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; int free_list; struct pblk_line* data_line; } ;
struct pblk_line {int list; } ;
struct pblk {int rl; struct pblk_line_mgmt l_mg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pblk*,struct pblk_line*) ;
 int FUNC_3 (struct pblk*,struct pblk_line*,int ) ;
 int FUNC_4 (struct pblk*,struct pblk_line*) ;
 int FUNC_5 (int *,struct pblk_line*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct pblk_line_mgmt *VAR_3 = &VAR_1->l_mg;
 int VAR_4;

 FUNC_6(&VAR_3->free_lock);
 VAR_3->data_line = VAR_2;
 FUNC_1(&VAR_2->list);

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_2->list, &VAR_3->free_list);
  FUNC_7(&VAR_3->free_lock);
  return VAR_4;
 }
 FUNC_7(&VAR_3->free_lock);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  goto fail;

 if (!FUNC_3(VAR_1, VAR_2, 0)) {
  VAR_4 = -VAR_0;
  goto fail;
 }

 FUNC_5(&VAR_1->rl, VAR_2, 1);
 return 0;

fail:
 FUNC_6(&VAR_3->free_lock);
 FUNC_0(&VAR_2->list, &VAR_3->free_list);
 FUNC_7(&VAR_3->free_lock);

 return VAR_4;
}
