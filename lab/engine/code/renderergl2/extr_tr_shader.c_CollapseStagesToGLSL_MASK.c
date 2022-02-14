
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int stateBits; int alphaGen; scalar_t__ type; scalar_t__ rgbGen; int glslShaderIndex; TYPE_1__* bundle; int glslShaderGroup; scalar_t__ adjustColorsForFog; void* active; } ;
typedef TYPE_2__ shaderStage_t ;
typedef void* qboolean ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ numDeforms; } ;
struct TYPE_13__ {int lightallShader; int whiteImage; } ;
struct TYPE_11__ {scalar_t__ tcGen; scalar_t__ numTexMods; void* isLightmap; int * image; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,void*,void*,void*,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 size_t VAR_13 ;
 size_t VAR_14 ;




 void* VAR_15 ;
 void* VAR_16 ;
 TYPE_6__* VAR_17 ;
 TYPE_5__ VAR_18 ;
 TYPE_2__* VAR_19 ;
 TYPE_3__ VAR_20 ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_21, VAR_22, VAR_23;
 qboolean VAR_24 = VAR_15;


 if (VAR_18.numDeforms != 0)
 {
  VAR_24 = VAR_16;
 }

 if (!VAR_24)
 {


  if (VAR_19[0].active && VAR_19[0].bundle[0].tcGen == 130 && VAR_19[1].active)
  {
   int VAR_25 = VAR_19[1].stateBits & ( VAR_3 | VAR_6 );

   if (VAR_25 == (VAR_4 | VAR_8)
    || VAR_25 == (VAR_5 | VAR_7))
   {
    int VAR_26 = VAR_19[0].stateBits;
    int VAR_27 = VAR_19[1].stateBits;
    shaderStage_t VAR_28;

    VAR_28 = VAR_19[0];
    VAR_19[0] = VAR_19[1];
    VAR_19[1] = VAR_28;

    VAR_19[0].stateBits = VAR_26;
    VAR_19[1].stateBits = VAR_27;
   }
  }
 }

 if (!VAR_24)
 {

  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
  {
   shaderStage_t *VAR_29 = &VAR_19[VAR_21];

   if (!VAR_29->active)
    continue;

   if (VAR_29->adjustColorsForFog)
   {
    VAR_24 = VAR_16;
    break;
   }

   if (VAR_29->bundle[0].tcGen == 130)
   {
    int VAR_30 = VAR_29->stateBits & ( VAR_3 | VAR_6 );

    if (VAR_30 != (VAR_4 | VAR_8)
     && VAR_30 != (VAR_5 | VAR_7))
    {
     VAR_24 = VAR_16;
     break;
    }
   }

   switch(VAR_29->bundle[0].tcGen)
   {
    case 129:
    case 130:
    case 131:
    case 128:
     break;
    default:
     VAR_24 = VAR_16;
     break;
   }

   switch(VAR_29->alphaGen)
   {
    case 137:
    case 136:
     VAR_24 = VAR_16;
     break;
    default:
     break;
   }
  }
 }

 if (!VAR_24)
 {
  qboolean VAR_31 = VAR_15;

  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
  {
   shaderStage_t *VAR_32 = &VAR_19[VAR_21];
   shaderStage_t *VAR_33, *VAR_34, *VAR_35, *VAR_36;
   qboolean VAR_37, VAR_38, VAR_39, VAR_40;

   if (!VAR_32->active)
    continue;


   if (VAR_32->type != 135)
    continue;


   if (VAR_32->bundle[0].tcGen == 130)
    continue;

   VAR_33 = VAR_32;
   VAR_34 = ((void*)0);
   VAR_37 = VAR_15;
   VAR_35 = ((void*)0);
   VAR_36 = ((void*)0);


   for (VAR_22 = VAR_21 + 1; VAR_22 < VAR_12; VAR_22++)
   {
    shaderStage_t *VAR_41 = &VAR_19[VAR_22];

    if (!VAR_41->active)
     continue;

    switch(VAR_41->type)
    {
     case 134:
      if (!VAR_34)
      {
       VAR_34 = VAR_41;
      }
      break;

     case 133:
      if (!VAR_34)
      {
       VAR_34 = VAR_41;
       VAR_37 = VAR_16;
      }
      break;

     case 132:
      if (!VAR_35)
      {
       VAR_35 = VAR_41;
      }
      break;

     case 135:
      if (VAR_41->bundle[0].tcGen == 130)
      {
       int VAR_42 = VAR_32->stateBits & ( VAR_3 | VAR_6 );



       if (!VAR_31 || (VAR_42 != (VAR_4 | VAR_8)
        && VAR_42 != (VAR_5 | VAR_7)))
       {
        VAR_36 = VAR_41;
        VAR_31 = VAR_16;
       }
      }
      break;

     default:
      break;
    }
   }

   VAR_38 = VAR_15;
   if (VAR_33->bundle[0].tcGen == 131
       || VAR_33->bundle[0].tcGen == 130
       || VAR_33->bundle[0].tcGen == 128)
   {
    VAR_38 = VAR_16;
   }

   VAR_39 = VAR_15;
   if (VAR_33->rgbGen == VAR_1)
   {
    VAR_39 = VAR_16;
   }

   VAR_40 = VAR_15;
   if (VAR_33->rgbGen == VAR_2 || VAR_33->rgbGen == VAR_0)
   {
    VAR_40 = VAR_16;
   }

   FUNC_0(VAR_33, VAR_34, VAR_35, VAR_36, VAR_39, VAR_40, VAR_37, VAR_38);
  }


  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
  {
   shaderStage_t *VAR_43 = &VAR_19[VAR_21];

   if (!VAR_43->active)
    continue;

   if (VAR_43->bundle[0].tcGen == 130)
   {
    VAR_43->active = VAR_15;
   }
  }
 }


 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
 {
  shaderStage_t *VAR_44 = &VAR_19[VAR_21];

  if (!VAR_44->active)
   continue;

  if (VAR_44->type == 134)
  {
   VAR_44->active = VAR_15;
  }

  if (VAR_44->type == 133)
  {
   VAR_44->active = VAR_15;
  }

  if (VAR_44->type == 132)
  {
   VAR_44->active = VAR_15;
  }
 }


 VAR_23 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
 {
  if (!VAR_19[VAR_21].active)
   continue;

  if (VAR_21 == VAR_23)
  {
   VAR_23++;
   continue;
  }

  VAR_19[VAR_23] = VAR_19[VAR_21];
  VAR_19[VAR_21].active = VAR_15;
  VAR_23++;
 }



 if (VAR_17->integer && VAR_18.numDeforms == 0)
 {
  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
  {
   shaderStage_t *VAR_45 = &VAR_19[VAR_21];

   if (!VAR_45->active)
    continue;

   if (VAR_45->adjustColorsForFog)
    continue;

   if (VAR_45->bundle[VAR_13].tcGen == 130)
   {
    VAR_45->glslShaderGroup = VAR_20.lightallShader;
    VAR_45->glslShaderIndex = VAR_9;
    VAR_45->bundle[VAR_14] = VAR_45->bundle[VAR_13];
    VAR_45->bundle[VAR_13].image[0] = VAR_20.whiteImage;
    VAR_45->bundle[VAR_13].isLightmap = VAR_15;
    VAR_45->bundle[VAR_13].tcGen = 129;
   }
  }
 }


 if (VAR_18.numDeforms == 0)
 {
  for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
  {
   shaderStage_t *VAR_46 = &VAR_19[VAR_21];

   if (!VAR_46->active)
    continue;

   if (VAR_46->adjustColorsForFog)
    continue;

   if (VAR_46->rgbGen == VAR_1)
   {
    VAR_46->glslShaderGroup = VAR_20.lightallShader;
    VAR_46->glslShaderIndex = VAR_10;

    if (VAR_46->bundle[0].tcGen != 129 || VAR_46->bundle[0].numTexMods != 0)
     VAR_46->glslShaderIndex |= VAR_11;
   }
  }
 }

 return VAR_23;
}
