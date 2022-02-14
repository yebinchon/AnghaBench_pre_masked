
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int maxs; int mins; int type; } ;
typedef TYPE_1__ traceNode_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5( void ){
 traceNode_t *VAR_5;



 if ( VAR_3 >= VAR_2 ) {

  VAR_2 += VAR_0;
  VAR_5 = FUNC_4( VAR_2 * sizeof( traceNode_t ) );
  if ( VAR_4 != ((void*)0) ) {
   FUNC_2( VAR_5, VAR_4, VAR_3 * sizeof( traceNode_t ) );
   FUNC_1( VAR_4 );
  }
  VAR_4 = VAR_5;
 }


 FUNC_3( &VAR_4[ VAR_3 ], 0, sizeof( traceNode_t ) );
 VAR_4[ VAR_3 ].type = VAR_1;
 FUNC_0( VAR_4[ VAR_3 ].mins, VAR_4[ VAR_3 ].maxs );
 VAR_3++;


 return ( VAR_3 - 1 );
}
