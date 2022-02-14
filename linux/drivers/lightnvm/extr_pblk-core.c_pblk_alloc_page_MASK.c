
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pblk_line {scalar_t__ left_msecs; int lock; } ;
struct pblk {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u64 FUNC_4(struct pblk *VAR_0, struct pblk_line *VAR_1, int VAR_2)
{
 u64 VAR_3;




 FUNC_2(&VAR_1->lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_1->left_msecs -= VAR_2;
 FUNC_0(VAR_1->left_msecs < 0, "pblk: page allocation out of bounds\n");
 FUNC_3(&VAR_1->lock);

 return VAR_3;
}
