
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {scalar_t__ dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_8__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ brush_t ;
struct TYPE_9__ {TYPE_3__* brush; } ;
struct TYPE_6__ {size_t planenum; } ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_1( vec3_t VAR_6, float VAR_7 ){
 int VAR_8, VAR_9, VAR_10;
 float VAR_11;
 qboolean VAR_12;
 brush_t *VAR_13;
 plane_t *VAR_14;



 VAR_8 = VAR_0;


 for ( VAR_9 = 0; VAR_9 < VAR_3; VAR_9++ )
 {

  if ( VAR_1[ VAR_9 ].brush == ((void*)0) ) {
   VAR_8 = VAR_9;
   continue;
  }


  VAR_13 = VAR_1[ VAR_9 ].brush;


  VAR_12 = VAR_5;
  for ( VAR_10 = 0; VAR_10 < VAR_13->numsides && VAR_12; VAR_10++ )
  {
   VAR_14 = &VAR_2[ VAR_13->sides[ VAR_10 ].planenum ];
   VAR_11 = FUNC_0( VAR_6, VAR_14->normal );
   VAR_11 -= VAR_14->dist;
   if ( VAR_11 > VAR_7 ) {
    VAR_12 = VAR_4;
   }
  }


  if ( VAR_12 ) {

   return VAR_9;
  }
 }


 return VAR_8;
}
