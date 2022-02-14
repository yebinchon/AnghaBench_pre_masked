
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_7__* name; } ;
struct TYPE_13__ {TYPE_7__* string; } ;
struct TYPE_12__ {TYPE_7__* data; TYPE_7__* server; TYPE_7__* name; } ;
struct TYPE_11__ {TYPE_7__* suffix; TYPE_7__* prefix; } ;
struct TYPE_10__ {TYPE_7__* name; } ;
struct TYPE_15__ {TYPE_5__ cycle; TYPE_4__ xref; TYPE_3__ anim; TYPE_2__ seq; TYPE_1__ still; } ;
struct TYPE_16__ {int type; TYPE_6__ source; scalar_t__ pfilter; scalar_t__ ifilter; } ;
typedef TYPE_7__ lwClip ;
typedef int ListFreeFunc ;







 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,int ) ;

void FUNC_2( lwClip *VAR_1 ){
 if ( VAR_1 ) {
  FUNC_1( (void*) VAR_1->ifilter, (ListFreeFunc) VAR_0 );
  FUNC_1( (void*) VAR_1->pfilter, (ListFreeFunc) VAR_0 );

  switch ( VAR_1->type ) {
  case 129:
   FUNC_0( VAR_1->source.still.name );
   break;

  case 131:
   FUNC_0( VAR_1->source.seq.prefix );
   FUNC_0( VAR_1->source.seq.suffix );
   break;

  case 132:
   FUNC_0( VAR_1->source.anim.name );
   FUNC_0( VAR_1->source.anim.server );
   FUNC_0( VAR_1->source.anim.data );
   break;

  case 128:
   FUNC_0( VAR_1->source.xref.string );
   break;

  case 130:
   FUNC_0( VAR_1->source.cycle.name );
   break;

  default:
   break;
  }

  FUNC_0( VAR_1 );
 }
}
