
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ glslShaderGroup; int glslShaderIndex; int rgbGen; int alphaGen; TYPE_1__* bundle; int active; } ;
typedef TYPE_2__ shaderStage_t ;
struct TYPE_11__ {int deformation; } ;
typedef TYPE_3__ deformStage_t ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int vertexAttribs; int numDeforms; TYPE_3__* deforms; scalar_t__ defaultShader; scalar_t__ isPortal; } ;
struct TYPE_12__ {scalar_t__ lightallShader; } ;
struct TYPE_9__ {scalar_t__* image; int tcGen; } ;





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



 TYPE_8__* VAR_10 ;
 TYPE_7__* VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_4__ VAR_14 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_15, VAR_16;


 VAR_12.vertexAttribs = VAR_4 | VAR_3;


 if (VAR_12.isPortal)
 {
  VAR_12.vertexAttribs |= VAR_3;
 }

 if (VAR_12.defaultShader)
 {
  VAR_12.vertexAttribs |= VAR_6;
  return;
 }

 if(VAR_12.numDeforms)
 {
  for ( VAR_15 = 0; VAR_15 < VAR_12.numDeforms; VAR_15++)
  {
   deformStage_t *VAR_17 = &VAR_12.deforms[VAR_15];

   switch (VAR_17->deformation)
   {
    case 146:
     VAR_12.vertexAttribs |= VAR_3 | VAR_6;
     break;

    case 148:
     VAR_12.vertexAttribs |= VAR_3 | VAR_0;
     break;

    case 133:
    case 143:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
     VAR_12.vertexAttribs |= VAR_3;
     break;

    default:
    case 144:
    case 145:
    case 142:
    case 147:
     break;
   }
  }
 }

 for ( VAR_16 = 0; VAR_16 < VAR_8; VAR_16++ )
 {
  shaderStage_t *VAR_18 = &VAR_13[VAR_16];

  if ( !VAR_18->active )
  {
   break;
  }

  if (VAR_18->glslShaderGroup == VAR_14.lightallShader)
  {
   VAR_12.vertexAttribs |= VAR_3;

   if ((VAR_18->glslShaderIndex & VAR_7) && !(VAR_10->integer == 0 && VAR_11->integer == 0))
   {
    VAR_12.vertexAttribs |= VAR_5;
   }

   switch (VAR_18->glslShaderIndex & VAR_7)
   {
    case 132:
    case 131:
     VAR_12.vertexAttribs |= VAR_2;
     break;
    default:
     break;
   }
  }

  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  {
   if ( VAR_18->bundle[VAR_15].image[0] == 0 )
   {
    continue;
   }

   switch(VAR_18->bundle[VAR_15].tcGen)
   {
    case 128:
     VAR_12.vertexAttribs |= VAR_6;
     break;
    case 129:
     VAR_12.vertexAttribs |= VAR_1;
     break;
    case 130:
     VAR_12.vertexAttribs |= VAR_3;
     break;

    default:
     break;
   }
  }

  switch(VAR_18->rgbGen)
  {
   case 154:
   case 150:
   case 153:
   case 149:
   case 151:
    VAR_12.vertexAttribs |= VAR_0;
    break;

   case 152:
    VAR_12.vertexAttribs |= VAR_3;
    break;

   default:
    break;
  }

  switch(VAR_18->alphaGen)
  {
   case 157:
    VAR_12.vertexAttribs |= VAR_3;
    break;

   case 155:
   case 156:
    VAR_12.vertexAttribs |= VAR_0;
    break;

   default:
    break;
  }
 }
}
