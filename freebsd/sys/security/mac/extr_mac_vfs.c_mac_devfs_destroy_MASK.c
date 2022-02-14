
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_dirent {int * de_label; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct devfs_dirent *VAR_0)
{

 if (VAR_0->de_label != ((void*)0)) {
  FUNC_0(VAR_0->de_label);
  VAR_0->de_label = ((void*)0);
 }
}
