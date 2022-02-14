
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {int tex; } ;
struct TYPE_17__ {int tex; } ;
struct TYPE_16__ {int tex; } ;
struct TYPE_27__ {int tex; } ;
struct TYPE_28__ {TYPE_8__ val; } ;
struct TYPE_25__ {int tex; } ;
struct TYPE_26__ {TYPE_6__ val; } ;
struct TYPE_24__ {int tex; } ;
struct TYPE_23__ {int tex; } ;
struct TYPE_22__ {int tex; } ;
struct TYPE_21__ {int tex; } ;
struct TYPE_20__ {int tex; } ;
struct TYPE_19__ {TYPE_12__ bump; TYPE_11__ translucency; TYPE_10__ eta; TYPE_9__ transparency; TYPE_7__ reflection; TYPE_5__ glossiness; TYPE_4__ specularity; TYPE_3__ diffuse; TYPE_2__ luminosity; TYPE_1__ color; int shader; struct TYPE_19__* srcname; struct TYPE_19__* name; } ;
typedef TYPE_13__ lwSurface ;
typedef int ListFreeFunc ;


 int FUNC_0 (TYPE_13__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( lwSurface *VAR_2 ){
 if ( VAR_2 ) {
  if ( VAR_2->name ) {
   FUNC_0( VAR_2->name );
  }
  if ( VAR_2->srcname ) {
   FUNC_0( VAR_2->srcname );
  }

  FUNC_1( VAR_2->shader, (ListFreeFunc) VAR_0 );

  FUNC_1( VAR_2->color.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->luminosity.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->diffuse.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->specularity.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->glossiness.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->reflection.val.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->transparency.val.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->eta.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->translucency.tex, (ListFreeFunc) VAR_1 );
  FUNC_1( VAR_2->bump.tex, (ListFreeFunc) VAR_1 );

  FUNC_0( VAR_2 );
 }
}
