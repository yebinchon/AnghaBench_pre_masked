
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dist; int normal; } ;
typedef TYPE_1__ bspPlane_t ;
struct TYPE_8__ {size_t planeNum; int* children; } ;
typedef TYPE_2__ bspNode_t ;
struct TYPE_10__ {int cluster; } ;
struct TYPE_9__ {size_t* children; int type; int * plane; } ;


 void* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 TYPE_6__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static int FUNC_3( int VAR_5 ){
 int VAR_6, VAR_7, VAR_8;
 bspPlane_t *VAR_9;
 bspNode_t *VAR_10;



 VAR_10 = &VAR_2[ VAR_5 ];
 VAR_9 = &VAR_3[ VAR_10->planeNum ];


 VAR_7 = FUNC_0();


 VAR_4[ VAR_7 ].type = FUNC_1( VAR_9->normal );
 FUNC_2( VAR_9->normal, VAR_4[ VAR_7 ].plane );
 VAR_4[ VAR_7 ].plane[ 3 ] = VAR_9->dist;


 for ( VAR_6 = 0; VAR_6 < 2; VAR_6++ )
 {

  if ( VAR_10->children[ VAR_6 ] < 0 ) {
   VAR_8 = -VAR_10->children[ VAR_6 ] - 1;


   VAR_4[ VAR_7 ].children[ VAR_6 ] = FUNC_0();
   if ( VAR_1[ VAR_8 ].cluster == -1 ) {
    VAR_4[ VAR_4[ VAR_7 ].children[ VAR_6 ] ].type = VAR_0;
   }
  }


  else{
   VAR_4[ VAR_7 ].children[ VAR_6 ] = FUNC_3( VAR_10->children[ VAR_6 ] );
  }
 }


 return VAR_7;
}
