
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * patches; int * brushes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 char* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6( void ){
 int VAR_3, VAR_4;
 int VAR_5;
 char VAR_6[ 10 ];
 const char *VAR_7, *VAR_8, *VAR_9;



 VAR_5 = 1;
 for ( VAR_3 = 1; VAR_3 < VAR_2; VAR_3++ )
 {

  if ( VAR_1[ VAR_3 ].brushes == ((void*)0) && VAR_1[ VAR_3 ].patches == ((void*)0) ) {
   continue;
  }


  VAR_7 = FUNC_2( &VAR_1[ VAR_3 ], "_clone" );
  if ( VAR_7[ 0 ] != '\0' ) {
   continue;
  }


  FUNC_4( VAR_6, "*%d", VAR_5 );
  FUNC_0( &VAR_1[ VAR_3 ], "model", VAR_6 );


  VAR_5++;
 }


 for ( VAR_3 = 1; VAR_3 < VAR_2; VAR_3++ )
 {

  if ( VAR_1[ VAR_3 ].brushes == ((void*)0) && VAR_1[ VAR_3 ].patches == ((void*)0) ) {
   continue;
  }


  VAR_7 = FUNC_2( &VAR_1[ VAR_3 ], "_ins" );
  if ( VAR_7[ 0 ] == '\0' ) {
   VAR_7 = FUNC_2( &VAR_1[ VAR_3 ], "_instance" );
  }
  if ( VAR_7[ 0 ] == '\0' ) {
   VAR_7 = FUNC_2( &VAR_1[ VAR_3 ], "_clone" );
  }
  if ( VAR_7[ 0 ] == '\0' ) {
   continue;
  }


  for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
  {

   VAR_8 = FUNC_2( &VAR_1[ VAR_4 ], "_clonename" );
   if ( VAR_8[ 0 ] == '\0' ) {
    continue;
   }


   if ( FUNC_5( VAR_7, VAR_8 ) == 0 ) {

    VAR_9 = FUNC_2( &VAR_1[ VAR_4 ], "model" );
    if ( VAR_9[ 0 ] == '\0' ) {
     FUNC_1( VAR_0, "WARNING: Cloned entity %s referenced entity without model\n", VAR_8 );
     continue;
    }
    VAR_5 = FUNC_3( &VAR_8[ 1 ] );


    FUNC_4( VAR_6, "*%d", VAR_5 );
    FUNC_0( &VAR_1[ VAR_3 ], "model", VAR_6 );


    VAR_1[ VAR_3 ].brushes = ((void*)0);
    VAR_1[ VAR_3 ].patches = ((void*)0);
   }
  }
 }
}
