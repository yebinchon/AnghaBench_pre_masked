
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_6__ {int type; int * handle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(vm_object_t VAR_4)
{

 if (VAR_4->handle != ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_3(&VAR_2);
  FUNC_0(&VAR_3, VAR_4, VAR_1);
  FUNC_4(&VAR_2);
  FUNC_1(VAR_4);
 }
 VAR_4->handle = ((void*)0);
 VAR_4->type = VAR_0;
}
