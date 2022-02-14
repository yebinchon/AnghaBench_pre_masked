
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ cursize; scalar_t__ readcount; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {scalar_t__ reliableAcknowledge; scalar_t__ reliableSequence; int voipEnabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 char** VAR_6 ;



void FUNC_11( msg_t *VAR_7 ) {
 int VAR_8;

 if ( VAR_2->integer == 1 ) {
  FUNC_6 ("%i ",VAR_7->cursize);
 } else if ( VAR_2->integer >= 2 ) {
  FUNC_6 ("------------------\n");
 }

 FUNC_7(VAR_7);


 VAR_3.reliableAcknowledge = FUNC_9( VAR_7 );

 if ( VAR_3.reliableAcknowledge < VAR_3.reliableSequence - VAR_1 ) {
  VAR_3.reliableAcknowledge = VAR_3.reliableSequence;
 }




 while ( 1 ) {
  if ( VAR_7->readcount > VAR_7->cursize ) {
   FUNC_5 (VAR_0,"CL_ParseServerMessage: read past end of server message");
   break;
  }

  VAR_8 = FUNC_8( VAR_7 );

  if (VAR_8 == VAR_5) {
   FUNC_10( VAR_7, "END OF MESSAGE" );
   break;
  }

  if ( VAR_2->integer >= 2 ) {
   if ( (VAR_8 < 0) || (!VAR_6[VAR_8]) ) {
    FUNC_6( "%3i:BAD CMD %i\n", VAR_7->readcount-1, VAR_8 );
   } else {
    FUNC_10( VAR_7, VAR_6[VAR_8] );
   }
  }


  switch ( VAR_8 ) {
  default:
   FUNC_5 (VAR_0,"CL_ParseServerMessage: Illegible server message");
   break;
  case 132:
   break;
  case 131:
   FUNC_0( VAR_7 );
   break;
  case 133:
   FUNC_2( VAR_7 );
   break;
  case 130:
   FUNC_3( VAR_7 );
   break;
  case 134:
   FUNC_1( VAR_7 );
   break;
  case 128:



   break;
  case 129:



   break;
  }
 }
}
