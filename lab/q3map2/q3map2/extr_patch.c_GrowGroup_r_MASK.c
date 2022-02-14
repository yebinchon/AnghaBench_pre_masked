
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ longestCurve; scalar_t__ maxIterations; } ;
typedef TYPE_1__ parseMesh_t ;
typedef int byte ;



__attribute__((used)) static void FUNC_0( parseMesh_t *VAR_0, int VAR_1, int VAR_2, parseMesh_t **VAR_3, byte *VAR_4, byte *VAR_5 ){
 int VAR_6;
 const byte *VAR_7;



 if ( VAR_5[ VAR_1 ] ) {
  return;
 }



 VAR_5[ VAR_1 ] = 1;
 VAR_7 = VAR_4 + VAR_1 * VAR_2;


 if ( VAR_3[ VAR_1 ]->longestCurve > VAR_0->longestCurve ) {
  VAR_0->longestCurve = VAR_3[ VAR_1 ]->longestCurve;
 }
 if ( VAR_3[ VAR_1 ]->maxIterations > VAR_0->maxIterations ) {
  VAR_0->maxIterations = VAR_3[ VAR_1 ]->maxIterations;
 }


 for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ )
 {
  if ( VAR_7[ VAR_6 ] ) {
   FUNC_0( VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5 );
  }
 }
}
