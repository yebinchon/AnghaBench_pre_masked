
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
typedef int arg ;
struct TYPE_6__ {char* demoName; scalar_t__ state; char* servername; void* firstDemoFrameSkipped; void* compat; void* demoplaying; int demofile; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int integer; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int *) ;
 int FUNC_4 () ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*,int *,void*) ;
 int VAR_4 ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 char* FUNC_15 (char*,char) ;

void FUNC_16( void ) {
 char VAR_11[VAR_4];
 char VAR_12[VAR_4];
 char *VAR_13;
 int VAR_14, VAR_15;
 char VAR_16[VAR_4];

 if (FUNC_4() != 2) {
  FUNC_7 ("demo <demoname>\n");
  return;
 }



 FUNC_10( "sv_killserver", "2" );


 FUNC_13( VAR_12, FUNC_5(1), sizeof( VAR_12 ) );

 FUNC_1( VAR_10 );


 VAR_13 = FUNC_15(VAR_12, '.');

 if(VAR_13 && !FUNC_12(VAR_13 + 1, VAR_2, FUNC_0(VAR_2) - 1))
 {
  VAR_14 = FUNC_14(VAR_13 + FUNC_0(VAR_2));

  for(VAR_15 = 0; VAR_8[VAR_15]; VAR_15++)
  {
   if(VAR_8[VAR_15] == VAR_14)
    break;
  }

  if(VAR_8[VAR_15] || VAR_14 == VAR_7->integer



    )
  {
   FUNC_8(VAR_11, sizeof(VAR_11), "demos/%s", VAR_12);
   FUNC_11(VAR_11, &VAR_5.demofile, VAR_10);
  }
  else
  {
   int VAR_17;

   FUNC_7("Protocol %d not supported for demos\n", VAR_14);
   VAR_17 = VAR_13 - VAR_12;

   if(VAR_17 >= FUNC_0(VAR_16))
    VAR_17 = FUNC_0(VAR_16) - 1;

   FUNC_13(VAR_16, VAR_12, VAR_17 + 1);
   VAR_16[VAR_17] = '\0';
   VAR_14 = FUNC_3(VAR_16, VAR_11, &VAR_5.demofile);
  }
 }
 else
  VAR_14 = FUNC_3(VAR_12, VAR_11, &VAR_5.demofile);

 if (!VAR_5.demofile) {
  FUNC_6( VAR_3, "couldn't open %s", VAR_11);
  return;
 }
 FUNC_13( VAR_5.demoName, VAR_12, sizeof( VAR_5.demoName ) );

 FUNC_9();

 VAR_5.state = VAR_0;
 VAR_5.demoplaying = VAR_10;
 FUNC_13( VAR_5.servername, VAR_12, sizeof( VAR_5.servername ) );
 while ( VAR_5.state >= VAR_0 && VAR_5.state < VAR_1 ) {
  FUNC_2();
 }


 VAR_5.firstDemoFrameSkipped = VAR_9;
}
