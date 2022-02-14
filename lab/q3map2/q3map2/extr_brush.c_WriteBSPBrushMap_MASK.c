
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_9__ {size_t planenum; } ;
typedef TYPE_2__ side_t ;
struct TYPE_10__ {int numsides; TYPE_2__* sides; struct TYPE_10__* next; } ;
typedef TYPE_3__ brush_t ;
struct TYPE_11__ {int dist; int normal; } ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,...) ;
 TYPE_4__* VAR_0 ;

void FUNC_7( char *VAR_1, brush_t *VAR_2 ){
 FILE *VAR_3;
 side_t *VAR_4;
 int VAR_5;
 winding_t *VAR_6;



 FUNC_3( "Writing %s\n", VAR_1 );


 VAR_3 = FUNC_5( VAR_1, "wb" );
 if ( VAR_3 == ((void*)0) ) {
  FUNC_1( "Can't write %s\b", VAR_1 );
 }

 FUNC_6( VAR_3, "{\n\"classname\" \"worldspawn\"\n" );

 for ( ; VAR_2 ; VAR_2 = VAR_2->next )
 {
  FUNC_6( VAR_3, "{\n" );
  for ( VAR_5 = 0,VAR_4 = VAR_2->sides ; VAR_5 < VAR_2->numsides ; VAR_5++,VAR_4++ )
  {


   VAR_6 = FUNC_0( VAR_0[VAR_4->planenum].normal, VAR_0[VAR_4->planenum].dist );

   FUNC_6( VAR_3,"( %i %i %i ) ", (int)VAR_6->p[0][0], (int)VAR_6->p[0][1], (int)VAR_6->p[0][2] );
   FUNC_6( VAR_3,"( %i %i %i ) ", (int)VAR_6->p[1][0], (int)VAR_6->p[1][1], (int)VAR_6->p[1][2] );
   FUNC_6( VAR_3,"( %i %i %i ) ", (int)VAR_6->p[2][0], (int)VAR_6->p[2][1], (int)VAR_6->p[2][2] );

   FUNC_6( VAR_3, "notexture 0 0 0 1 1\n" );
   FUNC_2( VAR_6 );
  }
  FUNC_6( VAR_3, "}\n" );
 }
 FUNC_6( VAR_3, "}\n" );

 FUNC_4( VAR_3 );

}
