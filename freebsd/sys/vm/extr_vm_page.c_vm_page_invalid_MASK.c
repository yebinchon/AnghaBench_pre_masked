
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_7__ {scalar_t__ valid; int object; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(vm_page_t VAR_1)
{

 FUNC_3(VAR_1);
 FUNC_1(VAR_1->object);
 FUNC_0(!FUNC_2(VAR_1));

 if (FUNC_5(VAR_1))
  VAR_1->valid = 0;
 else
  FUNC_4(VAR_1, &VAR_1->valid, VAR_0);
}
