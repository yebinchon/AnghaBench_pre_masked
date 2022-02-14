
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int _GLFWwndconfig ;
typedef int _GLFWfbconfig ;
typedef int _GLFWctxconfig ;
struct TYPE_7__ {int depth; int * visual; } ;
typedef TYPE_2__ XVisualInfo ;
typedef int Visual ;
struct TYPE_6__ {int display; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef int GLXFBConfig ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int const*,int *) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

GLFWbool FUNC_4(const _GLFWwndconfig* VAR_5,
                              const _GLFWctxconfig* VAR_6,
                              const _GLFWfbconfig* VAR_7,
                              Visual** VAR_8, int* VAR_9)
{
    GLXFBConfig VAR_10;
    XVisualInfo* VAR_11;

    if (!FUNC_2(VAR_7, &VAR_10))
    {
        FUNC_1(VAR_1,
                        "GLX: Failed to find a suitable GLXFBConfig");
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_4.x11.display, VAR_10);
    if (!VAR_11)
    {
        FUNC_1(VAR_2,
                        "GLX: Failed to retrieve Visual for GLXFBConfig");
        return VAR_0;
    }

    *VAR_8 = VAR_11->visual;
    *VAR_9 = VAR_11->depth;

    FUNC_0(VAR_11);
    return VAR_3;
}
