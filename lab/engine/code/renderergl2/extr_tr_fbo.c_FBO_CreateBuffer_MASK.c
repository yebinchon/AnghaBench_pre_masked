
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int qboolean ;
struct TYPE_7__ {scalar_t__ framebufferMultisample; } ;
struct TYPE_6__ {int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_5__ {int colorFormat; scalar_t__* colorBuffers; int depthFormat; scalar_t__ depthBuffer; int stencilFormat; scalar_t__ stencilBuffer; int packedDepthStencilFormat; scalar_t__ packedDepthStencilBuffer; int frameBuffer; int height; int width; } ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ FBO_t ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;





 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;
 int FUNC_3 (scalar_t__,int,int,int ,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(FBO_t *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 uint32_t *VAR_11;
 GLenum VAR_12;
 qboolean VAR_13;

 switch(VAR_8)
 {
  case 140:
  case 136:
  case 137:
  case 133:
  case 139:
  case 135:
  case 138:
  case 134:
   VAR_7->colorFormat = VAR_8;
   VAR_11 = &VAR_7->colorBuffers[VAR_9];
   VAR_12 = VAR_0 + VAR_9;
   break;

  case 145:
  case 144:
  case 143:
  case 142:
   VAR_7->depthFormat = VAR_8;
   VAR_11 = &VAR_7->depthBuffer;
   VAR_12 = VAR_1;
   break;

  case 132:
  case 131:
  case 129:
  case 128:
  case 130:
   VAR_7->stencilFormat = VAR_8;
   VAR_11 = &VAR_7->stencilBuffer;
   VAR_12 = VAR_3;
   break;

  case 141:
  case 146:
   VAR_7->packedDepthStencilFormat = VAR_8;
   VAR_11 = &VAR_7->packedDepthStencilBuffer;
   VAR_12 = 0;
   break;

  default:
   VAR_6.Printf(VAR_4, "FBO_CreateBuffer: invalid format %d\n", VAR_8);
   return;
 }

 VAR_13 = *VAR_11 == 0;
 if (VAR_13)
  FUNC_0(1, VAR_11);

 if (VAR_10 && VAR_5.framebufferMultisample)
  FUNC_3(*VAR_11, VAR_10, VAR_8, VAR_7->width, VAR_7->height);
 else
  FUNC_2(*VAR_11, VAR_8, VAR_7->width, VAR_7->height);

 if(VAR_13)
 {
  if (VAR_12 == 0)
  {
   FUNC_1(VAR_7->frameBuffer, VAR_1, VAR_2, *VAR_11);
   FUNC_1(VAR_7->frameBuffer, VAR_3, VAR_2, *VAR_11);
  }
  else
  {
   FUNC_1(VAR_7->frameBuffer, VAR_12, VAR_2, *VAR_11);
  }
 }
}
