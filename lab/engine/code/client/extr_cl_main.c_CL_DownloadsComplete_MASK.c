
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int checksumFeed; void* downloadRestart; void* cURLDisconnected; void* cURLUsed; } ;
struct TYPE_3__ {int cgameStarted; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;

void FUNC_10( void ) {
 if (VAR_1.downloadRestart) {
  VAR_1.downloadRestart = VAR_3;

  FUNC_9(VAR_1.checksumFeed);


  FUNC_0("donedl", VAR_3);



  return;
 }


 VAR_1.state = VAR_0;


 FUNC_7();



 if ( VAR_1.state != VAR_0 ) {
  return;
 }


 FUNC_8("r_uiFullScreen", "0");





 FUNC_1();


 VAR_2.cgameStarted = VAR_4;
 FUNC_2();


 FUNC_4();

 FUNC_5();
 FUNC_5();
 FUNC_5();
}
