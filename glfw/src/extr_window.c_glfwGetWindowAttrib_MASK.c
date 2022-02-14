
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int client; int source; int major; int minor; int revision; int robustness; int forward; int debug; int profile; int release; int noerror; } ;
struct TYPE_10__ {int focusOnShow; int resizable; int decorated; int floating; int autoIconify; TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;

int FUNC_9(GLFWwindow* VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_1;
    FUNC_8(VAR_3 != ((void*)0));

    FUNC_0(0);

    switch (VAR_2)
    {
        case 138:
            return FUNC_3(VAR_3);
        case 135:
            return FUNC_5(VAR_3);
        case 128:
            return FUNC_7(VAR_3);
        case 134:
            return FUNC_6(VAR_3);
        case 136:
            return FUNC_4(VAR_3);
        case 137:
            return VAR_3->focusOnShow;
        case 129:
            return FUNC_2(VAR_3);
        case 130:
            return VAR_3->resizable;
        case 140:
            return VAR_3->decorated;
        case 139:
            return VAR_3->floating;
        case 149:
            return VAR_3->autoIconify;
        case 148:
            return VAR_3->context.client;
        case 147:
            return VAR_3->context.source;
        case 142:
            return VAR_3->context.major;
        case 141:
            return VAR_3->context.minor;
        case 144:
            return VAR_3->context.revision;
        case 143:
            return VAR_3->context.robustness;
        case 132:
            return VAR_3->context.forward;
        case 133:
            return VAR_3->context.debug;
        case 131:
            return VAR_3->context.profile;
        case 145:
            return VAR_3->context.release;
        case 146:
            return VAR_3->context.noerror;
    }

    FUNC_1(VAR_0, "Invalid window attribute 0x%08X", VAR_2);
    return 0;
}
