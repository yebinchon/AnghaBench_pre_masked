
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int waveForm_t ;
struct TYPE_2__ {int numVertexes; } ;


 float FUNC_0 (int const*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1( const waveForm_t *VAR_1, unsigned char *VAR_2 )
{
 int VAR_3;
 int VAR_4;
 float VAR_5;

 VAR_5 = FUNC_0( VAR_1 );

 VAR_4 = 255 * VAR_5;

 for ( VAR_3 = 0; VAR_3 < VAR_0.numVertexes; VAR_3++, VAR_2 += 4 )
 {
  VAR_2[3] = VAR_4;
 }
}
