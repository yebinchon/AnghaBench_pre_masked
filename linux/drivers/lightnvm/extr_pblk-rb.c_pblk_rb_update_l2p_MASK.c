
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {int nr_entries; int l2p_update; int w_lock; } ;


 int FUNC_0 (struct pblk_rb*,unsigned int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct pblk_rb*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pblk_rb *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_0->w_lock);


 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_0->l2p_update, VAR_0->nr_entries);
 if (VAR_4 > VAR_1)
  goto out;

 VAR_5 = VAR_1 - VAR_4;

 VAR_6 = FUNC_0(VAR_0, VAR_5);

out:
 return VAR_6;
}
