
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ func; float base; int phase; int frequency; float amplitude; } ;
typedef TYPE_1__ waveForm_t ;
typedef int byte ;
struct TYPE_10__ {int (* ftol ) (int) ;} ;
struct TYPE_9__ {int shaderTime; int numVertexes; } ;
struct TYPE_8__ {float identityLight; } ;


 float FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 float FUNC_1 (int ,int ,int ,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_3( const waveForm_t *VAR_4, unsigned char *VAR_5 )
{
 int VAR_6;
 int VAR_7;
 float VAR_8;
 int *VAR_9 = ( int * ) VAR_5;
 byte VAR_10[4];


  if ( VAR_4->func == VAR_0 ) {
  VAR_8 = VAR_4->base + FUNC_1( 0, 0, 0, ( VAR_2.shaderTime + VAR_4->phase ) * VAR_4->frequency ) * VAR_4->amplitude;
 } else {
  VAR_8 = FUNC_0( VAR_4 ) * VAR_3.identityLight;
 }

 if ( VAR_8 < 0 ) {
  VAR_8 = 0;
 }
 else if ( VAR_8 > 1 ) {
  VAR_8 = 1;
 }

 VAR_7 = VAR_1.ftol(255 * VAR_8);
 VAR_10[0] = VAR_10[1] = VAR_10[2] = VAR_7;
 VAR_10[3] = 255;
 VAR_7 = *(int *)VAR_10;

 for ( VAR_6 = 0; VAR_6 < VAR_2.numVertexes; VAR_6++, VAR_9++ ) {
  *VAR_9 = VAR_7;
 }
}
