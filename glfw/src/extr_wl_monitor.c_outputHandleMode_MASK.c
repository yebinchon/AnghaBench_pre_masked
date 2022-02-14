
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_output {int dummy; } ;
struct TYPE_5__ {int currentMode; } ;
struct _GLFWmonitor {int modeCount; TYPE_1__ wl; TYPE_2__* modes; } ;
typedef double int32_t ;
struct TYPE_6__ {double width; double height; int redBits; int greenBits; int blueBits; int refreshRate; } ;
typedef TYPE_2__ GLFWvidmode ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(void* VAR_1,
                             struct wl_output* VAR_2,
                             uint32_t VAR_3,
                             int32_t VAR_4,
                             int32_t VAR_5,
                             int32_t VAR_6)
{
    struct _GLFWmonitor *VAR_7 = VAR_1;
    GLFWvidmode VAR_8;

    VAR_8.width = VAR_4;
    VAR_8.height = VAR_5;
    VAR_8.redBits = 8;
    VAR_8.greenBits = 8;
    VAR_8.blueBits = 8;
    VAR_8.refreshRate = (int) FUNC_1(VAR_6 / 1000.0);

    VAR_7->modeCount++;
    VAR_7->modes =
        FUNC_0(VAR_7->modes, VAR_7->modeCount * sizeof(GLFWvidmode));
    VAR_7->modes[VAR_7->modeCount - 1] = VAR_8;

    if (VAR_3 & VAR_0)
        VAR_7->wl.currentMode = VAR_7->modeCount - 1;
}
