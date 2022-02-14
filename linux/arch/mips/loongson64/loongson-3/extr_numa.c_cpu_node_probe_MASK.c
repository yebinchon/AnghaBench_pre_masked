
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_nodes; int nr_cpus; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_4;

 FUNC_2(VAR_3);
 FUNC_2(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1.nr_nodes; VAR_4++) {
  FUNC_1(FUNC_3(), VAR_0);
  FUNC_0(FUNC_3());
 }

 FUNC_4("NUMA: Discovered %d cpus on %d nodes\n",
  VAR_1.nr_cpus, FUNC_3());
}
