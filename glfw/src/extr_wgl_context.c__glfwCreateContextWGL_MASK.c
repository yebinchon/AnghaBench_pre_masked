
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int pfd ;
struct TYPE_21__ {int handle; int dc; } ;
struct TYPE_22__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_6__ wgl; } ;
struct TYPE_19__ {int handle; } ;
struct TYPE_23__ {TYPE_7__ context; TYPE_4__ win32; } ;
typedef TYPE_8__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_24__ {scalar_t__ client; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; int major; int minor; scalar_t__ noerror; scalar_t__ debug; scalar_t__ forward; TYPE_3__* share; } ;
typedef TYPE_9__ _GLFWctxconfig ;
struct TYPE_20__ {scalar_t__ ARB_create_context_no_error; scalar_t__ ARB_context_flush_control; scalar_t__ ARB_create_context_robustness; scalar_t__ ARB_create_context; int EXT_create_context_es2_profile; int ARB_create_context_profile; } ;
struct TYPE_16__ {int * handle; } ;
struct TYPE_17__ {TYPE_1__ wgl; } ;
struct TYPE_18__ {TYPE_2__ context; } ;
struct TYPE_15__ {TYPE_5__ wgl; } ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int * HGLRC ;
typedef int GLFWbool ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 TYPE_14__ VAR_33 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__ const*,int const*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_7 (int ,int) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (int *,int ) ;

GLFWbool FUNC_11(_GLFWwindow* VAR_40,
                               const _GLFWctxconfig* VAR_41,
                               const _GLFWfbconfig* VAR_42)
{
    int VAR_43[40];
    int VAR_44;
    PIXELFORMATDESCRIPTOR VAR_45;
    HGLRC VAR_46 = ((void*)0);

    if (VAR_41->share)
        VAR_46 = VAR_41->share->context.wgl.handle;

    VAR_40->context.wgl.dc = FUNC_1(VAR_40->win32.handle);
    if (!VAR_40->context.wgl.dc)
    {
        FUNC_4(VAR_11,
                        "WGL: Failed to retrieve DC for window");
        return VAR_4;
    }

    VAR_44 = FUNC_6(VAR_40, VAR_41, VAR_42);
    if (!VAR_44)
        return VAR_4;

    if (!FUNC_0(VAR_40->context.wgl.dc,
                             VAR_44, sizeof(VAR_45), &VAR_45))
    {
        FUNC_5(VAR_11,
                             "WGL: Failed to retrieve PFD for selected pixel format");
        return VAR_4;
    }

    if (!FUNC_3(VAR_40->context.wgl.dc, VAR_44, &VAR_45))
    {
        FUNC_5(VAR_11,
                             "WGL: Failed to set selected pixel format");
        return VAR_4;
    }

    if (VAR_41->client == VAR_8)
    {
        if (VAR_41->forward)
        {
            if (!VAR_33.wgl.ARB_create_context)
            {
                FUNC_4(VAR_15,
                                "WGL: A forward compatible OpenGL context requested but WGL_ARB_create_context is unavailable");
                return VAR_4;
            }
        }

        if (VAR_41->profile)
        {
            if (!VAR_33.wgl.ARB_create_context_profile)
            {
                FUNC_4(VAR_15,
                                "WGL: OpenGL profile requested but WGL_ARB_create_context_profile is unavailable");
                return VAR_4;
            }
        }
    }
    else
    {
        if (!VAR_33.wgl.ARB_create_context ||
            !VAR_33.wgl.ARB_create_context_profile ||
            !VAR_33.wgl.EXT_create_context_es2_profile)
        {
            FUNC_4(VAR_3,
                            "WGL: OpenGL ES requested but WGL_ARB_create_context_es2_profile is unavailable");
            return VAR_4;
        }
    }

    if (VAR_33.wgl.ARB_create_context)
    {
        int VAR_47 = 0, VAR_48 = 0, VAR_49 = 0;

        if (VAR_41->client == VAR_8)
        {
            if (VAR_41->forward)
                VAR_49 |= VAR_21;

            if (VAR_41->profile == VAR_10)
                VAR_48 |= VAR_17;
            else if (VAR_41->profile == VAR_9)
                VAR_48 |= VAR_16;
        }
        else
            VAR_48 |= VAR_19;

        if (VAR_41->debug)
            VAR_49 |= VAR_18;

        if (VAR_41->robustness)
        {
            if (VAR_33.wgl.ARB_create_context_robustness)
            {
                if (VAR_41->robustness == VAR_7)
                {
                    FUNC_7(VAR_29,
                              VAR_32);
                }
                else if (VAR_41->robustness == VAR_6)
                {
                    FUNC_7(VAR_29,
                              VAR_31);
                }

                VAR_49 |= VAR_30;
            }
        }

        if (VAR_41->release)
        {
            if (VAR_33.wgl.ARB_context_flush_control)
            {
                if (VAR_41->release == VAR_13)
                {
                    FUNC_7(VAR_26,
                              VAR_28);
                }
                else if (VAR_41->release == VAR_12)
                {
                    FUNC_7(VAR_26,
                              VAR_27);
                }
            }
        }

        if (VAR_41->noerror)
        {
            if (VAR_33.wgl.ARB_create_context_no_error)
                FUNC_7(VAR_24, VAR_14);
        }




        if (VAR_41->major != 1 || VAR_41->minor != 0)
        {
            FUNC_7(VAR_22, VAR_41->major);
            FUNC_7(VAR_23, VAR_41->minor);
        }

        if (VAR_49)
            FUNC_7(VAR_20, VAR_49);

        if (VAR_48)
            FUNC_7(VAR_25, VAR_48);

        FUNC_7(0, 0);

        VAR_40->context.wgl.handle =
            FUNC_9(VAR_40->context.wgl.dc, VAR_46, VAR_43);
        if (!VAR_40->context.wgl.handle)
        {
            const DWORD VAR_50 = FUNC_2();

            if (VAR_50 == (0xc0070000 | VAR_2))
            {
                if (VAR_41->client == VAR_8)
                {
                    FUNC_4(VAR_15,
                                    "WGL: Driver does not support OpenGL version %i.%i",
                                    VAR_41->major,
                                    VAR_41->minor);
                }
                else
                {
                    FUNC_4(VAR_15,
                                    "WGL: Driver does not support OpenGL ES version %i.%i",
                                    VAR_41->major,
                                    VAR_41->minor);
                }
            }
            else if (VAR_50 == (0xc0070000 | VAR_1))
            {
                FUNC_4(VAR_15,
                                "WGL: Driver does not support the requested OpenGL profile");
            }
            else if (VAR_50 == (0xc0070000 | VAR_0))
            {
                FUNC_4(VAR_5,
                                "WGL: The share context is not compatible with the requested context");
            }
            else
            {
                if (VAR_41->client == VAR_8)
                {
                    FUNC_4(VAR_15,
                                    "WGL: Failed to create OpenGL context");
                }
                else
                {
                    FUNC_4(VAR_15,
                                    "WGL: Failed to create OpenGL ES context");
                }
            }

            return VAR_4;
        }
    }
    else
    {
        VAR_40->context.wgl.handle = FUNC_8(VAR_40->context.wgl.dc);
        if (!VAR_40->context.wgl.handle)
        {
            FUNC_5(VAR_15,
                                 "WGL: Failed to create OpenGL context");
            return VAR_4;
        }

        if (VAR_46)
        {
            if (!FUNC_10(VAR_46, VAR_40->context.wgl.handle))
            {
                FUNC_5(VAR_11,
                                     "WGL: Failed to enable sharing with specified OpenGL context");
                return VAR_4;
            }
        }
    }

    VAR_40->context.makeCurrent = VAR_37;
    VAR_40->context.swapBuffers = VAR_38;
    VAR_40->context.swapInterval = VAR_39;
    VAR_40->context.extensionSupported = VAR_35;
    VAR_40->context.getProcAddress = VAR_36;
    VAR_40->context.destroy = VAR_34;

    return VAR_14;
}
