
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef double* vec4_t ;
struct TYPE_24__ {double value; } ;
struct TYPE_23__ {double value; } ;
struct TYPE_22__ {double value; } ;
struct TYPE_21__ {double value; } ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_17__ {int teamStatusBar; } ;
struct TYPE_18__ {int teamLastChatPos; int teamChatPos; scalar_t__* teamChatMsgTimes; int * teamChatMsgs; TYPE_2__ media; TYPE_1__* clientinfo; } ;
struct TYPE_16__ {scalar_t__ team; } ;
struct TYPE_15__ {scalar_t__ time; size_t clientNum; } ;
struct TYPE_14__ {double value; } ;
struct TYPE_13__ {double value; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,double*,int ,int ,scalar_t__,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_12__ VAR_7 ;
 TYPE_11__ VAR_8 ;
 TYPE_10__ VAR_9 ;
 TYPE_9__ VAR_10 ;
 TYPE_8__ VAR_11 ;
 TYPE_7__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 TYPE_5__ VAR_14 ;
 TYPE_4__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (double*) ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_18;
 int VAR_19;
 vec4_t VAR_20;
 int VAR_21;




 if (VAR_14.integer < VAR_2)
  VAR_21 = VAR_14.integer;
 else
  VAR_21 = VAR_2;
 if (VAR_21 <= 0)
  return;

 if (VAR_16.teamLastChatPos != VAR_16.teamChatPos) {
  if (VAR_7.time - VAR_16.teamChatMsgTimes[VAR_16.teamLastChatPos % VAR_21] > VAR_15.integer) {
   VAR_16.teamLastChatPos++;
  }

  VAR_18 = (VAR_16.teamChatPos - VAR_16.teamLastChatPos) * VAR_5;

  if ( VAR_16.clientinfo[VAR_7.clientNum].team == VAR_4 ) {
   VAR_20[0] = VAR_13.value / 255.0;
   VAR_20[1] = VAR_12.value / 255.0;
   VAR_20[2] = VAR_11.value / 255.0;
   VAR_20[3] = 0.33f;
  } else if ( VAR_16.clientinfo[VAR_7.clientNum].team == VAR_3 ) {
   VAR_20[0] = VAR_10.value / 255.0;
   VAR_20[1] = VAR_9.value / 255.0;
   VAR_20[2] = VAR_8.value / 255.0;
   VAR_20[3] = 0.33f;
  } else {
   VAR_20[0] = 0.0f;
   VAR_20[1] = 1.0f;
   VAR_20[2] = 0.0f;
   VAR_20[3] = 0.33f;
  }

  FUNC_2( VAR_20 );
  FUNC_0( 0, 420 - VAR_18, 640, VAR_18, VAR_16.media.teamStatusBar );
  FUNC_2( ((void*)0) );

  VAR_20[0] = VAR_20[1] = VAR_20[2] = 1.0f;
  VAR_20[3] = 1.0f;

  for (VAR_19 = VAR_16.teamChatPos - 1; VAR_19 >= VAR_16.teamLastChatPos; VAR_19--) {
   FUNC_1( 0 + VAR_6,
    420 - (VAR_16.teamChatPos - VAR_19)*VAR_5,
    VAR_16.teamChatMsgs[VAR_19 % VAR_21], VAR_20, VAR_17, VAR_17,
    VAR_6, VAR_5, 0 );
  }
 }
}
