
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_topology {int thread_sibling; int core_sibling; int llc_sibling; } ;


 struct cpu_topology* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{
 struct cpu_topology *VAR_2 = &VAR_0[VAR_1];

 FUNC_0(&VAR_2->llc_sibling);
 FUNC_1(VAR_1, &VAR_2->llc_sibling);

 FUNC_0(&VAR_2->core_sibling);
 FUNC_1(VAR_1, &VAR_2->core_sibling);
 FUNC_0(&VAR_2->thread_sibling);
 FUNC_1(VAR_1, &VAR_2->thread_sibling);
}
