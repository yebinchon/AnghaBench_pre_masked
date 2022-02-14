
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_6__ {int dist; int normal; } ;
typedef TYPE_2__ bspPlane_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_2( void ){
 int VAR_5;
 bspPlane_t *VAR_6;
 plane_t *VAR_7;



 VAR_7 = VAR_2;
 for ( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_7++ )
 {
  VAR_6 = &VAR_1[ VAR_3 ];
  FUNC_1( VAR_7->normal, VAR_6->normal );
  VAR_6->dist = VAR_7->dist;
  VAR_3++;
 }


 FUNC_0( VAR_0, "%9d BSP planes\n", VAR_3 );
}
