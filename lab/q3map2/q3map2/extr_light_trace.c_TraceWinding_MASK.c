
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_7__ {size_t infoNum; int numVerts; TYPE_1__* v; } ;
typedef TYPE_2__ traceWinding_t ;
struct TYPE_8__ {size_t infoNum; int edge2; TYPE_1__* v; int edge1; } ;
typedef TYPE_3__ traceTriangle_t ;
typedef int qboolean ;
struct TYPE_6__ {int xyz; } ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

qboolean FUNC_2( traceWinding_t *VAR_3, trace_t *VAR_4 ){
 int VAR_5;
 traceTriangle_t VAR_6;



 VAR_6.infoNum = VAR_3->infoNum;
 VAR_6.v[ 0 ] = VAR_3->v[ 0 ];


 for ( VAR_5 = 1; VAR_5 + 1 < VAR_3->numVerts; VAR_5++ )
 {

  VAR_6.v[ 1 ] = VAR_3->v[ VAR_5 ];
  VAR_6.v[ 2 ] = VAR_3->v[ VAR_5 + 1 ];


  FUNC_1( VAR_6.v[ 1 ].xyz, VAR_6.v[ 0 ].xyz, VAR_6.edge1 );
  FUNC_1( VAR_6.v[ 2 ].xyz, VAR_6.v[ 0 ].xyz, VAR_6.edge2 );


  if ( FUNC_0( &VAR_2[ VAR_6.infoNum ], &VAR_6, VAR_4 ) ) {
   return VAR_1;
  }
 }


 return VAR_0;
}
