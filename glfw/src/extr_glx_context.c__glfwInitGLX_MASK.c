
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int major; int minor; void* ARB_context_flush_control; void* ARB_create_context_no_error; void* EXT_create_context_es2_profile; void* ARB_create_context_profile; void* ARB_create_context_robustness; void* ARB_create_context; scalar_t__ CreateContextAttribsARB; void* EXT_framebuffer_sRGB; void* ARB_framebuffer_sRGB; void* ARB_multisample; void* MESA_swap_control; scalar_t__ SwapIntervalMESA; void* SGI_swap_control; scalar_t__ SwapIntervalSGI; void* EXT_swap_control; scalar_t__ SwapIntervalEXT; int eventBase; int errorBase; void* GetVisualFromFBConfig; void* GetProcAddressARB; void* GetProcAddress; void* DestroyWindow; void* CreateWindow; void* CreateNewContext; void* QueryExtensionsString; void* SwapBuffers; void* MakeCurrent; void* DestroyContext; void* QueryVersion; void* QueryExtension; void* GetClientString; void* GetFBConfigAttrib; void* GetFBConfigs; scalar_t__ handle; } ;
struct TYPE_4__ {int display; } ;
struct TYPE_6__ {TYPE_2__ glx; TYPE_1__ x11; } ;
typedef scalar_t__ PFNGLXSWAPINTERVALSGIPROC ;
typedef scalar_t__ PFNGLXSWAPINTERVALMESAPROC ;
typedef scalar_t__ PFNGLXSWAPINTERVALEXTPROC ;
typedef scalar_t__ PFNGLXCREATECONTEXTATTRIBSARBPROC ;
typedef void* GLFWbool ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 void* FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int*,int*) ;

GLFWbool FUNC_7(void)
{
    int VAR_6;
    const char* VAR_7[] =
    {





        "libGL.so.1",
        "libGL.so",

        ((void*)0)
    };

    if (VAR_5.glx.handle)
        return VAR_3;

    for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
    {
        VAR_5.glx.handle = FUNC_1(VAR_7[VAR_6]);
        if (VAR_5.glx.handle)
            break;
    }

    if (!VAR_5.glx.handle)
    {
        FUNC_0(VAR_0, "GLX: Failed to load GLX");
        return VAR_1;
    }

    VAR_5.glx.GetFBConfigs =
        FUNC_2(VAR_5.glx.handle, "glXGetFBConfigs");
    VAR_5.glx.GetFBConfigAttrib =
        FUNC_2(VAR_5.glx.handle, "glXGetFBConfigAttrib");
    VAR_5.glx.GetClientString =
        FUNC_2(VAR_5.glx.handle, "glXGetClientString");
    VAR_5.glx.QueryExtension =
        FUNC_2(VAR_5.glx.handle, "glXQueryExtension");
    VAR_5.glx.QueryVersion =
        FUNC_2(VAR_5.glx.handle, "glXQueryVersion");
    VAR_5.glx.DestroyContext =
        FUNC_2(VAR_5.glx.handle, "glXDestroyContext");
    VAR_5.glx.MakeCurrent =
        FUNC_2(VAR_5.glx.handle, "glXMakeCurrent");
    VAR_5.glx.SwapBuffers =
        FUNC_2(VAR_5.glx.handle, "glXSwapBuffers");
    VAR_5.glx.QueryExtensionsString =
        FUNC_2(VAR_5.glx.handle, "glXQueryExtensionsString");
    VAR_5.glx.CreateNewContext =
        FUNC_2(VAR_5.glx.handle, "glXCreateNewContext");
    VAR_5.glx.CreateWindow =
        FUNC_2(VAR_5.glx.handle, "glXCreateWindow");
    VAR_5.glx.DestroyWindow =
        FUNC_2(VAR_5.glx.handle, "glXDestroyWindow");
    VAR_5.glx.GetProcAddress =
        FUNC_2(VAR_5.glx.handle, "glXGetProcAddress");
    VAR_5.glx.GetProcAddressARB =
        FUNC_2(VAR_5.glx.handle, "glXGetProcAddressARB");
    VAR_5.glx.GetVisualFromFBConfig =
        FUNC_2(VAR_5.glx.handle, "glXGetVisualFromFBConfig");

    if (!VAR_5.glx.GetFBConfigs ||
        !VAR_5.glx.GetFBConfigAttrib ||
        !VAR_5.glx.GetClientString ||
        !VAR_5.glx.QueryExtension ||
        !VAR_5.glx.QueryVersion ||
        !VAR_5.glx.DestroyContext ||
        !VAR_5.glx.MakeCurrent ||
        !VAR_5.glx.SwapBuffers ||
        !VAR_5.glx.QueryExtensionsString ||
        !VAR_5.glx.CreateNewContext ||
        !VAR_5.glx.CreateWindow ||
        !VAR_5.glx.DestroyWindow ||
        !VAR_5.glx.GetProcAddress ||
        !VAR_5.glx.GetProcAddressARB ||
        !VAR_5.glx.GetVisualFromFBConfig)
    {
        FUNC_0(VAR_2,
                        "GLX: Failed to load required entry points");
        return VAR_1;
    }

    if (!FUNC_5(VAR_5.x11.display,
                           &VAR_5.glx.errorBase,
                           &VAR_5.glx.eventBase))
    {
        FUNC_0(VAR_0, "GLX: GLX extension not found");
        return VAR_1;
    }

    if (!FUNC_6(VAR_5.x11.display, &VAR_5.glx.major, &VAR_5.glx.minor))
    {
        FUNC_0(VAR_0,
                        "GLX: Failed to query GLX version");
        return VAR_1;
    }

    if (VAR_5.glx.major == 1 && VAR_5.glx.minor < 3)
    {
        FUNC_0(VAR_0,
                        "GLX: GLX version 1.3 is required");
        return VAR_1;
    }

    if (FUNC_3("GLX_EXT_swap_control"))
    {
        VAR_5.glx.SwapIntervalEXT = (PFNGLXSWAPINTERVALEXTPROC)
            FUNC_4("glXSwapIntervalEXT");

        if (VAR_5.glx.SwapIntervalEXT)
            VAR_5.glx.EXT_swap_control = VAR_3;
    }

    if (FUNC_3("GLX_SGI_swap_control"))
    {
        VAR_5.glx.SwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC)
            FUNC_4("glXSwapIntervalSGI");

        if (VAR_5.glx.SwapIntervalSGI)
            VAR_5.glx.SGI_swap_control = VAR_3;
    }

    if (FUNC_3("GLX_MESA_swap_control"))
    {
        VAR_5.glx.SwapIntervalMESA = (PFNGLXSWAPINTERVALMESAPROC)
            FUNC_4("glXSwapIntervalMESA");

        if (VAR_5.glx.SwapIntervalMESA)
            VAR_5.glx.MESA_swap_control = VAR_3;
    }

    if (FUNC_3("GLX_ARB_multisample"))
        VAR_5.glx.ARB_multisample = VAR_3;

    if (FUNC_3("GLX_ARB_framebuffer_sRGB"))
        VAR_5.glx.ARB_framebuffer_sRGB = VAR_3;

    if (FUNC_3("GLX_EXT_framebuffer_sRGB"))
        VAR_5.glx.EXT_framebuffer_sRGB = VAR_3;

    if (FUNC_3("GLX_ARB_create_context"))
    {
        VAR_5.glx.CreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC)
            FUNC_4("glXCreateContextAttribsARB");

        if (VAR_5.glx.CreateContextAttribsARB)
            VAR_5.glx.ARB_create_context = VAR_3;
    }

    if (FUNC_3("GLX_ARB_create_context_robustness"))
        VAR_5.glx.ARB_create_context_robustness = VAR_3;

    if (FUNC_3("GLX_ARB_create_context_profile"))
        VAR_5.glx.ARB_create_context_profile = VAR_3;

    if (FUNC_3("GLX_EXT_create_context_es2_profile"))
        VAR_5.glx.EXT_create_context_es2_profile = VAR_3;

    if (FUNC_3("GLX_ARB_create_context_no_error"))
        VAR_5.glx.ARB_create_context_no_error = VAR_3;

    if (FUNC_3("GLX_ARB_context_flush_control"))
        VAR_5.glx.ARB_context_flush_control = VAR_3;

    return VAR_3;
}
