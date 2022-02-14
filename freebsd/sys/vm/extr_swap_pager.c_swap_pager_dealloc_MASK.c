
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_9__ {int flags; int type; int * handle; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_10(vm_object_t VAR_4)
{

 FUNC_3(VAR_4);
 FUNC_0((VAR_4->flags & VAR_1) != 0, ("dealloc of reachable obj"));





 if (VAR_4->handle != ((void*)0)) {
  FUNC_5(VAR_4);
  FUNC_7(&VAR_3);
  FUNC_2(FUNC_1(VAR_4->handle), VAR_4,
      VAR_2);
  FUNC_8(&VAR_3);
  FUNC_4(VAR_4);
 }

 FUNC_9(VAR_4, "swpdea");







 FUNC_6(VAR_4);
 VAR_4->handle = ((void*)0);
 VAR_4->type = VAR_0;
}
