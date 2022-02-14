
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {size_t sock; int incomingSequence; int dropped; int fragmentSequence; int fragmentLength; scalar_t__ fragmentBuffer; int remoteAddress; int challenge; int compat; } ;
typedef TYPE_1__ netchan_t ;
struct TYPE_11__ {int cursize; int readcount; int maxsize; int bit; scalar_t__ data; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 size_t VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;

qboolean FUNC_8( netchan_t *VAR_8, msg_t *VAR_9 ) {
 int VAR_10;
 int VAR_11, VAR_12;
 qboolean VAR_13;





 FUNC_3( VAR_9 );
 VAR_10 = FUNC_4( VAR_9 );


 if ( VAR_10 & VAR_0 ) {
  VAR_10 &= ~VAR_0;
  VAR_13 = VAR_5;
 } else {
  VAR_13 = VAR_4;
 }


 if ( VAR_8->sock == VAR_2 ) {
  FUNC_5( VAR_9 );
 }




 {
  int VAR_14 = FUNC_4(VAR_9);


  if(FUNC_6(VAR_8->challenge, VAR_10) != VAR_14)
   return VAR_4;
 }


 if ( VAR_13 ) {
  VAR_11 = FUNC_5( VAR_9 );
  VAR_12 = FUNC_5( VAR_9 );
 } else {
  VAR_11 = 0;
  VAR_12 = 0;
 }

 if ( VAR_7->integer ) {
  if ( VAR_13 ) {
   FUNC_1( "%s recv %4i : s=%i fragment=%i,%i\n"
    , VAR_3[ VAR_8->sock ]
    , VAR_9->cursize
    , VAR_10
    , VAR_11, VAR_12 );
  } else {
   FUNC_1( "%s recv %4i : s=%i\n"
    , VAR_3[ VAR_8->sock ]
    , VAR_9->cursize
    , VAR_10 );
  }
 }




 if ( VAR_10 <= VAR_8->incomingSequence ) {
  if ( VAR_6->integer || VAR_7->integer ) {
   FUNC_1( "%s:Out of order packet %i at %i\n"
    , FUNC_7( VAR_8->remoteAddress )
    , VAR_10
    , VAR_8->incomingSequence );
  }
  return VAR_4;
 }




 VAR_8->dropped = VAR_10 - (VAR_8->incomingSequence+1);
 if ( VAR_8->dropped > 0 ) {
  if ( VAR_6->integer || VAR_7->integer ) {
   FUNC_1( "%s:Dropped %i packets at %i\n"
   , FUNC_7( VAR_8->remoteAddress )
   , VAR_8->dropped
   , VAR_10 );
  }
 }






 if ( VAR_13 ) {





  if ( VAR_10 != VAR_8->fragmentSequence ) {
   VAR_8->fragmentSequence = VAR_10;
   VAR_8->fragmentLength = 0;
  }


  if ( VAR_11 != VAR_8->fragmentLength ) {
   if ( VAR_6->integer || VAR_7->integer ) {
    FUNC_1( "%s:Dropped a message fragment\n"
    , FUNC_7( VAR_8->remoteAddress ));
   }


   return VAR_4;
  }


  if ( VAR_12 < 0 || VAR_9->readcount + VAR_12 > VAR_9->cursize ||
   VAR_8->fragmentLength + VAR_12 > sizeof( VAR_8->fragmentBuffer ) ) {
   if ( VAR_6->integer || VAR_7->integer ) {
    FUNC_1 ("%s:illegal fragment length\n"
    , FUNC_7 (VAR_8->remoteAddress ) );
   }
   return VAR_4;
  }

  FUNC_0( VAR_8->fragmentBuffer + VAR_8->fragmentLength,
   VAR_9->data + VAR_9->readcount, VAR_12 );

  VAR_8->fragmentLength += VAR_12;


  if ( VAR_12 == VAR_1 ) {
   return VAR_4;
  }

  if ( VAR_8->fragmentLength > VAR_9->maxsize ) {
   FUNC_1( "%s:fragmentLength %i > msg->maxsize\n"
    , FUNC_7 (VAR_8->remoteAddress ),
    VAR_8->fragmentLength );
   return VAR_4;
  }




  *(int *)VAR_9->data = FUNC_2( VAR_10 );

  FUNC_0( VAR_9->data + 4, VAR_8->fragmentBuffer, VAR_8->fragmentLength );
  VAR_9->cursize = VAR_8->fragmentLength + 4;
  VAR_8->fragmentLength = 0;
  VAR_9->readcount = 4;
  VAR_9->bit = 32;



  VAR_8->incomingSequence = VAR_10;

  return VAR_5;
 }




 VAR_8->incomingSequence = VAR_10;

 return VAR_5;
}
