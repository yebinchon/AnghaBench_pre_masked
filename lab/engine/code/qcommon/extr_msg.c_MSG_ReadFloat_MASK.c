
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ readcount; scalar_t__ cursize; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_6__ {int f; int i; } ;
typedef TYPE_2__ floatint_t ;


 int FUNC_0 (TYPE_1__*,int) ;

float FUNC_1( msg_t *VAR_0 ) {
 floatint_t VAR_1;

 VAR_1.i = FUNC_0( VAR_0, 32 );
 if ( VAR_0->readcount > VAR_0->cursize ) {
  VAR_1.f = -1;
 }

 return VAR_1.f;
}
