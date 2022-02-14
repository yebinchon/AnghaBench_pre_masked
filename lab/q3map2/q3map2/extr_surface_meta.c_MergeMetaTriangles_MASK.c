
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fogNum; int * si; } ;
typedef TYPE_1__ metaTriangle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int,TYPE_1__*,int*,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;

void FUNC_5( void ){
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 metaTriangle_t *VAR_11, *VAR_12;



 if ( VAR_5 <= 0 ) {
  return;
 }


 FUNC_3( VAR_1, "--- MergeMetaTriangles ---\n" );


 FUNC_4( VAR_2, VAR_5, sizeof( metaTriangle_t ), VAR_0 );


 VAR_8 = -1;
 VAR_9 = FUNC_1();
 VAR_10 = 0;


 for ( VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_5; VAR_6 = VAR_7 )
 {

  VAR_11 = &VAR_2[ VAR_6 ];


  if ( VAR_11->si == ((void*)0) ) {
   continue;
  }


  if ( VAR_7 <= VAR_6 ) {
   for ( VAR_7 = VAR_6 + 1; VAR_7 < VAR_5; VAR_7++ )
   {

    VAR_12 = &VAR_2[ VAR_7 ];
    if ( VAR_11->si != VAR_12->si || VAR_11->fogNum != VAR_12->fogNum ) {
     break;
    }
   }
  }


  FUNC_2( ( VAR_7 - VAR_6 ), VAR_11, &VAR_8, &VAR_10 );
 }


 FUNC_0();


 if ( VAR_6 ) {
  FUNC_3( VAR_1, " (%d)\n", (int) ( FUNC_1() - VAR_9 ) );
 }


 FUNC_3( VAR_1, "%9d surfaces merged\n", VAR_3 );
 FUNC_3( VAR_1, "%9d vertexes merged\n", VAR_4 );
}
