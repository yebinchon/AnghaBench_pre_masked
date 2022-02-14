
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmid_kernel {int * label; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct shmid_kernel *VAR_0)
{

 if (VAR_0->label != ((void*)0)) {
  FUNC_0(VAR_0->label);
  VAR_0->label = ((void*)0);
 }
}
