
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {int nr_entries; int sync; int mem; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int,int ) ;

unsigned int FUNC_2(struct pblk_rb *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0->mem);
 unsigned int VAR_2 = FUNC_0(VAR_0->sync);

 return FUNC_1(VAR_1, VAR_2, VAR_0->nr_entries);
}
