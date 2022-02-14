
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* headnode; int maxs; int mins; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_12__ {TYPE_1__* w; struct TYPE_12__* next; } ;
typedef TYPE_3__ face_t ;
struct TYPE_13__ {int maxs; int mins; } ;
struct TYPE_10__ {int numpoints; int * p; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_6__* FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;

tree_t *FUNC_6( face_t *VAR_2 ) {
 tree_t *VAR_3;
 face_t *VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_4( VAR_0, "--- FaceBSP ---\n" );

 VAR_3 = FUNC_2();

 VAR_6 = 0;
 for ( VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next )
 {
  VAR_6++;
  for ( VAR_5 = 0; VAR_5 < VAR_4->w->numpoints; VAR_5++ )
  {
   FUNC_0( VAR_4->w->p[ VAR_5 ], VAR_3->mins, VAR_3->maxs );
  }
 }
 FUNC_4( VAR_0, "%9d faces\n", VAR_6 );

 VAR_3->headnode = FUNC_1();
 FUNC_5( VAR_3->mins, VAR_3->headnode->mins );
 FUNC_5( VAR_3->maxs, VAR_3->headnode->maxs );
 VAR_1 = 0;

 FUNC_3( VAR_3->headnode, VAR_2 );

 FUNC_4( VAR_0, "%9d leafs\n", VAR_1 );

 return VAR_3;
}
