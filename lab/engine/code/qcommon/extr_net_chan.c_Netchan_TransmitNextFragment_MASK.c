
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int send_buf ;
struct TYPE_10__ {int outgoingSequence; size_t sock; scalar_t__ unsentFragmentStart; scalar_t__ unsentLength; int unsentBuffer; int unsentFragments; int lastSentSize; int lastSentTime; int remoteAddress; int challenge; int compat; } ;
typedef TYPE_1__ netchan_t ;
struct TYPE_11__ {int cursize; int data; } ;
typedef TYPE_2__ msg_t ;
typedef int byte ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,int ,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (size_t,int ,int ,int ) ;
 size_t VAR_3 ;
 int FUNC_7 () ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;

void FUNC_8( netchan_t *VAR_8 ) {
 msg_t VAR_9;
 byte VAR_10[VAR_2];
 int VAR_11;
 int VAR_12;


 FUNC_1 (&VAR_9, VAR_10, sizeof(VAR_10));

 VAR_12 = VAR_8->outgoingSequence | VAR_0;
 FUNC_3(&VAR_9, VAR_12);


 if ( VAR_8->sock == VAR_3 ) {
  FUNC_4( &VAR_9, VAR_6->integer );
 }




  FUNC_3(&VAR_9, FUNC_5(VAR_8->challenge, VAR_8->outgoingSequence));


 VAR_11 = VAR_1;
 if ( VAR_8->unsentFragmentStart + VAR_11 > VAR_8->unsentLength ) {
  VAR_11 = VAR_8->unsentLength - VAR_8->unsentFragmentStart;
 }

 FUNC_4( &VAR_9, VAR_8->unsentFragmentStart );
 FUNC_4( &VAR_9, VAR_11 );
 FUNC_2( &VAR_9, VAR_8->unsentBuffer + VAR_8->unsentFragmentStart, VAR_11 );


 FUNC_6(VAR_8->sock, VAR_9.cursize, VAR_9.data, VAR_8->remoteAddress);


 VAR_8->lastSentTime = FUNC_7();
 VAR_8->lastSentSize = VAR_9.cursize;

 if ( VAR_7->integer ) {
  FUNC_0 ("%s send %4i : s=%i fragment=%i,%i\n"
   , VAR_4[ VAR_8->sock ]
   , VAR_9.cursize
   , VAR_8->outgoingSequence
   , VAR_8->unsentFragmentStart, VAR_11);
 }

 VAR_8->unsentFragmentStart += VAR_11;





 if ( VAR_8->unsentFragmentStart == VAR_8->unsentLength && VAR_11 != VAR_1 ) {
  VAR_8->outgoingSequence++;
  VAR_8->unsentFragments = VAR_5;
 }
}
