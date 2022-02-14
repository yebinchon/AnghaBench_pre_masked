
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* spDemoRecording; void* demorecording; scalar_t__ demofile; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,int,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 void* VAR_1 ;

void FUNC_3( void ) {
 int VAR_2;

 if ( !VAR_0.demorecording ) {
  FUNC_0 ("Not recording a demo.\n");
  return;
 }


 VAR_2 = -1;
 FUNC_2 (&VAR_2, 4, VAR_0.demofile);
 FUNC_2 (&VAR_2, 4, VAR_0.demofile);
 FUNC_1 (VAR_0.demofile);
 VAR_0.demofile = 0;
 VAR_0.demorecording = VAR_1;
 VAR_0.spDemoRecording = VAR_1;
 FUNC_0 ("Stopped demo.\n");
}
