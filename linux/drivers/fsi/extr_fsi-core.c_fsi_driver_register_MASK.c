
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_driver {int drv; int id_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct fsi_driver *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;
 if (!VAR_1->id_table)
  return -VAR_0;

 return FUNC_0(&VAR_1->drv);
}
