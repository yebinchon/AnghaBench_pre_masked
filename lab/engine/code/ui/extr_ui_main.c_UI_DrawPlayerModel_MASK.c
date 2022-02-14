
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int team ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef int playerInfo_t ;
typedef int model ;
typedef int head ;
struct TYPE_5__ {int realTime; } ;
struct TYPE_7__ {TYPE_1__ uiDC; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int *,int ,int ,int*,int ,int ,void*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (int*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_6 (int *,int ,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_7 (char*) ;
 TYPE_3__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_8(rectDef_t *VAR_13) {
  static playerInfo_t VAR_14;
  char VAR_15[VAR_1];
  char VAR_16[256];
 char VAR_17[256];
 vec3_t VAR_18;
 vec3_t VAR_19;

   if (FUNC_7("ui_Q3Model")) {
  FUNC_0(VAR_15, FUNC_1("model"), sizeof(VAR_15));
  FUNC_0(VAR_17, FUNC_1("headmodel"), sizeof(VAR_17));
  if (!VAR_7) {
   VAR_7 = VAR_9;
   VAR_11 = VAR_9;
  }
  VAR_16[0] = '\0';
 } else {

  FUNC_0(VAR_16, FUNC_1("ui_teamName"), sizeof(VAR_16));
  FUNC_0(VAR_15, FUNC_1("team_model"), sizeof(VAR_15));
  FUNC_0(VAR_17, FUNC_1("team_headmodel"), sizeof(VAR_17));
  if (VAR_7) {
   VAR_7 = VAR_8;
   VAR_11 = VAR_9;
  }
 }
  if (VAR_11) {
   FUNC_6( &VAR_14, 0, sizeof(playerInfo_t) );
   VAR_18[VAR_6] = 180 - 10;
   VAR_18[VAR_2] = 0;
   VAR_18[VAR_3] = 0;
   FUNC_5( VAR_19 );
    FUNC_4( &VAR_14, VAR_15, VAR_17, VAR_16);
    FUNC_3( &VAR_14, VAR_0, VAR_4, VAR_18, VAR_12, VAR_5, VAR_8 );

    VAR_11 = VAR_8;
  }

  FUNC_2( VAR_13->x, VAR_13->y, VAR_13->w, VAR_13->h, &VAR_14, VAR_10.uiDC.realTime / 2);

}
