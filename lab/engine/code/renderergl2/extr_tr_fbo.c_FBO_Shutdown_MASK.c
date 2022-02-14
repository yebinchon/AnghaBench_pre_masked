
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int maxColorAttachments; int framebufferObject; } ;
struct TYPE_7__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_6__ {int numFBOs; TYPE_1__** fbos; } ;
struct TYPE_5__ {scalar_t__ frameBuffer; scalar_t__ stencilBuffer; scalar_t__ depthBuffer; scalar_t__* colorBuffers; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (int,scalar_t__*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_3 ;

void FUNC_4(void)
{
 int VAR_4, VAR_5;
 FBO_t *VAR_6;

 VAR_2.Printf(VAR_0, "------- FBO_Shutdown -------\n");

 if(!VAR_1.framebufferObject)
  return;

 FUNC_0(((void*)0));

 for(VAR_4 = 0; VAR_4 < VAR_3.numFBOs; VAR_4++)
 {
  VAR_6 = VAR_3.fbos[VAR_4];

  for(VAR_5 = 0; VAR_5 < VAR_1.maxColorAttachments; VAR_5++)
  {
   if(VAR_6->colorBuffers[VAR_5])
    FUNC_2(1, &VAR_6->colorBuffers[VAR_5]);
  }

  if(VAR_6->depthBuffer)
   FUNC_2(1, &VAR_6->depthBuffer);

  if(VAR_6->stencilBuffer)
   FUNC_2(1, &VAR_6->stencilBuffer);

  if(VAR_6->frameBuffer)
   FUNC_1(1, &VAR_6->frameBuffer);
 }
}
