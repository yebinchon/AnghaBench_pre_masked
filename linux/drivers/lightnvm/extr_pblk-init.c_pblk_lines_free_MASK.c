
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int nr_lines; } ;
struct pblk_line {int dummy; } ;
struct pblk {struct pblk_line* lines; struct pblk_line* luns; struct pblk_line_mgmt l_mg; } ;


 int FUNC_0 (struct pblk_line*) ;
 int FUNC_1 (struct pblk_line*) ;
 int FUNC_2 (struct pblk_line_mgmt*,struct pblk_line*) ;
 int FUNC_3 (struct pblk*) ;

__attribute__((used)) static void FUNC_4(struct pblk *VAR_0)
{
 struct pblk_line_mgmt *VAR_1 = &VAR_0->l_mg;
 struct pblk_line *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_lines; VAR_3++) {
  VAR_2 = &VAR_0->lines[VAR_3];

  FUNC_1(VAR_2);
  FUNC_2(VAR_1, VAR_2);
 }

 FUNC_3(VAR_0);

 FUNC_0(VAR_0->luns);
 FUNC_0(VAR_0->lines);
}
