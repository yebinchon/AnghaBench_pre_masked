
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_21__ {int chan; } ;
typedef TYPE_13__ lwTexture ;
struct TYPE_20__ {TYPE_13__* tex; } ;
struct TYPE_19__ {TYPE_13__* tex; } ;
struct TYPE_18__ {TYPE_13__* tex; } ;
struct TYPE_30__ {TYPE_13__* tex; } ;
struct TYPE_31__ {TYPE_8__ val; } ;
struct TYPE_28__ {TYPE_13__* tex; } ;
struct TYPE_29__ {TYPE_6__ val; } ;
struct TYPE_27__ {TYPE_13__* tex; } ;
struct TYPE_26__ {TYPE_13__* tex; } ;
struct TYPE_25__ {TYPE_13__* tex; } ;
struct TYPE_24__ {TYPE_13__* tex; } ;
struct TYPE_23__ {TYPE_13__* tex; } ;
struct TYPE_22__ {TYPE_12__ bump; TYPE_11__ translucency; TYPE_10__ eta; TYPE_9__ transparency; TYPE_7__ reflection; TYPE_5__ glossiness; TYPE_4__ specularity; TYPE_3__ diffuse; TYPE_2__ luminosity; TYPE_1__ color; } ;
typedef TYPE_14__ lwSurface ;
typedef int ListCompareFunc ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (void**,TYPE_13__*,int ) ;

__attribute__((used)) static int FUNC_1( lwSurface *VAR_1, lwTexture *VAR_2 ){
 lwTexture **VAR_3;

 switch ( VAR_2->chan ) {
 case 136: VAR_3 = &VAR_1->color.tex; break;
 case 133: VAR_3 = &VAR_1->luminosity.tex; break;
 case 135: VAR_3 = &VAR_1->diffuse.tex; break;
 case 130: VAR_3 = &VAR_1->specularity.tex; break;
 case 134: VAR_3 = &VAR_1->glossiness.tex; break;
 case 132: VAR_3 = &VAR_1->reflection.val.tex; break;
 case 129: VAR_3 = &VAR_1->transparency.val.tex; break;
 case 131: VAR_3 = &VAR_1->eta.tex; break;
 case 128: VAR_3 = &VAR_1->translucency.tex; break;
 case 137: VAR_3 = &VAR_1->bump.tex; break;
 default: return 0;
 }

 FUNC_0( (void **) VAR_3, VAR_2, (ListCompareFunc) VAR_0 );
 return 1;
}
