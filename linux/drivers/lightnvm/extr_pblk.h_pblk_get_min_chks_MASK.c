
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_meta {unsigned int blk_per_line; } ;
struct pblk {int op; struct pblk_line_meta lm; } ;


 unsigned int FUNC_0 (int,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct pblk *VAR_0)
{
 struct pblk_line_meta *VAR_1 = &VAR_0->lm;




 return FUNC_0(100, VAR_0->op) * VAR_1->blk_per_line;
}
