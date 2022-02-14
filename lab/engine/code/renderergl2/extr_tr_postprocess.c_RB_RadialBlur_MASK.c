
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* ivec4_t ;
struct TYPE_8__ {int vidWidth; int vidHeight; } ;
struct TYPE_7__ {int width; int height; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (TYPE_1__*,float*,int *,TYPE_1__*,float*,int *,float*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (float*,float,float,float,float) ;
 TYPE_2__ VAR_2 ;
 float FUNC_2 (float,float const) ;

__attribute__((used)) static void FUNC_3(FBO_t *VAR_3, FBO_t *VAR_4, int VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11, float VAR_12, float VAR_13)
{
 ivec4_t VAR_14, VAR_15;
 int VAR_16, VAR_17;
 vec4_t VAR_18;
 const float VAR_19 = 1.f / VAR_5;
 const float VAR_20 = FUNC_2(VAR_6, VAR_19);
 float VAR_21;

 VAR_13 *= VAR_19;
 FUNC_1(VAR_18, VAR_13, VAR_13, VAR_13, 1.0f);

 VAR_16 = VAR_3 ? VAR_3->width : VAR_2.vidWidth;
 VAR_17 = VAR_3 ? VAR_3->height : VAR_2.vidHeight;

 FUNC_1(VAR_14, 0, 0, VAR_16, VAR_17);

 FUNC_1(VAR_15, VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_0(VAR_3, VAR_14, ((void*)0), VAR_4, VAR_15, ((void*)0), VAR_18, 0);

 --VAR_5;
 VAR_21 = VAR_20;
 while (VAR_5 > 0)
 {
  float VAR_22 = 1.f / VAR_21;
  float VAR_23 = VAR_11 * (1.f - VAR_22);
  float VAR_24 = (1.0f - VAR_12) * (1.f - VAR_22);

  VAR_14[0] = VAR_23 * VAR_16;
  VAR_14[1] = VAR_24 * VAR_17;
  VAR_14[2] = VAR_22 * VAR_16;
  VAR_14[3] = VAR_22 * VAR_17;

  FUNC_0(VAR_3, VAR_14, ((void*)0), VAR_4, VAR_15, ((void*)0), VAR_18, VAR_1 | VAR_0 );

  VAR_21 *= VAR_20;
  --VAR_5;
 }
}
