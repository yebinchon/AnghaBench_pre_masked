
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ brush_t ;
struct TYPE_6__ {int * winding; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4( brush_t *VAR_3 ){
 int VAR_4;



 if ( *( (unsigned int*) VAR_3 ) == 0xFEFEFEFE ) {
  FUNC_1( VAR_0, "WARNING: Attempt to free an already freed brush!\n" );
  return;
 }


 for ( VAR_4 = 0; VAR_4 < VAR_3->numsides; VAR_4++ )
  if ( VAR_3->sides[VAR_4].winding != ((void*)0) ) {
   FUNC_0( VAR_3->sides[ VAR_4 ].winding );
  }


 FUNC_3( VAR_3, 0xFE, sizeof( *VAR_3 ) + sizeof( *VAR_3->sides ) * VAR_3->numsides );
 *( (unsigned int*) VAR_3 ) = 0xFEFEFEFE;


 FUNC_2( VAR_3 );
 if ( VAR_2 == 1 ) {
  VAR_1--;
 }
}
