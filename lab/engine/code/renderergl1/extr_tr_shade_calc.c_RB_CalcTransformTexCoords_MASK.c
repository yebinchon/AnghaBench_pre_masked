
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float** matrix; float* translate; } ;
typedef TYPE_1__ texModInfo_t ;
struct TYPE_5__ {int numVertexes; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0( const texModInfo_t *VAR_1, float *VAR_2 )
{
 int VAR_3;

 for ( VAR_3 = 0; VAR_3 < VAR_0.numVertexes; VAR_3++, VAR_2 += 2 )
 {
  float VAR_4 = VAR_2[0];
  float VAR_5 = VAR_2[1];

  VAR_2[0] = VAR_4 * VAR_1->matrix[0][0] + VAR_5 * VAR_1->matrix[1][0] + VAR_1->translate[0];
  VAR_2[1] = VAR_4 * VAR_1->matrix[0][1] + VAR_5 * VAR_1->matrix[1][1] + VAR_1->translate[1];
 }
}
