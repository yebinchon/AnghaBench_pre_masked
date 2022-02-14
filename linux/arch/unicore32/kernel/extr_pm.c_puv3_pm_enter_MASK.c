
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct TYPE_2__ {int save_count; int (* restore ) (scalar_t__*) ;int (* enter ) (scalar_t__) ;int (* save ) (scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 scalar_t__* VAR_2 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;

int FUNC_8(suspend_state_t VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5 = 0;
 int VAR_6;


 if (VAR_3 != VAR_0) {
  VAR_1->save(VAR_2);

  for (VAR_6 = 0; VAR_6 < VAR_1->save_count - 1; VAR_6++)
   VAR_4 += VAR_2[VAR_6];
 }


 VAR_1->enter(VAR_3);
 FUNC_0();






 if (VAR_3 != VAR_0) {

  for (VAR_6 = 0; VAR_6 < VAR_1->save_count - 1; VAR_6++)
   VAR_5 += VAR_2[VAR_6];


  if (VAR_5 != VAR_4) {
   while (1)
    VAR_1->enter(VAR_3);
  }
  VAR_1->restore(VAR_2);
 }

 FUNC_2("*** made it back from resume\n");

 return 0;
}
