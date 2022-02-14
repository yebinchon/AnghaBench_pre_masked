
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int compileFlags; int planenum; int * visibleHull; } ;
typedef TYPE_1__ side_t ;
struct TYPE_8__ {int planenum; int compileFlags; struct TYPE_8__* next; scalar_t__ priority; int w; } ;
typedef TYPE_2__ face_t ;
struct TYPE_9__ {int numsides; TYPE_1__* sides; scalar_t__ detail; struct TYPE_9__* next; } ;
typedef TYPE_3__ brush_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;

face_t *FUNC_2( brush_t *VAR_7 ){
 brush_t *VAR_8;
 int VAR_9;
 side_t *VAR_10;
 winding_t *VAR_11;
 face_t *VAR_12, *VAR_13;


 VAR_13 = ((void*)0);
 for ( VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->next )
 {
  if ( VAR_8->detail ) {
   continue;
  }

  for ( VAR_9 = 0; VAR_9 < VAR_8->numsides; VAR_9++ )
  {

   VAR_10 = &VAR_8->sides[ VAR_9 ];
   VAR_11 = VAR_10->visibleHull;
   if ( VAR_11 == ((void*)0) ) {
    continue;
   }


   if ( VAR_10->compileFlags & VAR_5 ) {
    continue;
   }


   VAR_12 = FUNC_0();
   VAR_12->w = FUNC_1( VAR_11 );
   VAR_12->planenum = VAR_10->planenum & ~1;
   VAR_12->compileFlags = VAR_10->compileFlags;


   VAR_12->priority = 0;
   if ( VAR_12->compileFlags & VAR_4 ) {
    VAR_12->priority += VAR_6;
   }
   if ( VAR_12->compileFlags & VAR_2 ) {
    VAR_12->priority += VAR_0;
   }
   if ( VAR_12->compileFlags & VAR_3 ) {
    VAR_12->priority += VAR_1;
   }


   VAR_12->next = VAR_13;
   VAR_13 = VAR_12;
  }
 }

 return VAR_13;
}
