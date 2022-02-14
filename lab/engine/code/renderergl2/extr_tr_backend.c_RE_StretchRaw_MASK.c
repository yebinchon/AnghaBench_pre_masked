
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec2_t ;
typedef int qboolean ;
typedef int byte ;
struct TYPE_14__ {scalar_t__ framePostProcessed; } ;
struct TYPE_13__ {scalar_t__ framebufferObject; } ;
struct TYPE_12__ {int modelviewProjection; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int (* Milliseconds ) () ;int (* Printf ) (int ,char*,int,int,int) ;int (* Error ) (int ,char*,int,int) ;} ;
struct TYPE_9__ {scalar_t__ numIndexes; } ;
struct TYPE_8__ {int textureColorShader; int * renderFbo; int * scratchImage; int registered; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int,int,int,int const*,int,int ) ;
 int FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,float,int) ;
 int FUNC_11 (int ,int,int,float,float) ;
 TYPE_7__ VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_12 () ;
 TYPE_4__* VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*,int,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,char*,int,int,int) ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;

void FUNC_17 (int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, const byte *VAR_19, int VAR_20, qboolean VAR_21) {
 int VAR_22, VAR_23;
 int VAR_24, VAR_25;
 vec4_t VAR_26[4];
 vec2_t VAR_27[4];

 if ( !VAR_12.registered ) {
  return;
 }
 FUNC_9();

 if ( VAR_11.numIndexes ) {
  FUNC_5();
 }


 FUNC_12();

 VAR_24 = 0;
 if ( VAR_9->integer ) {
  VAR_24 = VAR_10.Milliseconds();
 }


 for ( VAR_22 = 0 ; ( 1 << VAR_22 ) < VAR_17 ; VAR_22++ ) {
 }
 for ( VAR_23 = 0 ; ( 1 << VAR_23 ) < VAR_18 ; VAR_23++ ) {
 }
 if ( ( 1 << VAR_22 ) != VAR_17 || ( 1 << VAR_23 ) != VAR_18) {
  VAR_10.Error (VAR_0, "Draw_StretchRaw: size not a power of 2: %i by %i", VAR_17, VAR_18);
 }

 FUNC_8 (VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
 FUNC_4(VAR_12.scratchImage[VAR_20], VAR_2);

 if ( VAR_9->integer ) {
  VAR_25 = VAR_10.Milliseconds();
  VAR_10.Printf( VAR_1, "qglTexSubImage2D %i, %i: %i msec\n", VAR_17, VAR_18, VAR_25 - VAR_24 );
 }


 if (VAR_7.framebufferObject)
 {
  FUNC_0(VAR_5.framePostProcessed ? ((void*)0) : VAR_12.renderFbo);
 }

 FUNC_7();

 FUNC_11(VAR_26[0], VAR_13, VAR_14, 0.0f, 1.0f);
 FUNC_11(VAR_26[1], VAR_13 + VAR_15, VAR_14, 0.0f, 1.0f);
 FUNC_11(VAR_26[2], VAR_13 + VAR_15, VAR_14 + VAR_16, 0.0f, 1.0f);
 FUNC_11(VAR_26[3], VAR_13, VAR_14 + VAR_16, 0.0f, 1.0f);

 FUNC_10(VAR_27[0], 0.5f / VAR_17, 0.5f / VAR_18);
 FUNC_10(VAR_27[1], (VAR_17 - 0.5f) / VAR_17, 0.5f / VAR_18);
 FUNC_10(VAR_27[2], (VAR_17 - 0.5f) / VAR_17, (VAR_18 - 0.5f) / VAR_18);
 FUNC_10(VAR_27[3], 0.5f / VAR_17, (VAR_18 - 0.5f) / VAR_18);

 FUNC_1(&VAR_12.textureColorShader);

 FUNC_2(&VAR_12.textureColorShader, VAR_4, VAR_8.modelviewProjection);
 FUNC_3(&VAR_12.textureColorShader, VAR_3, VAR_6);

 FUNC_6(VAR_26, VAR_27);
}
