
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {void* integer; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

void FUNC_9(int VAR_7, qboolean VAR_8)
{

 if(!VAR_3 && VAR_1)
 {
  VAR_3 = VAR_6;
  VAR_2 = VAR_0->integer;


  if(VAR_4->integer)
   FUNC_8("Game directory changed");

  if(VAR_2)
  {
   if(VAR_8)
    FUNC_0(VAR_5);

   FUNC_2("Game directory changed", VAR_8, VAR_5);
  }

  FUNC_6(VAR_7);


  FUNC_5(VAR_6);
  FUNC_4();

  if(VAR_8)
  {



   FUNC_7();
  }

  if(VAR_2)
  {
   FUNC_1();
   FUNC_3(VAR_5);
  }

  VAR_3 = VAR_5;
  VAR_2 = VAR_5;
 }
}
