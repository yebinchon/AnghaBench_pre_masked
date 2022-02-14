
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * nIrq; } ;
typedef TYPE_1__ DSL_DEV_Device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2 (int VAR_4)
{
 DSL_DEV_Device_t *VAR_5;
 VAR_5 = &VAR_3[VAR_4];

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_0 (VAR_5->nIrq[VAR_1]);
 FUNC_0 (VAR_5->nIrq[VAR_2]);

 FUNC_1(VAR_5->nIrq[VAR_1], VAR_5);
 FUNC_1(VAR_5->nIrq[VAR_2], VAR_5);

 return 0;
}
