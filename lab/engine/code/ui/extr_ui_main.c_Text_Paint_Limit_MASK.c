
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


typedef int * vec4_t ;
typedef int newColor ;
struct TYPE_10__ {float top; float xSkip; int glyph; int t2; int s2; int t; int s; int imageHeight; int imageWidth; } ;
typedef TYPE_3__ glyphInfo_t ;
struct TYPE_11__ {float glyphScale; TYPE_3__* glyphs; } ;
typedef TYPE_4__ fontInfo_t ;
struct TYPE_8__ {TYPE_4__ bigFont; TYPE_4__ smallFont; TYPE_4__ textFont; } ;
struct TYPE_9__ {TYPE_1__ Assets; } ;
struct TYPE_14__ {TYPE_2__ uiDC; } ;
struct TYPE_13__ {float value; } ;
struct TYPE_12__ {float value; } ;


 size_t FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (float,float,int ,int ,float,int ,int ,int ,int ,int ) ;
 float FUNC_3 (char const*,float,int) ;
 int * VAR_0 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;

__attribute__((used)) static void FUNC_7(float *VAR_4, float VAR_5, float VAR_6, float VAR_7, vec4_t VAR_8, const char* VAR_9, float VAR_10, int VAR_11) {
  int VAR_12, VAR_13;
 vec4_t VAR_14;
 glyphInfo_t *VAR_15;
  if (VAR_9) {
    const char *VAR_16 = VAR_9;
  float VAR_17 = *VAR_4;
  float VAR_18;
  fontInfo_t *VAR_19 = &VAR_1.uiDC.Assets.textFont;
  if (VAR_7 <= VAR_3.value) {
   VAR_19 = &VAR_1.uiDC.Assets.smallFont;
  } else if (VAR_7 > VAR_2.value) {
   VAR_19 = &VAR_1.uiDC.Assets.bigFont;
  }
  VAR_18 = VAR_7 * VAR_19->glyphScale;
  FUNC_6( VAR_8 );
    VAR_12 = FUNC_5(VAR_9);
  if (VAR_11 > 0 && VAR_12 > VAR_11) {
   VAR_12 = VAR_11;
  }
  VAR_13 = 0;
  while (VAR_16 && *VAR_16 && VAR_13 < VAR_12) {
   VAR_15 = &VAR_19->glyphs[*VAR_16 & 255];
   if ( FUNC_1( VAR_16 ) ) {
    FUNC_4( VAR_14, VAR_0[FUNC_0(*(VAR_16+1))], sizeof( VAR_14 ) );
    VAR_14[3] = VAR_8[3];
    FUNC_6( VAR_14 );
    VAR_16 += 2;
    continue;
   } else {
       float VAR_20 = VAR_18 * VAR_15->top;
    if (FUNC_3(VAR_16, VAR_7, 1) + VAR_5 > VAR_17) {
     *VAR_4 = 0;
     break;
    }
      FUNC_2(VAR_5, VAR_6 - VAR_20,
                    VAR_15->imageWidth,
                   VAR_15->imageHeight,
                   VAR_18,
                 VAR_15->s,
               VAR_15->t,
               VAR_15->s2,
              VAR_15->t2,
             VAR_15->glyph);
       VAR_5 += (VAR_15->xSkip * VAR_18) + VAR_10;
    *VAR_4 = VAR_5;
    VAR_13++;
    VAR_16++;
     }
  }
   FUNC_6( ((void*)0) );
  }

}
