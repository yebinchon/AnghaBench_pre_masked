
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_21__ {int client; int config; int surface; int handle; } ;
struct TYPE_22__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_5__ egl; } ;
struct TYPE_23__ {TYPE_6__ context; } ;
typedef TYPE_7__ _GLFWwindow ;
struct TYPE_24__ {scalar_t__ sRGB; } ;
typedef TYPE_8__ _GLFWfbconfig ;
struct TYPE_25__ {scalar_t__ client; scalar_t__ profile; scalar_t__ robustness; int major; int minor; scalar_t__ release; scalar_t__ noerror; scalar_t__ debug; scalar_t__ forward; TYPE_3__* share; } ;
typedef TYPE_9__ _GLFWctxconfig ;
struct TYPE_20__ {int prefix; int KHR_get_all_proc_addresses; int display; scalar_t__ KHR_gl_colorspace; scalar_t__ KHR_context_flush_control; scalar_t__ KHR_create_context_no_error; scalar_t__ KHR_create_context; } ;
struct TYPE_17__ {int * handle; } ;
struct TYPE_18__ {TYPE_1__ egl; } ;
struct TYPE_19__ {TYPE_2__ context; } ;
struct TYPE_16__ {TYPE_4__ egl; } ;
typedef int GLFWbool ;
typedef int EGLint ;
typedef int * EGLContext ;
typedef int EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 char* VAR_39 ;
 char* VAR_40 ;
 char* VAR_41 ;
 TYPE_15__ VAR_42 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_9__ const*,TYPE_8__ const*,int *) ;
 int VAR_43 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 () ;
 int VAR_44 ;
 int FUNC_7 (int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 int VAR_47 ;
 int VAR_48 ;

GLFWbool FUNC_10(_GLFWwindow* VAR_49,
                               const _GLFWctxconfig* VAR_50,
                               const _GLFWfbconfig* VAR_51)
{
    EGLint VAR_52[40];
    EGLConfig VAR_53;
    EGLContext VAR_54 = ((void*)0);
    int VAR_55 = 0;

    if (!VAR_42.egl.display)
    {
        FUNC_0(VAR_24, "EGL: API not available");
        return VAR_25;
    }

    if (VAR_50->share)
        VAR_54 = VAR_50->share->context.egl.handle;

    if (!FUNC_2(VAR_50, VAR_51, &VAR_53))
    {
        FUNC_0(VAR_26,
                        "EGL: Failed to find a suitable EGLConfig");
        return VAR_25;
    }

    if (VAR_50->client == VAR_32)
    {
        if (!FUNC_3(VAR_23))
        {
            FUNC_0(VAR_24,
                            "EGL: Failed to bind OpenGL ES: %s",
                            FUNC_7(FUNC_6()));
            return VAR_25;
        }
    }
    else
    {
        if (!FUNC_3(VAR_22))
        {
            FUNC_0(VAR_24,
                            "EGL: Failed to bind OpenGL: %s",
                            FUNC_7(FUNC_6()));
            return VAR_25;
        }
    }

    if (VAR_42.egl.KHR_create_context)
    {
        int VAR_56 = 0, VAR_57 = 0;

        if (VAR_50->client == VAR_29)
        {
            if (VAR_50->forward)
                VAR_57 |= VAR_7;

            if (VAR_50->profile == VAR_31)
                VAR_56 |= VAR_5;
            else if (VAR_50->profile == VAR_30)
                VAR_56 |= VAR_4;
        }

        if (VAR_50->debug)
            VAR_57 |= VAR_6;

        if (VAR_50->robustness)
        {
            if (VAR_50->robustness == VAR_28)
            {
                FUNC_8(VAR_10,
                          VAR_20);
            }
            else if (VAR_50->robustness == VAR_27)
            {
                FUNC_8(VAR_10,
                          VAR_17);
            }

            VAR_57 |= VAR_11;
        }

        if (VAR_50->noerror)
        {
            if (VAR_42.egl.KHR_create_context_no_error)
                FUNC_8(VAR_8, VAR_36);
        }

        if (VAR_50->major != 1 || VAR_50->minor != 0)
        {
            FUNC_8(VAR_2, VAR_50->major);
            FUNC_8(VAR_3, VAR_50->minor);
        }

        if (VAR_56)
            FUNC_8(VAR_9, VAR_56);

        if (VAR_57)
            FUNC_8(VAR_1, VAR_57);
    }
    else
    {
        if (VAR_50->client == VAR_32)
            FUNC_8(VAR_0, VAR_50->major);
    }

    if (VAR_42.egl.KHR_context_flush_control)
    {
        if (VAR_50->release == VAR_35)
        {
            FUNC_8(VAR_13,
                      VAR_14);
        }
        else if (VAR_50->release == VAR_34)
        {
            FUNC_8(VAR_13,
                      VAR_12);
        }
    }

    FUNC_8(VAR_18, VAR_18);

    VAR_49->context.egl.handle = FUNC_4(VAR_42.egl.display,
                                                  VAR_53, VAR_54, VAR_52);

    if (VAR_49->context.egl.handle == VAR_19)
    {
        FUNC_0(VAR_37,
                        "EGL: Failed to create context: %s",
                        FUNC_7(FUNC_6()));
        return VAR_25;
    }


    {
        int VAR_58 = 0;

        if (VAR_51->sRGB)
        {
            if (VAR_42.egl.KHR_gl_colorspace)
                FUNC_8(VAR_15, VAR_16);
        }

        FUNC_8(VAR_18, VAR_18);
    }

    VAR_49->context.egl.surface =
        FUNC_5(VAR_42.egl.display,
                               VAR_53,
                               VAR_38,
                               VAR_52);
    if (VAR_49->context.egl.surface == VAR_21)
    {
        FUNC_0(VAR_33,
                        "EGL: Failed to create window surface: %s",
                        FUNC_7(FUNC_6()));
        return VAR_25;
    }

    VAR_49->context.egl.config = VAR_53;


    if (!VAR_42.egl.KHR_get_all_proc_addresses)
    {
        int VAR_59;
        const char** VAR_60;
        const char* VAR_61[] =
        {
            "libGLESv1_CM.so.1",
            "libGLES_CM.so.1",

            ((void*)0)
        };
        const char* VAR_62[] =
        {
            "libGLESv2.so.2",

            ((void*)0)
        };
        const char* VAR_63[] =
        {





            "libGL.so.1",

            ((void*)0)
        };

        if (VAR_50->client == VAR_32)
        {
            if (VAR_50->major == 1)
                VAR_60 = VAR_61;
            else
                VAR_60 = VAR_62;
        }
        else
            VAR_60 = VAR_63;

        for (VAR_59 = 0; VAR_60[VAR_59]; VAR_59++)
        {


            if (VAR_42.egl.prefix != (FUNC_9(VAR_60[VAR_59], "lib", 3) == 0))
                continue;

            VAR_49->context.egl.client = FUNC_1(VAR_60[VAR_59]);
            if (VAR_49->context.egl.client)
                break;
        }

        if (!VAR_49->context.egl.client)
        {
            FUNC_0(VAR_24,
                            "EGL: Failed to load client library");
            return VAR_25;
        }
    }

    VAR_49->context.makeCurrent = VAR_46;
    VAR_49->context.swapBuffers = VAR_47;
    VAR_49->context.swapInterval = VAR_48;
    VAR_49->context.extensionSupported = VAR_44;
    VAR_49->context.getProcAddress = VAR_45;
    VAR_49->context.destroy = VAR_43;

    return VAR_36;
}
