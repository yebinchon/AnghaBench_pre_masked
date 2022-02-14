
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shminfo {int shmall; int shmseg; int shmmni; int shmmin; int shmmax; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct shminfo VAR_0)
{

 FUNC_0("shminfo:\n");
 FUNC_0("\tshmmax: %12lu\t(max shared memory segment size)\n",
     VAR_0.shmmax);
 FUNC_0("\tshmmin: %12lu\t(min shared memory segment size)\n",
     VAR_0.shmmin);
 FUNC_0("\tshmmni: %12lu\t(max number of shared memory identifiers)\n",
     VAR_0.shmmni);
 FUNC_0("\tshmseg: %12lu\t(max shared memory segments per process)\n",
     VAR_0.shmseg);
 FUNC_0("\tshmall: %12lu\t(max amount of shared memory in pages)\n\n",
     VAR_0.shmall);
}
