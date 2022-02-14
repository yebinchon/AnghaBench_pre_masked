
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__** children; int planenum; void* areaportal; void* opaque; TYPE_2__* brushlist; } ;
typedef TYPE_1__ node_t ;
struct TYPE_10__ {int compileFlags; int numsides; scalar_t__ opaque; int detail; struct TYPE_10__* next; } ;
typedef TYPE_2__ brush_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_2__**,TYPE_2__**) ;
 void* VAR_2 ;
 void* VAR_3 ;

int FUNC_2( brush_t *VAR_4, node_t *VAR_5 ){
 brush_t *VAR_6, *VAR_7;
 int VAR_8;



 if ( VAR_4 == ((void*)0) ) {
  return 0;
 }


 if ( VAR_5->planenum == VAR_1 ) {

  VAR_4->next = VAR_5->brushlist;
  VAR_5->brushlist = VAR_4;


  if ( !VAR_4->detail ) {
   if ( VAR_4->opaque ) {
    VAR_5->opaque = VAR_3;
    VAR_5->areaportal = VAR_2;
   }
   else if ( VAR_4->compileFlags & VAR_0 ) {
    if ( !VAR_5->opaque ) {
     VAR_5->areaportal = VAR_3;
    }
   }
  }

  return 1;
 }


 VAR_8 = VAR_4->numsides;
 FUNC_1( VAR_4, VAR_5->planenum, &VAR_6, &VAR_7 );
 FUNC_0( VAR_4 );

 VAR_8 = 0;
 VAR_8 += FUNC_2( VAR_6, VAR_5->children[ 0 ] );
 VAR_8 += FUNC_2( VAR_7, VAR_5->children[ 1 ] );

 return VAR_8;
}
