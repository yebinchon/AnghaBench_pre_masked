
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
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_22__ {int glslShaderIndex; int glslShaderGroup; TYPE_1__* bundle; int specularScale; int normalScale; int type; } ;
typedef TYPE_2__ shaderStage_t ;
typedef scalar_t__ qboolean ;
typedef int imgFlags_t ;
struct TYPE_23__ {int flags; int imgName; } ;
typedef TYPE_3__ image_t ;
struct TYPE_29__ {scalar_t__ integer; } ;
struct TYPE_28__ {scalar_t__ integer; } ;
struct TYPE_27__ {scalar_t__ integer; } ;
struct TYPE_26__ {scalar_t__ integer; } ;
struct TYPE_25__ {size_t lightmapIndex; } ;
struct TYPE_24__ {int lightallShader; TYPE_3__** deluxemaps; scalar_t__ worldDeluxeMapping; } ;
struct TYPE_21__ {scalar_t__ numTexMods; TYPE_3__** image; scalar_t__ numImageAnimations; } ;
struct TYPE_20__ {float value; } ;
struct TYPE_19__ {float value; } ;
struct TYPE_18__ {float value; } ;


 int FUNC_0 (int ,char*,int) ;
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
 int VAR_10 ;
 int FUNC_1 (char*,int,char*) ;
 TYPE_3__* FUNC_2 (char*,int ,int) ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,float,float,float,float) ;
 scalar_t__ VAR_17 ;
 TYPE_12__* VAR_18 ;
 TYPE_11__* VAR_19 ;
 TYPE_10__* VAR_20 ;
 TYPE_9__* VAR_21 ;
 TYPE_8__* VAR_22 ;
 TYPE_7__* VAR_23 ;
 TYPE_6__* VAR_24 ;
 TYPE_5__ VAR_25 ;
 int FUNC_5 (char*) ;
 TYPE_4__ VAR_26 ;

__attribute__((used)) static void FUNC_6(shaderStage_t *VAR_27,
 shaderStage_t *VAR_28, shaderStage_t *VAR_29, shaderStage_t *VAR_30,
 qboolean VAR_31, qboolean VAR_32, qboolean VAR_33, qboolean VAR_34)
{
 int VAR_35 = 0;




 VAR_27->type = VAR_11;

 if (VAR_30)
 {

  VAR_27->bundle[VAR_14] = VAR_30->bundle[0];
  VAR_35 |= VAR_5;
 }
 else if (VAR_31)
 {
  VAR_35 |= VAR_6;
 }
 else if (VAR_32)
 {
  VAR_35 |= VAR_7;
 }

 if (VAR_21->integer && VAR_26.worldDeluxeMapping && VAR_30 && VAR_25.lightmapIndex >= 0)
 {

  VAR_27->bundle[VAR_12] = VAR_30->bundle[0];
  VAR_27->bundle[VAR_12].image[0] = VAR_26.deluxemaps[VAR_25.lightmapIndex];
 }

 if (VAR_22->integer)
 {
  image_t *VAR_36;
  if (VAR_28)
  {

   VAR_27->bundle[VAR_15] = VAR_28->bundle[0];
   if (VAR_33 && VAR_23->integer)
    VAR_35 |= VAR_8;

   FUNC_3(VAR_28->normalScale, VAR_27->normalScale);
  }
  else if ((VAR_30 || VAR_31 || VAR_32) && (VAR_36 = VAR_27->bundle[VAR_13].image[0]))
  {
   char VAR_37[VAR_10];
   image_t *VAR_38;
   imgFlags_t VAR_39 = (VAR_36->flags & ~VAR_0) | VAR_1;


   FUNC_0(VAR_36->imgName, VAR_37, VAR_10);
   FUNC_1(VAR_37, VAR_10, "_nh");

   VAR_38 = FUNC_2(VAR_37, VAR_4, VAR_39);

   if (VAR_38)
   {
    VAR_33 = VAR_17;
   }
   else
   {

    VAR_37[FUNC_5(VAR_37) - 1] = '\0';
    VAR_38 = FUNC_2(VAR_37, VAR_3, VAR_39);
   }

   if (VAR_38)
   {
    VAR_27->bundle[VAR_15] = VAR_27->bundle[0];
    VAR_27->bundle[VAR_15].numImageAnimations = 0;
    VAR_27->bundle[VAR_15].image[0] = VAR_38;

    if (VAR_33 && VAR_23->integer)
     VAR_35 |= VAR_8;

    FUNC_4(VAR_27->normalScale, VAR_18->value, VAR_19->value, 1.0f, VAR_20->value);
   }
  }
 }

 if (VAR_24->integer)
 {
  image_t *VAR_40;
  if (VAR_29)
  {

   VAR_27->bundle[VAR_16] = VAR_29->bundle[0];
   FUNC_3(VAR_29->specularScale, VAR_27->specularScale);
  }
  else if ((VAR_30 || VAR_31 || VAR_32) && (VAR_40 = VAR_27->bundle[VAR_13].image[0]))
  {
   char VAR_41[VAR_10];
   image_t *VAR_42;
   imgFlags_t VAR_43 = (VAR_40->flags & ~VAR_0) | VAR_1;

   FUNC_0(VAR_40->imgName, VAR_41, VAR_10);
   FUNC_1(VAR_41, VAR_10, "_s");

   VAR_42 = FUNC_2(VAR_41, VAR_2, VAR_43);

   if (VAR_42)
   {
    VAR_27->bundle[VAR_16] = VAR_27->bundle[0];
    VAR_27->bundle[VAR_16].numImageAnimations = 0;
    VAR_27->bundle[VAR_16].image[0] = VAR_42;

    FUNC_4(VAR_27->specularScale, 1.0f, 1.0f, 1.0f, 1.0f);
   }
  }
 }

 if (VAR_34 || VAR_27->bundle[0].numTexMods)
 {
  VAR_35 |= VAR_9;
 }



 VAR_27->glslShaderGroup = VAR_26.lightallShader;
 VAR_27->glslShaderIndex = VAR_35;
}
