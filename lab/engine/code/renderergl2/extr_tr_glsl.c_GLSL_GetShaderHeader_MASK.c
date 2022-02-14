
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vidHeight; scalar_t__ vidWidth; } ;
struct TYPE_9__ {int glslMajorVersion; int glslMinorVersion; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {scalar_t__ integer; } ;
typedef scalar_t__ GLenum ;
typedef char GLchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char const*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 TYPE_4__ VAR_17 ;
 TYPE_3__* VAR_18 ;
 TYPE_2__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 char* FUNC_2 (char*,int,...) ;

__attribute__((used)) static void FUNC_3( GLenum VAR_21, const GLchar *VAR_22, char *VAR_23, int VAR_24 )
{
 float VAR_25, VAR_26;

 VAR_23[0] = '\0';


 if(VAR_17.glslMajorVersion > 1 || (VAR_17.glslMajorVersion == 1 && VAR_17.glslMinorVersion >= 30))
 {
  if (VAR_17.glslMajorVersion > 1 || (VAR_17.glslMajorVersion == 1 && VAR_17.glslMinorVersion >= 50))
   FUNC_1(VAR_23, VAR_24, "#version 150\n");
  else
   FUNC_1(VAR_23, VAR_24, "#version 130\n");

  if(VAR_21 == VAR_10)
  {
   FUNC_1(VAR_23, VAR_24, "#define attribute in\n");
   FUNC_1(VAR_23, VAR_24, "#define varying out\n");
  }
  else
  {
   FUNC_1(VAR_23, VAR_24, "#define varying in\n");

   FUNC_1(VAR_23, VAR_24, "out vec4 out_Color;\n");
   FUNC_1(VAR_23, VAR_24, "#define gl_FragColor out_Color\n");
   FUNC_1(VAR_23, VAR_24, "#define texture2D texture\n");
   FUNC_1(VAR_23, VAR_24, "#define textureCubeLod textureLod\n");
   FUNC_1(VAR_23, VAR_24, "#define shadow2D texture\n");
  }
 }
 else
 {
  FUNC_1(VAR_23, VAR_24, "#version 120\n");
  FUNC_1(VAR_23, VAR_24, "#define shadow2D(a,b) shadow2D(a,b).r \n");
 }
 FUNC_1(VAR_23, VAR_24, "#ifndef M_PI\n#define M_PI 3.14159265358979323846\n#endif\n");



 FUNC_1(VAR_23, VAR_24,
      FUNC_2("#ifndef deformGen_t\n"
      "#define deformGen_t\n"
      "#define DGEN_WAVE_SIN %i\n"
      "#define DGEN_WAVE_SQUARE %i\n"
      "#define DGEN_WAVE_TRIANGLE %i\n"
      "#define DGEN_WAVE_SAWTOOTH %i\n"
      "#define DGEN_WAVE_INVERSE_SAWTOOTH %i\n"
      "#define DGEN_BULGE %i\n"
      "#define DGEN_MOVE %i\n"
      "#endif\n",
      VAR_7,
      VAR_8,
      VAR_9,
      VAR_6,
      VAR_5,
      VAR_3,
      VAR_4));

 FUNC_1(VAR_23, VAR_24,
      FUNC_2("#ifndef tcGen_t\n"
      "#define tcGen_t\n"
      "#define TCGEN_LIGHTMAP %i\n"
      "#define TCGEN_TEXTURE %i\n"
      "#define TCGEN_ENVIRONMENT_MAPPED %i\n"
      "#define TCGEN_FOG %i\n"
      "#define TCGEN_VECTOR %i\n"
      "#endif\n",
      VAR_13,
      VAR_14,
      VAR_11,
      VAR_12,
      VAR_15));

 FUNC_1(VAR_23, VAR_24,
      FUNC_2("#ifndef colorGen_t\n"
      "#define colorGen_t\n"
      "#define CGEN_LIGHTING_DIFFUSE %i\n"
      "#endif\n",
      VAR_2));

 FUNC_1(VAR_23, VAR_24,
        FUNC_2("#ifndef alphaGen_t\n"
        "#define alphaGen_t\n"
        "#define AGEN_LIGHTING_SPECULAR %i\n"
        "#define AGEN_PORTAL %i\n"
        "#endif\n",
        VAR_0,
        VAR_1));

 VAR_25 = 1.0f / ((float)VAR_16.vidWidth);
 VAR_26 = 1.0f / ((float)VAR_16.vidHeight);
 FUNC_1(VAR_23, VAR_24,
    FUNC_2("#ifndef r_FBufScale\n#define r_FBufScale vec2(%f, %f)\n#endif\n", VAR_25, VAR_26));

 if (VAR_20->integer)
  FUNC_1(VAR_23, VAR_24, "#define USE_PBR\n");

 if (VAR_18->integer)
 {
  int VAR_27 = VAR_19->integer;
  int VAR_28 = 0;

  while (VAR_27)
  {
   VAR_27 >>= 1;
   VAR_28++;
  }
  VAR_28 = FUNC_0(1, VAR_28 - 2);
  FUNC_1(VAR_23, VAR_24, FUNC_2("#define ROUGHNESS_MIPS float(%d)\n", VAR_28));
 }

 if (VAR_22)
 {
  FUNC_1(VAR_23, VAR_24, VAR_22);
 }



 FUNC_1(VAR_23, VAR_24, "#line 0\n");
}
