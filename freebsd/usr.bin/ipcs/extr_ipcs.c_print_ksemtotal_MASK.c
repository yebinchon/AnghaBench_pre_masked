
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seminfo {int semmni; int semmns; int semmnu; int semmsl; int semopm; int semume; int semusz; int semvmx; int semaem; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct seminfo VAR_0)
{

 FUNC_0("seminfo:\n");
 FUNC_0("\tsemmni: %12d\t(# of semaphore identifiers)\n",
     VAR_0.semmni);
 FUNC_0("\tsemmns: %12d\t(# of semaphores in system)\n",
     VAR_0.semmns);
 FUNC_0("\tsemmnu: %12d\t(# of undo structures in system)\n",
     VAR_0.semmnu);
 FUNC_0("\tsemmsl: %12d\t(max # of semaphores per id)\n",
     VAR_0.semmsl);
 FUNC_0("\tsemopm: %12d\t(max # of operations per semop call)\n",
     VAR_0.semopm);
 FUNC_0("\tsemume: %12d\t(max # of undo entries per process)\n",
     VAR_0.semume);
 FUNC_0("\tsemusz: %12d\t(size in bytes of undo structure)\n",
     VAR_0.semusz);
 FUNC_0("\tsemvmx: %12d\t(semaphore maximum value)\n",
     VAR_0.semvmx);
 FUNC_0("\tsemaem: %12d\t(adjust on exit max value)\n\n",
     VAR_0.semaem);
}
