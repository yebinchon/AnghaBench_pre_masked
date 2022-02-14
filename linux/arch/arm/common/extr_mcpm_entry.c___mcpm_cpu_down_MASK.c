
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* clusters; } ;
struct TYPE_5__ {TYPE_1__* cpus; } ;
struct TYPE_4__ {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0();
 VAR_1.clusters[VAR_3].cpus[VAR_2].cpu = VAR_0;
 FUNC_2(&VAR_1.clusters[VAR_3].cpus[VAR_2].cpu);
 FUNC_1();
}
