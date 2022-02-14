
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
typedef scalar_t__ vec_t ;
struct TYPE_9__ {scalar_t__ dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_10__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_4__ brush_t ;
struct TYPE_7__ {TYPE_2__* winding; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1( brush_t *VAR_2, plane_t *VAR_3 ){
 int VAR_4, VAR_5;
 winding_t *VAR_6;
 vec_t VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = 0;
 VAR_9 = VAR_1;
 for ( VAR_4 = 0 ; VAR_4 < VAR_2->numsides ; VAR_4++ )
 {
  VAR_6 = VAR_2->sides[VAR_4].winding;
  if ( !VAR_6 ) {
   continue;
  }
  for ( VAR_5 = 0 ; VAR_5 < VAR_6->numpoints ; VAR_5++ )
  {
   VAR_7 = FUNC_0( VAR_6->p[VAR_5], VAR_3->normal ) - VAR_3->dist;
   if ( VAR_7 > VAR_8 ) {
    VAR_8 = VAR_7;
    VAR_9 = VAR_1;
   }
   if ( -VAR_7 > VAR_8 ) {
    VAR_8 = -VAR_7;
    VAR_9 = VAR_0;
   }
  }
 }
 return VAR_9;
}
