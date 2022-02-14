
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int brushNum; int visibleSide; int shader; } ;
struct TYPE_9__ {int visibleSide; TYPE_3__* brush; TYPE_1__* si; } ;
struct TYPE_8__ {int outputNum; TYPE_2__* sides; } ;
struct TYPE_7__ {int * visibleHull; } ;
struct TYPE_6__ {int shader; } ;


 int FUNC_0 (char*,int,int) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( void ){
 int VAR_4, VAR_5;



 VAR_2 = VAR_3;


 for ( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
 {

  FUNC_1( VAR_0[ VAR_4 ].shader, VAR_1[ VAR_4 ].si->shader );


  if ( VAR_1[ VAR_4 ].brush == ((void*)0) ) {
   VAR_0[ VAR_4 ].brushNum = -1;
   VAR_0[ VAR_4 ].visibleSide = -1;
  }
  else
  {

   VAR_0[ VAR_4 ].brushNum = VAR_1[ VAR_4 ].brush->outputNum;


   if ( VAR_1[ VAR_4 ].visibleSide >= 0 ) {
    VAR_0[ VAR_4 ].visibleSide = VAR_1[ VAR_4 ].visibleSide;
    continue;
   }


   for ( VAR_5 = 0; VAR_5 < 6; VAR_5++ )
   {
    if ( VAR_1[ VAR_4 ].brush->sides[ VAR_5 ].visibleHull != ((void*)0) ) {
     FUNC_0( "Fog %d has visible side %d\n", VAR_4, VAR_5 );
     VAR_0[ VAR_4 ].visibleSide = VAR_5;
     break;
    }
   }
  }
 }
}
