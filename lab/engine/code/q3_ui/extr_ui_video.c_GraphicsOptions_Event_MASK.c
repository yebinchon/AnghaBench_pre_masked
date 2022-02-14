
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {int id; } ;
typedef TYPE_12__ menucommon_s ;
struct TYPE_29__ {int curvalue; } ;
struct TYPE_28__ {int curvalue; } ;
struct TYPE_27__ {int curvalue; } ;
struct TYPE_26__ {int curvalue; } ;
struct TYPE_25__ {int curvalue; } ;
struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {size_t curvalue; } ;
struct TYPE_22__ {size_t curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_20__ {TYPE_11__ fs; TYPE_10__ filter; TYPE_9__ geometry; TYPE_8__ texturebits; TYPE_7__ colordepth; TYPE_6__ lighting; TYPE_5__ tq; TYPE_4__ mode; TYPE_3__ ratio; TYPE_2__ list; TYPE_1__ driver; } ;
struct TYPE_19__ {int fullscreen; int filter; int geometry; int texturebits; int colordepth; int lighting; int tq; int mode; } ;
typedef TYPE_13__ InitialVideoOptions_s ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int* VAR_1 ;
 void** VAR_2 ;
 TYPE_15__ VAR_3 ;
 TYPE_13__* VAR_4 ;

__attribute__((used)) static void FUNC_6( void* VAR_5, int VAR_6 ) {
 InitialVideoOptions_s *VAR_7;

 if( VAR_6 != VAR_0 ) {
   return;
 }

 switch( ((menucommon_s*)VAR_5)->id ) {
 case 129:
  VAR_3.mode.curvalue =
   VAR_1[ VAR_3.ratio.curvalue ];


 case 131:

  if ( VAR_3.driver.curvalue == 1 )
  {
   if ( VAR_3.mode.curvalue < 2 )
    VAR_3.mode.curvalue = 2;
   else if ( VAR_3.mode.curvalue > 6 )
    VAR_3.mode.curvalue = 6;
  }
  VAR_3.ratio.curvalue =
   VAR_2[ VAR_3.mode.curvalue ];
  break;

 case 132:
  VAR_7 = &VAR_4[VAR_3.list.curvalue];

  VAR_3.mode.curvalue = FUNC_0(VAR_7->mode);
  VAR_3.ratio.curvalue =
   VAR_2[ VAR_3.mode.curvalue ];
  VAR_3.tq.curvalue = VAR_7->tq;
  VAR_3.lighting.curvalue = VAR_7->lighting;
  VAR_3.colordepth.curvalue = VAR_7->colordepth;
  VAR_3.texturebits.curvalue = VAR_7->texturebits;
  VAR_3.geometry.curvalue = VAR_7->geometry;
  VAR_3.filter.curvalue = VAR_7->filter;
  VAR_3.fs.curvalue = VAR_7->fullscreen;
  break;

 case 134:
  FUNC_2();
  break;

 case 136:
  FUNC_4();
  break;

 case 133:
  break;

 case 135:
  FUNC_4();
  FUNC_1();
  break;

 case 128:
  FUNC_4();
  FUNC_5();
  break;

 case 130:
  FUNC_4();
  FUNC_3();
  break;
 }
}
