
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int send_buf ;
struct TYPE_11__ {int unsentLength; size_t sock; int incomingSequence; scalar_t__ outgoingSequence; int lastSentSize; int lastSentTime; int remoteAddress; int challenge; int compat; int unsentBuffer; int unsentFragments; scalar_t__ unsentFragmentStart; } ;
typedef TYPE_1__ netchan_t ;
struct TYPE_12__ {int cursize; int data; } ;
typedef TYPE_2__ msg_t ;
typedef int byte ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (char*,int ,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int const*,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (size_t,int ,int ,int ) ;
 size_t VAR_4 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 int * VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;

void FUNC_11( netchan_t *VAR_9, int VAR_10, const byte *VAR_11 ) {
 msg_t VAR_12;
 byte VAR_13[VAR_3];

 if ( VAR_10 > VAR_2 ) {
  FUNC_0( VAR_0, "Netchan_Transmit: length = %i", VAR_10 );
 }
 VAR_9->unsentFragmentStart = 0;


 if ( VAR_10 >= VAR_1 ) {
  VAR_9->unsentFragments = VAR_7;
  VAR_9->unsentLength = VAR_10;
  FUNC_1( VAR_9->unsentBuffer, VAR_11, VAR_10 );


  FUNC_9( VAR_9 );

  return;
 }


 FUNC_3 (&VAR_12, VAR_13, sizeof(VAR_13));

 FUNC_5( &VAR_12, VAR_9->outgoingSequence );


 if(VAR_9->sock == VAR_4)
  FUNC_6(&VAR_12, VAR_6->integer);




  FUNC_5(&VAR_12, FUNC_7(VAR_9->challenge, VAR_9->outgoingSequence));

 VAR_9->outgoingSequence++;

 FUNC_4( &VAR_12, VAR_11, VAR_10 );


 FUNC_8( VAR_9->sock, VAR_12.cursize, VAR_12.data, VAR_9->remoteAddress );


 VAR_9->lastSentTime = FUNC_10();
 VAR_9->lastSentSize = VAR_12.cursize;

 if ( VAR_8->integer ) {
  FUNC_2( "%s send %4i : s=%i ack=%i\n"
   , VAR_5[ VAR_9->sock ]
   , VAR_12.cursize
   , VAR_9->outgoingSequence - 1
   , VAR_9->incomingSequence );
 }
}
