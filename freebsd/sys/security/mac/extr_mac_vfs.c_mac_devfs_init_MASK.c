
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_dirent {int * de_label; } ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int VAR_1 ;

void
FUNC_1(struct devfs_dirent *VAR_2)
{

 if (VAR_1 & VAR_0)
  VAR_2->de_label = FUNC_0();
 else
  VAR_2->de_label = ((void*)0);
}
