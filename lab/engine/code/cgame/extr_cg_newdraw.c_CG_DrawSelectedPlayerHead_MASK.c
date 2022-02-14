
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_9__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
typedef int clipHandle_t ;
struct TYPE_10__ {scalar_t__ deferred; int modelIcon; int headSkin; int headModel; int headOffset; } ;
typedef TYPE_3__ clientInfo_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_8__ {int deferShader; } ;
struct TYPE_11__ {int currentVoiceClient; TYPE_1__ media; TYPE_3__* clientinfo; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,double*,double*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 size_t FUNC_2 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (double*,int ,double*) ;
 size_t VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int* VAR_6 ;
 int FUNC_4 (int ,double*,double*) ;

__attribute__((used)) static void FUNC_5( rectDef_t *VAR_7, qboolean VAR_8, qboolean VAR_9 ) {
 clipHandle_t VAR_10;
 clientInfo_t *VAR_11;
 float VAR_12;
 vec3_t VAR_13;
 vec3_t VAR_14, VAR_15, VAR_16;


  VAR_11 = VAR_5.clientinfo + ((VAR_9) ? VAR_5.currentVoiceClient : VAR_6[FUNC_2()]);

  if (VAR_11) {
   if ( VAR_3.integer ) {
    VAR_10 = VAR_11->headModel;
    if ( !VAR_10 ) {
     return;
    }


    FUNC_4( VAR_10, VAR_14, VAR_15 );

    VAR_13[2] = -0.5 * ( VAR_14[2] + VAR_15[2] );
    VAR_13[1] = 0.5 * ( VAR_14[1] + VAR_15[1] );



    VAR_12 = 0.7 * ( VAR_15[2] - VAR_14[2] );
    VAR_13[0] = VAR_12 / 0.268;


    FUNC_3( VAR_13, VAR_11->headOffset, VAR_13 );

     VAR_16[VAR_0] = 0;
     VAR_16[VAR_2] = 180;
     VAR_16[VAR_1] = 0;

      FUNC_0( VAR_7->x, VAR_7->y, VAR_7->w, VAR_7->h, VAR_11->headModel, VAR_11->headSkin, VAR_13, VAR_16 );
   } else if ( VAR_4.integer ) {
    FUNC_1( VAR_7->x, VAR_7->y, VAR_7->w, VAR_7->h, VAR_11->modelIcon );
   }


   if ( VAR_11->deferred ) {
    FUNC_1( VAR_7->x, VAR_7->y, VAR_7->w, VAR_7->h, VAR_5.media.deferShader );
   }
  }

}
