
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {void* offline; } ;
struct TYPE_14__ {int client; int source; int major; int minor; int robustness; int profile; int release; void* noerror; void* debug; void* forward; TYPE_4__ nsgl; } ;
struct TYPE_11__ {void* keymenu; } ;
struct TYPE_10__ {void* retina; } ;
struct TYPE_13__ {void* focusOnShow; void* centerCursor; void* scaleToMonitor; TYPE_3__ win32; TYPE_2__ ns; void* visible; void* maximized; void* floating; void* autoIconify; void* focused; void* decorated; void* resizable; } ;
struct TYPE_9__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int auxBuffers; int samples; void* sRGB; void* transparent; void* doublebuffer; void* stereo; } ;
struct TYPE_15__ {int refreshRate; TYPE_6__ context; TYPE_5__ window; TYPE_1__ framebuffer; } ;
struct TYPE_16__ {TYPE_7__ hints; } ;
 void* VAR_0 ;




 int VAR_1 ;
 void* VAR_2 ;


 int FUNC_0 () ;
 TYPE_8__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(int VAR_4, int VAR_5)
{
    FUNC_0();

    switch (VAR_4)
    {
        case 138:
            VAR_3.hints.framebuffer.redBits = VAR_5;
            return;
        case 143:
            VAR_3.hints.framebuffer.greenBits = VAR_5;
            return;
        case 160:
            VAR_3.hints.framebuffer.blueBits = VAR_5;
            return;
        case 163:
            VAR_3.hints.framebuffer.alphaBits = VAR_5;
            return;
        case 148:
            VAR_3.hints.framebuffer.depthBits = VAR_5;
            return;
        case 132:
            VAR_3.hints.framebuffer.stencilBits = VAR_5;
            return;
        case 164:
            VAR_3.hints.framebuffer.accumRedBits = VAR_5;
            return;
        case 165:
            VAR_3.hints.framebuffer.accumGreenBits = VAR_5;
            return;
        case 166:
            VAR_3.hints.framebuffer.accumBlueBits = VAR_5;
            return;
        case 167:
            VAR_3.hints.framebuffer.accumAlphaBits = VAR_5;
            return;
        case 161:
            VAR_3.hints.framebuffer.auxBuffers = VAR_5;
            return;
        case 131:
            VAR_3.hints.framebuffer.stereo = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 147:
            VAR_3.hints.framebuffer.doublebuffer = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 130:
            VAR_3.hints.framebuffer.transparent = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 135:
            VAR_3.hints.framebuffer.samples = VAR_5;
            return;
        case 133:
            VAR_3.hints.framebuffer.sRGB = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 136:
            VAR_3.hints.window.resizable = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 149:
            VAR_3.hints.window.decorated = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 145:
            VAR_3.hints.window.focused = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 162:
            VAR_3.hints.window.autoIconify = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 146:
            VAR_3.hints.window.floating = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 142:
            VAR_3.hints.window.maximized = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 129:
            VAR_3.hints.window.visible = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 156:
            VAR_3.hints.window.ns.retina = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 128:
            VAR_3.hints.window.win32.keymenu = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 157:
            VAR_3.hints.context.nsgl.offline = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 134:
            VAR_3.hints.window.scaleToMonitor = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 159:
            VAR_3.hints.window.centerCursor = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 144:
            VAR_3.hints.window.focusOnShow = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 158:
            VAR_3.hints.context.client = VAR_5;
            return;
        case 155:
            VAR_3.hints.context.source = VAR_5;
            return;
        case 151:
            VAR_3.hints.context.major = VAR_5;
            return;
        case 150:
            VAR_3.hints.context.minor = VAR_5;
            return;
        case 152:
            VAR_3.hints.context.robustness = VAR_5;
            return;
        case 140:
            VAR_3.hints.context.forward = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 141:
            VAR_3.hints.context.debug = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 154:
            VAR_3.hints.context.noerror = VAR_5 ? VAR_2 : VAR_0;
            return;
        case 139:
            VAR_3.hints.context.profile = VAR_5;
            return;
        case 153:
            VAR_3.hints.context.release = VAR_5;
            return;
        case 137:
            VAR_3.hints.refreshRate = VAR_5;
            return;
    }

    FUNC_1(VAR_1, "Invalid window hint 0x%08X", VAR_4);
}
