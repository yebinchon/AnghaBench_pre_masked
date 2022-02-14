
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {int w_lock; int nr_entries; int l2p_update; int sync; } ;


 int FUNC_0 (struct pblk_rb*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int ,int ) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct pblk_rb *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;

 FUNC_3(&VAR_0->w_lock);


 VAR_1 = FUNC_2(&VAR_0->sync);

 VAR_2 = FUNC_1(VAR_1, VAR_0->l2p_update, VAR_0->nr_entries);
 FUNC_0(VAR_0, VAR_2);

 FUNC_4(&VAR_0->w_lock);
}
