
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_13__ {int type; int size; int * handle; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(vm_object_t VAR_3, vm_object_t VAR_4,
    vm_pindex_t VAR_5, int VAR_6)
{

 FUNC_2(VAR_3);
 FUNC_2(VAR_4);





 if (VAR_6 && VAR_3->handle != ((void*)0)) {
  FUNC_9(VAR_3, 1);
  FUNC_4(VAR_3);
  FUNC_9(VAR_4, 1);
  FUNC_4(VAR_4);
  FUNC_7(&VAR_2);
  FUNC_1(FUNC_0(VAR_3->handle), VAR_3,
      VAR_1);
  FUNC_8(&VAR_2);
  FUNC_3(VAR_4);
  FUNC_10(VAR_4);
  FUNC_3(VAR_3);
  FUNC_10(VAR_3);
 }




 FUNC_6(VAR_3, VAR_4, VAR_5, VAR_4->size);







 if (VAR_6) {
  FUNC_5(VAR_3);






  VAR_3->type = VAR_0;
 }
}
