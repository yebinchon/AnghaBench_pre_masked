
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpu_topology {int package_id; int thread_id; int core_id; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cpu_topology* VAR_2 ;
 int FUNC_1 (char*,unsigned int,int,int,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

void FUNC_4(unsigned int VAR_3)
{
 struct cpu_topology *VAR_4 = &VAR_2[VAR_3];
 u64 VAR_5;

 if (VAR_4->package_id != -1)
  goto topology_populated;

 VAR_5 = FUNC_2();


 if (VAR_5 & VAR_1)
  return;


 if (VAR_5 & VAR_0) {

  VAR_4->thread_id = FUNC_0(VAR_5, 0);
  VAR_4->core_id = FUNC_0(VAR_5, 1);
  VAR_4->package_id = FUNC_0(VAR_5, 2) |
      FUNC_0(VAR_5, 3) << 8;
 } else {

  VAR_4->thread_id = -1;
  VAR_4->core_id = FUNC_0(VAR_5, 0);
  VAR_4->package_id = FUNC_0(VAR_5, 1) |
      FUNC_0(VAR_5, 2) << 8 |
      FUNC_0(VAR_5, 3) << 16;
 }

 FUNC_1("CPU%u: cluster %d core %d thread %d mpidr %#016llx\n",
   VAR_3, VAR_4->package_id, VAR_4->core_id,
   VAR_4->thread_id, VAR_5);

topology_populated:
 FUNC_3(VAR_3);
}
