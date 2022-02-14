
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numsides; TYPE_1__* sides; int * next; } ;
typedef TYPE_2__ brush_t ;
struct TYPE_8__ {int * winding; } ;


 TYPE_2__* FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,size_t) ;

brush_t *FUNC_3( brush_t *VAR_0 ){
 brush_t *VAR_1;
 size_t VAR_2;
 int VAR_3;



 VAR_2 = sizeof( *VAR_0 ) + sizeof( *VAR_0->sides ) * VAR_0->numsides;
 VAR_1 = FUNC_0( VAR_0->numsides );
 FUNC_2( VAR_1, VAR_0, VAR_2 );


 VAR_1->next = ((void*)0);


 for ( VAR_3 = 0; VAR_3 < VAR_0->numsides; VAR_3++ )
 {
  if ( VAR_0->sides[ VAR_3 ].winding != ((void*)0) ) {
   VAR_1->sides[ VAR_3 ].winding = FUNC_1( VAR_0->sides[ VAR_3 ].winding );
  }
 }


 return VAR_1;
}
