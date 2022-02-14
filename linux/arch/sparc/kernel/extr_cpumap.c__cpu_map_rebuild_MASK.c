
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* nodes; } ;
struct TYPE_6__ {int num_cpus; } ;


 TYPE_2__* FUNC_0 () ;
 int * VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;

 if (VAR_1) {
  FUNC_2(VAR_1);
  VAR_1 = ((void*)0);
 }

 VAR_1 = FUNC_0();
 if (!VAR_1)
  return;





 for (VAR_2 = 0; VAR_2 < VAR_1->nodes[0].num_cpus; VAR_2++)
  VAR_0[VAR_2] = FUNC_1(VAR_1, 0);
}
