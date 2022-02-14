
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int downloadClientBlock; scalar_t__* downloadBlockSize; int downloadSendTime; int downloadName; } ;
typedef TYPE_1__ client_t ;
struct TYPE_7__ {int time; TYPE_1__* clients; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int ) ;
 size_t VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_6( client_t *VAR_2 )
{
 int VAR_3 = FUNC_5( FUNC_0(1) );

 if (VAR_3 == VAR_2->downloadClientBlock) {
  FUNC_1( "clientDownload: %d : client acknowledge of block %d\n", (int) (VAR_2 - VAR_1.clients), VAR_3 );


  if (VAR_2->downloadBlockSize[VAR_2->downloadClientBlock % VAR_0] == 0) {
   FUNC_2( "clientDownload: %d : file \"%s\" completed\n", (int) (VAR_2 - VAR_1.clients), VAR_2->downloadName );
   FUNC_3( VAR_2 );
   return;
  }

  VAR_2->downloadSendTime = VAR_1.time;
  VAR_2->downloadClientBlock++;
  return;
 }



 FUNC_4( VAR_2, "broken download" );
}
