
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_topology {int core_id; int thread_id; int package_id; } ;


 void* FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct cpu_topology* VAR_3 ;
 int FUNC_1 (char*,unsigned int,int,int,int,unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

void FUNC_5(unsigned int VAR_4)
{
 struct cpu_topology *VAR_5 = &VAR_3[VAR_4];
 unsigned int VAR_6;


 if (VAR_5->core_id != -1)
  return;

 VAR_6 = FUNC_2();


 if ((VAR_6 & VAR_1) == VAR_2) {





  if (VAR_6 & VAR_0) {

   VAR_5->thread_id = FUNC_0(VAR_6, 0);
   VAR_5->core_id = FUNC_0(VAR_6, 1);
   VAR_5->package_id = FUNC_0(VAR_6, 2);
  } else {

   VAR_5->thread_id = -1;
   VAR_5->core_id = FUNC_0(VAR_6, 0);
   VAR_5->package_id = FUNC_0(VAR_6, 1);
  }
 } else {





  VAR_5->thread_id = -1;
  VAR_5->core_id = 0;
  VAR_5->package_id = -1;
 }

 FUNC_4(VAR_4);

 FUNC_3(VAR_4);

 FUNC_1("CPU%u: thread %d, cpu %d, socket %d, mpidr %x\n",
  VAR_4, VAR_3[VAR_4].thread_id,
  VAR_3[VAR_4].core_id,
  VAR_3[VAR_4].package_id, VAR_6);
}
