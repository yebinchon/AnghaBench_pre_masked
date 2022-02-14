
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; struct pblk_line* data_line; } ;
struct pblk_line {int left_msecs; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;


 int FUNC_0 (struct pblk*,char*,int) ;
 int FUNC_1 (struct pblk*,struct pblk_line*) ;
 int FUNC_2 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct pblk *VAR_0)
{
 struct pblk_line *VAR_1;
 struct pblk_line_mgmt *VAR_2 = &VAR_0->l_mg;
 int VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_2->free_lock);
 VAR_1 = VAR_2->data_line;
 VAR_3 = VAR_1->left_msecs;
 FUNC_4(&VAR_2->free_lock);

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0, "tear down padding failed (%d)\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_0, VAR_1);
 return VAR_4;
}
