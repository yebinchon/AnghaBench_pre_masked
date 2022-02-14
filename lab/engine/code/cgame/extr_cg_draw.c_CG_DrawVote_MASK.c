
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int time; } ;
struct TYPE_4__ {int talkSound; } ;
struct TYPE_5__ {int voteTime; int voteNo; int voteYes; int voteString; TYPE_1__ media; scalar_t__ voteModified; } ;


 int FUNC_0 (int ,int,char*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void) {
 char *VAR_6;
 int VAR_7;

 if ( !VAR_4.voteTime ) {
  return;
 }


 if ( VAR_4.voteModified ) {
  VAR_4.voteModified = VAR_5;
  FUNC_1( VAR_4.media.talkSound, VAR_0 );
 }

 VAR_7 = ( VAR_2 - ( VAR_3.time - VAR_4.voteTime ) ) / 1000;
 if ( VAR_7 < 0 ) {
  VAR_7 = 0;
 }






 VAR_6 = FUNC_2("VOTE(%i):%s yes:%i no:%i", VAR_7, VAR_4.voteString, VAR_4.voteYes, VAR_4.voteNo );
 FUNC_0( 0, 58, VAR_6, 1.0F );

}
