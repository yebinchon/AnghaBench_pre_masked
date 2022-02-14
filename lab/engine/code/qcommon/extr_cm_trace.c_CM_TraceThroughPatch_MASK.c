
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float fraction; int contents; int surfaceFlags; } ;
struct TYPE_8__ {TYPE_1__ trace; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_9__ {int contents; int surfaceFlags; int pc; } ;
typedef TYPE_3__ cPatch_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;

void FUNC_1( traceWork_t *VAR_1, cPatch_t *VAR_2 ) {
 float VAR_3;

 VAR_0++;

 VAR_3 = VAR_1->trace.fraction;

 FUNC_0( VAR_1, VAR_2->pc );

 if ( VAR_1->trace.fraction < VAR_3 ) {
  VAR_1->trace.surfaceFlags = VAR_2->surfaceFlags;
  VAR_1->trace.contents = VAR_2->contents;
 }
}
