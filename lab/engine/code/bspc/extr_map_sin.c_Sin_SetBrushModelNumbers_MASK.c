
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t modelnum; } ;
typedef TYPE_1__ entity_t ;
struct TYPE_7__ {int headnode; } ;
struct TYPE_6__ {int* children; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,size_t) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_4(entity_t *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;


 FUNC_0();

 VAR_3 = VAR_0[VAR_2->modelnum].headnode;
 VAR_4 = 0;

 do
 {

  if (VAR_3 < 0)
  {

   VAR_5 = (-VAR_3) - 1;

   FUNC_3(VAR_5, VAR_2->modelnum);

   for (VAR_4 = FUNC_1(); VAR_4 >= 0; VAR_3 = VAR_4, VAR_4 = FUNC_1())
   {

    if (VAR_1[VAR_4].children[0] == VAR_3) break;
   }

   if (VAR_4 >= 0)
   {

    FUNC_2(VAR_4);

    VAR_3 = VAR_1[VAR_4].children[1];
   }
  }
  else
  {

   FUNC_2(VAR_3);

   VAR_3 = VAR_1[VAR_3].children[0];
  }
 } while(VAR_4 >= 0);
}
