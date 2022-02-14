
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {unsigned int min_write_pgs_data; int rwb; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct pblk*) ;

void FUNC_2(struct pblk *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(&VAR_0->rwb);

 if (VAR_1 >= VAR_0->min_write_pgs_data)
  FUNC_1(VAR_0);
}
