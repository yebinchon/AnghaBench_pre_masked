
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct sun4i_backend {TYPE_1__ engine; } ;
struct drm_framebuffer {int* pitches; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sun4i_backend *VAR_0,
        struct drm_framebuffer *VAR_1,
        dma_addr_t VAR_2)
{

 FUNC_0("Setting packed YUV buffer address to %pad\n", &VAR_2);
 FUNC_3(VAR_0->engine.regs, FUNC_1(0), VAR_2);

 FUNC_0("Layer line width: %d bits\n", VAR_1->pitches[0] * 8);
 FUNC_3(VAR_0->engine.regs, FUNC_2(0),
       VAR_1->pitches[0] * 8);

 return 0;
}
