
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; int checksumFeed; scalar_t__ demorecording; } ;
struct TYPE_5__ {void* cgameStarted; void* soundRegistered; void* uiStarted; void* rendererStarted; } ;
struct TYPE_4__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,char*) ;
 int VAR_2 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,void*) ;
 int VAR_3 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

void FUNC_17( void ) {


 if( FUNC_10( ) ) {
  FUNC_0( );
 }

 if(VAR_4.demorecording)
  FUNC_9();


 FUNC_16();

 if(!FUNC_13(VAR_4.checksumFeed, VAR_8))
 {

  if(VAR_6->integer)
  {

   FUNC_15();
  }
  else
  {

   FUNC_14();
  }


  FUNC_7();

  FUNC_5();

  FUNC_6();

  FUNC_3();

  FUNC_12( VAR_3 | VAR_2 );


  VAR_5.rendererStarted = VAR_7;
  VAR_5.uiStarted = VAR_7;
  VAR_5.cgameStarted = VAR_7;
  VAR_5.soundRegistered = VAR_7;


  FUNC_11("cl_paused", "0");


  FUNC_2();


  FUNC_8(VAR_7);


  if(VAR_4.state > VAR_1 && VAR_4.state != VAR_0)
  {
   VAR_5.cgameStarted = VAR_8;
   FUNC_1();

   FUNC_4();
  }
 }
}
