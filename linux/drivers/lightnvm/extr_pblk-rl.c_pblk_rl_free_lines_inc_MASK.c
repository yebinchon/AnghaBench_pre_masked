
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int free_user_blocks; int free_blocks; } ;
struct pblk_line {int blk_in_line; } ;


 int FUNC_0 (struct pblk_rl*,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pblk_rl *VAR_0, struct pblk_line *VAR_1)
{
 int VAR_2 = FUNC_3(&VAR_1->blk_in_line);
 int VAR_3;

 FUNC_1(VAR_2, &VAR_0->free_blocks);
 VAR_3 = FUNC_2(VAR_2, &VAR_0->free_user_blocks);

 FUNC_0(VAR_0, VAR_3);
}
