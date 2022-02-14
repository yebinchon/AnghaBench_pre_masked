
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int time; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {int teamChatPos; int teamLastChatPos; char** teamChatMsgs; int * teamChatMsgTimes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_1( const char *VAR_7 ) {
 int VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_4.integer < VAR_1) {
  VAR_12 = VAR_4.integer;
 } else {
  VAR_12 = VAR_1;
 }

 if (VAR_12 <= 0 || VAR_5.integer <= 0) {

  VAR_6.teamChatPos = VAR_6.teamLastChatPos = 0;
  return;
 }

 VAR_8 = 0;

 VAR_9 = VAR_6.teamChatMsgs[VAR_6.teamChatPos % VAR_12];
 *VAR_9 = 0;

 VAR_11 = '7';

 VAR_10 = ((void*)0);
 while (*VAR_7) {
  if (VAR_8 > VAR_2 - 1) {
   if (VAR_10) {
    VAR_7 -= (VAR_9 - VAR_10);
    VAR_7++;
    VAR_9 -= (VAR_9 - VAR_10);
   }
   *VAR_9 = 0;

   VAR_6.teamChatMsgTimes[VAR_6.teamChatPos % VAR_12] = VAR_3.time;

   VAR_6.teamChatPos++;
   VAR_9 = VAR_6.teamChatMsgs[VAR_6.teamChatPos % VAR_12];
   *VAR_9 = 0;
   *VAR_9++ = VAR_0;
   *VAR_9++ = VAR_11;
   VAR_8 = 0;
   VAR_10 = ((void*)0);
  }

  if ( FUNC_0( VAR_7 ) ) {
   *VAR_9++ = *VAR_7++;
   VAR_11 = *VAR_7;
   *VAR_9++ = *VAR_7++;
   continue;
  }
  if (*VAR_7 == ' ') {
   VAR_10 = VAR_9;
  }
  *VAR_9++ = *VAR_7++;
  VAR_8++;
 }
 *VAR_9 = 0;

 VAR_6.teamChatMsgTimes[VAR_6.teamChatPos % VAR_12] = VAR_3.time;
 VAR_6.teamChatPos++;

 if (VAR_6.teamChatPos - VAR_6.teamLastChatPos > VAR_12)
  VAR_6.teamLastChatPos = VAR_6.teamChatPos - VAR_12;
}
