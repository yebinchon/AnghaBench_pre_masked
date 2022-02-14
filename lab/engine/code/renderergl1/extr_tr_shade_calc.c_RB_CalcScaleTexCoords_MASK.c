
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numVertexes; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( const float VAR_1[2], float *VAR_2 )
{
 int VAR_3;

 for ( VAR_3 = 0; VAR_3 < VAR_0.numVertexes; VAR_3++, VAR_2 += 2 )
 {
  VAR_2[0] *= VAR_1[0];
  VAR_2[1] *= VAR_1[1];
 }
}
