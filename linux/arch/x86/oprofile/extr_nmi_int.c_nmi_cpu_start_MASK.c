
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_msrs {int controls; } ;
struct TYPE_2__ {int (* start ) (struct op_msrs const*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct op_msrs const*) ;
 struct op_msrs* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct op_msrs const *VAR_3 = FUNC_2(&VAR_0);
 if (!VAR_3->controls)
  FUNC_0(1);
 else
  VAR_1->start(VAR_3);
}
