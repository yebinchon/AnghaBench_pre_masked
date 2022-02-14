
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_ctx {int lba; int ppa; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pblk_w_ctx *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->flags);
 FUNC_1(!(VAR_4 & VAR_1),
   "pblk: overwriting unsubmitted data\n");


 FUNC_3(&VAR_3->flags, VAR_2);
 FUNC_2(&VAR_3->ppa);
 VAR_3->lba = VAR_0;
}
