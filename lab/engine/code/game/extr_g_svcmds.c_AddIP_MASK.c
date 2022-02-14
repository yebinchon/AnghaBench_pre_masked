
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compare; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3( char *VAR_3 )
{
 int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++)
  if (VAR_1[VAR_4].compare == 0xffffffff)
   break;
 if (VAR_4 == VAR_2)
 {
  if (VAR_2 == VAR_0)
  {
   FUNC_0 ("IP filter list is full\n");
   return;
  }
  VAR_2++;
 }

 if (!FUNC_1 (VAR_3, &VAR_1[VAR_4]))
  VAR_1[VAR_4].compare = 0xffffffffu;

 FUNC_2();
}
