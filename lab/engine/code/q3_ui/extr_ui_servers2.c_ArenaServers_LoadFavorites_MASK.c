
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pingtime; int adrstr; } ;
typedef TYPE_1__ servernode_t ;
typedef int qboolean ;
struct TYPE_8__ {size_t numfavoriteaddresses; int * favoriteaddresses; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_6__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,int) ;

void FUNC_8( void )
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 char VAR_10[VAR_0];
 servernode_t VAR_11[VAR_1];
 qboolean VAR_12;

 VAR_12 = VAR_5;


 FUNC_3( VAR_11, VAR_3, sizeof(servernode_t)*VAR_1 );
 VAR_9 = VAR_4;


 FUNC_4( VAR_3, 0, sizeof(servernode_t)*VAR_1 );
 VAR_4 = 0;


 for (VAR_7=0; VAR_7<VAR_1; VAR_7++)
 {
  FUNC_6( FUNC_7("server%d",VAR_7+1), VAR_10, VAR_0 );
  if (!VAR_10[0])
   continue;




  FUNC_5( VAR_2.favoriteaddresses[VAR_4], VAR_10 );


  for (VAR_8=0; VAR_8<VAR_9; VAR_8++)
   if (!FUNC_1( VAR_11[VAR_8].adrstr, VAR_10 ))
    break;

  if (VAR_8 < VAR_9)
  {

   FUNC_3( &VAR_3[VAR_4], &VAR_11[VAR_8], sizeof(servernode_t) );
   VAR_12 = VAR_6;
  }
  else
  {

   FUNC_2( VAR_3[VAR_4].adrstr, VAR_10, VAR_0 );
   VAR_3[VAR_4].pingtime = FUNC_0();
  }

  VAR_4++;
 }

 VAR_2.numfavoriteaddresses = VAR_4;

 if (!VAR_12)
 {


  VAR_4 = 0;
 }
}
