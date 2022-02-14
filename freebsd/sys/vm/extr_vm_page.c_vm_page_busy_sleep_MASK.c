
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
struct TYPE_5__ {int object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,char const*,int,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(vm_page_t VAR_1, const char *VAR_2, bool VAR_3)
{
 vm_object_t VAR_4;

 VAR_4 = VAR_1->object;
 FUNC_0(VAR_4);
 FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3, 1);
}
