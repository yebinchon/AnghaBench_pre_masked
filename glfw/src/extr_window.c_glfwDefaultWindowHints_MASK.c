
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* retina; } ;
struct TYPE_7__ {int major; int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; TYPE_1__ ns; void* doublebuffer; void* focusOnShow; void* centerCursor; void* autoIconify; void* focused; void* decorated; void* visible; void* resizable; scalar_t__ minor; int source; int client; } ;
struct TYPE_6__ {TYPE_3__ window; int refreshRate; TYPE_3__ framebuffer; TYPE_3__ context; } ;
struct TYPE_8__ {TYPE_2__ hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void FUNC_2(void)
{
    FUNC_0();


    FUNC_1(&VAR_4.hints.context, 0, sizeof(VAR_4.hints.context));
    VAR_4.hints.context.client = VAR_2;
    VAR_4.hints.context.source = VAR_1;
    VAR_4.hints.context.major = 1;
    VAR_4.hints.context.minor = 0;


    FUNC_1(&VAR_4.hints.window, 0, sizeof(VAR_4.hints.window));
    VAR_4.hints.window.resizable = VAR_3;
    VAR_4.hints.window.visible = VAR_3;
    VAR_4.hints.window.decorated = VAR_3;
    VAR_4.hints.window.focused = VAR_3;
    VAR_4.hints.window.autoIconify = VAR_3;
    VAR_4.hints.window.centerCursor = VAR_3;
    VAR_4.hints.window.focusOnShow = VAR_3;



    FUNC_1(&VAR_4.hints.framebuffer, 0, sizeof(VAR_4.hints.framebuffer));
    VAR_4.hints.framebuffer.redBits = 8;
    VAR_4.hints.framebuffer.greenBits = 8;
    VAR_4.hints.framebuffer.blueBits = 8;
    VAR_4.hints.framebuffer.alphaBits = 8;
    VAR_4.hints.framebuffer.depthBits = 24;
    VAR_4.hints.framebuffer.stencilBits = 8;
    VAR_4.hints.framebuffer.doublebuffer = VAR_3;


    VAR_4.hints.refreshRate = VAR_0;


    VAR_4.hints.window.ns.retina = VAR_3;
}
