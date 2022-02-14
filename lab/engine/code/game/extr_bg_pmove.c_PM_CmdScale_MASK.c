
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int forwardmove; int rightmove; int upmove; } ;
typedef TYPE_2__ usercmd_t ;
struct TYPE_7__ {TYPE_1__* ps; } ;
struct TYPE_5__ {scalar_t__ speed; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 float FUNC_1 (int) ;

__attribute__((used)) static float FUNC_2( usercmd_t *VAR_1 ) {
 int VAR_2;
 float VAR_3;
 float VAR_4;

 VAR_2 = FUNC_0( VAR_1->forwardmove );
 if ( FUNC_0( VAR_1->rightmove ) > VAR_2 ) {
  VAR_2 = FUNC_0( VAR_1->rightmove );
 }
 if ( FUNC_0( VAR_1->upmove ) > VAR_2 ) {
  VAR_2 = FUNC_0( VAR_1->upmove );
 }
 if ( !VAR_2 ) {
  return 0;
 }

 VAR_3 = FUNC_1( VAR_1->forwardmove * VAR_1->forwardmove
  + VAR_1->rightmove * VAR_1->rightmove + VAR_1->upmove * VAR_1->upmove );
 VAR_4 = (float)VAR_0->ps->speed * VAR_2 / ( 127.0 * VAR_3 );

 return VAR_4;
}
