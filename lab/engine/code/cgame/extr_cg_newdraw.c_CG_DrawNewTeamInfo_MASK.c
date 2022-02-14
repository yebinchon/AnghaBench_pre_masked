
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_15__ {float y; int x; int w; float h; } ;
typedef TYPE_4__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
struct TYPE_16__ {int icon; } ;
typedef TYPE_5__ gitem_t ;
struct TYPE_17__ {scalar_t__ team; char const* name; int powerups; size_t curWeapon; scalar_t__ location; int teamTask; int armor; int health; scalar_t__ infoValid; } ;
typedef TYPE_6__ clientInfo_t ;
struct TYPE_20__ {int time; TYPE_2__* snap; } ;
struct TYPE_19__ {scalar_t__ weaponIcon; } ;
struct TYPE_14__ {scalar_t__ deferShader; scalar_t__ heartShader; } ;
struct TYPE_18__ {int orderTime; int currentOrder; scalar_t__ orderPending; TYPE_3__ media; TYPE_6__* clientinfo; } ;
struct TYPE_12__ {scalar_t__* persistant; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;


 TYPE_5__* FUNC_0 (int) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,float,int,int,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (float*,int,float,float,int *,char const*,int ,int ) ;
 int FUNC_6 (char const*,float,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(rectDef_t *VAR_10, float VAR_11, float VAR_12, float VAR_13, vec4_t VAR_14, qhandle_t VAR_15) {
 int VAR_16;
 float VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 const char *VAR_22;
 vec4_t VAR_23;
 float VAR_24, VAR_25, VAR_26, VAR_27;
 clientInfo_t *VAR_28;
 gitem_t *VAR_29;
 qhandle_t VAR_30;


 VAR_24 = 0;
 VAR_21 = (VAR_8 > 8) ? 8 : VAR_8;
 for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++) {
  VAR_28 = VAR_7.clientinfo + VAR_9[VAR_18];
  if ( VAR_28->infoValid && VAR_28->team == VAR_5.snap->ps.persistant[VAR_2]) {
   VAR_20 = FUNC_6( VAR_28->name, VAR_13, 0);
   if (VAR_20 > VAR_24)
    VAR_24 = VAR_20;
  }
 }


 VAR_25 = 0;
 for (VAR_18 = 1; VAR_18 < VAR_1; VAR_18++) {
  VAR_22 = FUNC_1(VAR_0 + VAR_18);
  if (VAR_22 && *VAR_22) {
   VAR_20 = FUNC_6(VAR_22, VAR_13, 0);
   if (VAR_20 > VAR_25)
    VAR_25 = VAR_20;
  }
 }

 VAR_17 = VAR_10->y;

 for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++) {
  VAR_28 = VAR_7.clientinfo + VAR_9[VAR_18];
  if ( VAR_28->infoValid && VAR_28->team == VAR_5.snap->ps.persistant[VAR_2]) {

   VAR_16 = VAR_10->x + 1;
   for (VAR_19 = 0; VAR_19 <= VAR_4; VAR_19++) {
    if (VAR_28->powerups & (1 << VAR_19)) {

     VAR_29 = FUNC_0( VAR_19 );

     if (VAR_29) {
      FUNC_2( VAR_16, VAR_17, VAR_3, VAR_3, FUNC_7( VAR_29->icon ) );
      VAR_16 += VAR_3;
     }
    }
   }


   VAR_16 = VAR_10->x + (VAR_3 * 3) + 2;

   FUNC_3( VAR_28->health, VAR_28->armor, VAR_23 );
   FUNC_8(VAR_23);
   FUNC_2( VAR_16, VAR_17 + 1, VAR_3 - 2, VAR_3 - 2, VAR_7.media.heartShader );





   VAR_16 += VAR_3 + 1;
   FUNC_8(((void*)0));
   if (VAR_7.orderPending) {

    if ( VAR_5.time > VAR_7.orderTime - 2500 && (VAR_5.time >> 9 ) & 1 ) {
     VAR_30 = 0;
    } else {
     VAR_30 = FUNC_4(VAR_7.currentOrder);
    }
   } else {
    VAR_30 = FUNC_4(VAR_28->teamTask);
   }

   if (VAR_30) {
    FUNC_2( VAR_16, VAR_17, VAR_3, VAR_3, VAR_30);
   }

   VAR_16 += VAR_3 + 1;

   VAR_27 = VAR_10->w - VAR_16;
   VAR_26 = VAR_16 + VAR_27 / 3;



   FUNC_5(&VAR_26, VAR_16, VAR_17 + VAR_12, VAR_13, VAR_14, VAR_28->name, 0, 0);

   VAR_22 = FUNC_1(VAR_0 + VAR_28->location);
   if (!VAR_22 || !*VAR_22) {
    VAR_22 = "unknown";
   }

   VAR_16 += VAR_27 / 3 + 2;
   VAR_26 = VAR_10->w - 4;

   FUNC_5(&VAR_26, VAR_16, VAR_17 + VAR_12, VAR_13, VAR_14, VAR_22, 0, 0);
   VAR_17 += VAR_12 + 2;
   if ( VAR_17 + VAR_12 + 2 > VAR_10->y + VAR_10->h ) {
    break;
   }

  }
 }
}
