
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_md_mempools {int io_bs; int bs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dm_md_mempools*) ;

void FUNC_2(struct dm_md_mempools *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->bs);
 FUNC_0(&VAR_0->io_bs);

 FUNC_1(VAR_0);
}
