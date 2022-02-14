
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_walk_state {TYPE_1__* arguments; TYPE_1__* local_variables; } ;
struct TYPE_2__ {scalar_t__ object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct acpi_walk_state *VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_3);



 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->local_variables[VAR_6].object) {
   FUNC_0((VAR_0, "Deleting Local%u=%p\n",
       VAR_6,
       VAR_5->local_variables[VAR_6].
       object));



   FUNC_2(&VAR_5->
           local_variables[VAR_6]);
  }
 }



 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->arguments[VAR_6].object) {
   FUNC_0((VAR_0, "Deleting Arg%u=%p\n",
       VAR_6,
       VAR_5->arguments[VAR_6].object));



   FUNC_2(&VAR_5->arguments[VAR_6]);
  }
 }

 VAR_4;
}
