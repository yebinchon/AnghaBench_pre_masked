
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {TYPE_1__* chks; } ;
struct pblk {struct pblk_line_meta lm; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct pblk_line_meta *VAR_3 = &VAR_1->lm;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->blk_per_line; VAR_4++)
  if (VAR_2->chks[VAR_4].state & VAR_0)
   return 1;

 return 0;
}
