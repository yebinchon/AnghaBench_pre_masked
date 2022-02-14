
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hint; TYPE_2__* winding; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_5__ {int numpoints; int ** points; } ;
typedef TYPE_2__ fixedWinding_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_5( char *VAR_3 ){
 int VAR_4, VAR_5, VAR_6;
 FILE *VAR_7;
 vportal_t *VAR_8;
 fixedWinding_t *VAR_9;


 VAR_7 = FUNC_3( VAR_3, "w" );
 if ( !VAR_7 ) {
  FUNC_0( "Error opening %s", VAR_3 );
 }

 VAR_6 = 0;
 for ( VAR_5 = 0; VAR_5 < VAR_1 * 2; VAR_5++ )
 {
  VAR_8 = VAR_2 + VAR_5;
  if ( VAR_8->removed ) {
   continue;
  }


  VAR_6++;
 }

 FUNC_4( VAR_7, "%s\n", VAR_0 );
 FUNC_4( VAR_7, "%i\n", 0 );
 FUNC_4( VAR_7, "%i\n", VAR_6 );
 FUNC_4( VAR_7, "%i\n", 0 );

 for ( VAR_5 = 0; VAR_5 < VAR_1 * 2; VAR_5++ )
 {
  VAR_8 = VAR_2 + VAR_5;
  if ( VAR_8->removed ) {
   continue;
  }


  VAR_9 = VAR_8->winding;
  FUNC_4( VAR_7,"%i %i %i ",VAR_9->numpoints, 0, 0 );
  FUNC_4( VAR_7, "%d ", VAR_8->hint );
  for ( VAR_4 = 0 ; VAR_4 < VAR_9->numpoints ; VAR_4++ )
  {
   FUNC_4( VAR_7,"(" );
   FUNC_1( VAR_7, VAR_9->points[VAR_4][0] );
   FUNC_1( VAR_7, VAR_9->points[VAR_4][1] );
   FUNC_1( VAR_7, VAR_9->points[VAR_4][2] );
   FUNC_4( VAR_7,") " );
  }
  FUNC_4( VAR_7,"\n" );
 }
 FUNC_2( VAR_7 );
}
