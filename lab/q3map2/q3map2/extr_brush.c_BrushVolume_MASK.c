
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * p; } ;
typedef TYPE_2__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_10__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_11__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_4__ brush_t ;
struct TYPE_8__ {size_t planenum; TYPE_2__* winding; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;

vec_t FUNC_3( brush_t *VAR_1 ){
 int VAR_2;
 winding_t *VAR_3;
 vec3_t VAR_4;
 vec_t VAR_5, VAR_6, VAR_7;
 plane_t *VAR_8;

 if ( !VAR_1 ) {
  return 0;
 }



 VAR_3 = ((void*)0);
 for ( VAR_2 = 0 ; VAR_2 < VAR_1->numsides ; VAR_2++ )
 {
  VAR_3 = VAR_1->sides[VAR_2].winding;
  if ( VAR_3 ) {
   break;
  }
 }
 if ( !VAR_3 ) {
  return 0;
 }
 FUNC_1( VAR_3->p[0], VAR_4 );



 VAR_7 = 0;
 for ( ; VAR_2 < VAR_1->numsides ; VAR_2++ )
 {
  VAR_3 = VAR_1->sides[VAR_2].winding;
  if ( !VAR_3 ) {
   continue;
  }
  VAR_8 = &VAR_0[VAR_1->sides[VAR_2].planenum];
  VAR_5 = -( FUNC_0( VAR_4, VAR_8->normal ) - VAR_8->dist );
  VAR_6 = FUNC_2( VAR_3 );
  VAR_7 += VAR_5 * VAR_6;
 }

 VAR_7 /= 3;
 return VAR_7;
}
