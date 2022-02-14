
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * handle; } ;
struct TYPE_16__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_4__ osmesa; } ;
struct TYPE_17__ {TYPE_5__ context; } ;
typedef TYPE_6__ _GLFWwindow ;
struct TYPE_18__ {int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int const depthBits; int const stencilBits; } ;
typedef TYPE_7__ _GLFWfbconfig ;
struct TYPE_19__ {scalar_t__ client; scalar_t__ profile; int major; int const minor; scalar_t__ forward; TYPE_3__* share; } ;
typedef TYPE_8__ _GLFWctxconfig ;
struct TYPE_12__ {int * handle; } ;
struct TYPE_13__ {TYPE_1__ osmesa; } ;
struct TYPE_14__ {TYPE_2__ context; } ;
typedef int * OSMesaContext ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int * FUNC_0 (int*,int *) ;
 int * FUNC_1 (int const,int const,int const,int const,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ,int const) ;
 int VAR_21 ;
 int VAR_22 ;

GLFWbool FUNC_4(_GLFWwindow* VAR_23,
                                  const _GLFWctxconfig* VAR_24,
                                  const _GLFWfbconfig* VAR_25)
{
    OSMesaContext VAR_26 = ((void*)0);
    const int VAR_27 = VAR_25->accumRedBits +
                          VAR_25->accumGreenBits +
                          VAR_25->accumBlueBits +
                          VAR_25->accumAlphaBits;

    if (VAR_24->client == VAR_4)
    {
        FUNC_2(VAR_0,
                        "OSMesa: OpenGL ES is not available on OSMesa");
        return VAR_1;
    }

    if (VAR_24->share)
        VAR_26 = VAR_24->share->context.osmesa.handle;

    if (&FUNC_0)
    {
        int VAR_28 = 0, VAR_29[40];

        FUNC_3(VAR_13, VAR_15);
        FUNC_3(VAR_12, VAR_25->depthBits);
        FUNC_3(VAR_16, VAR_25->stencilBits);
        FUNC_3(VAR_7, VAR_27);

        if (VAR_24->profile == VAR_3)
        {
            FUNC_3(VAR_14, VAR_11);
        }
        else if (VAR_24->profile == VAR_2)
        {
            FUNC_3(VAR_14, VAR_8);
        }

        if (VAR_24->major != 1 || VAR_24->minor != 0)
        {
            FUNC_3(VAR_9, VAR_24->major);
            FUNC_3(VAR_10, VAR_24->minor);
        }

        if (VAR_24->forward)
        {
            FUNC_2(VAR_6,
                            "OSMesa: Forward-compatible contexts not supported");
            return VAR_1;
        }

        FUNC_3(0, 0);

        VAR_23->context.osmesa.handle =
            FUNC_0(VAR_29, VAR_26);
    }
    else
    {
        if (VAR_24->profile)
        {
            FUNC_2(VAR_6,
                            "OSMesa: OpenGL profiles unavailable");
            return VAR_1;
        }

        VAR_23->context.osmesa.handle =
            FUNC_1(VAR_15,
                                   VAR_25->depthBits,
                                   VAR_25->stencilBits,
                                   VAR_27,
                                   VAR_26);
    }

    if (VAR_23->context.osmesa.handle == ((void*)0))
    {
        FUNC_2(VAR_6,
                        "OSMesa: Failed to create context");
        return VAR_1;
    }

    VAR_23->context.makeCurrent = VAR_20;
    VAR_23->context.swapBuffers = VAR_21;
    VAR_23->context.swapInterval = VAR_22;
    VAR_23->context.extensionSupported = VAR_18;
    VAR_23->context.getProcAddress = VAR_19;
    VAR_23->context.destroy = VAR_17;

    return VAR_5;
}
