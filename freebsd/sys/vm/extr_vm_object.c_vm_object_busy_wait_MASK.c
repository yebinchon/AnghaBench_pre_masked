
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_4__ {scalar_t__ busy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,char const*,int ) ;

void
FUNC_2(vm_object_t VAR_1, const char *VAR_2)
{

 FUNC_0(VAR_1);

 if (VAR_1->busy)
  FUNC_1(&VAR_1->busy, VAR_2, VAR_0);
}
