
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; int * pools; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void)
{
 int VAR_3;

 FUNC_1("Finalizing pool allocator\n");
 FUNC_3(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  FUNC_2(&VAR_2->pools[VAR_3], VAR_0, 1);

 FUNC_0(&VAR_2->kobj);
 VAR_2 = ((void*)0);
}
