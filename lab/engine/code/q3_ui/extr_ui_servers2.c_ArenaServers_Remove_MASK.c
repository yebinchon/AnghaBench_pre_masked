
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* servernode; } ;
typedef TYPE_2__ table_t ;
struct TYPE_12__ {int adrstr; } ;
typedef TYPE_3__ servernode_t ;
struct TYPE_10__ {size_t curvalue; int numitems; } ;
struct TYPE_13__ {int numfavoriteaddresses; size_t numqueriedservers; size_t currentping; TYPE_3__* favoriteaddresses; TYPE_1__ list; TYPE_2__* table; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__,int ) ;
 TYPE_8__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3( void )
{
 int VAR_4;
 servernode_t* VAR_5;
 table_t* VAR_6;

 if (!VAR_1.list.numitems)
  return;





 VAR_6 = &VAR_1.table[VAR_1.list.curvalue];
 VAR_5 = VAR_6->servernode;


 for (VAR_4=0; VAR_4<VAR_1.numfavoriteaddresses; VAR_4++)
 {
  if (!FUNC_0(VAR_1.favoriteaddresses[VAR_4],VAR_5->adrstr))
  {

   if (VAR_4 < VAR_1.numfavoriteaddresses-1)
   {

    FUNC_1( &VAR_1.favoriteaddresses[VAR_4], &VAR_1.favoriteaddresses[VAR_4+1], (VAR_1.numfavoriteaddresses - VAR_4 - 1)* VAR_0 );
   }
   VAR_1.numfavoriteaddresses--;
   FUNC_2( &VAR_1.favoriteaddresses[VAR_1.numfavoriteaddresses], 0, VAR_0 );
   break;
  }
 }


 for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
 {
  if (&VAR_2[VAR_4] == VAR_5)
  {


   if (VAR_4 < VAR_3-1)
   {

    FUNC_1( &VAR_2[VAR_4], &VAR_2[VAR_4+1], (VAR_3 - VAR_4 - 1)*sizeof(servernode_t));
   }
   VAR_3--;
   FUNC_2( &VAR_2[ VAR_3 ], 0, sizeof(servernode_t));
   break;
  }
 }

 VAR_1.numqueriedservers = VAR_1.numfavoriteaddresses;
 VAR_1.currentping = VAR_1.numfavoriteaddresses;
}
