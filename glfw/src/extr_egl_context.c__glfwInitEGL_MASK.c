
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prefix; scalar_t__ display; void* KHR_context_flush_control; void* KHR_get_all_proc_addresses; void* KHR_gl_colorspace; void* KHR_create_context_no_error; void* KHR_create_context; int minor; int major; scalar_t__ GetProcAddress; scalar_t__ QueryString; scalar_t__ SwapInterval; scalar_t__ SwapBuffers; scalar_t__ MakeCurrent; scalar_t__ CreateWindowSurface; scalar_t__ DestroyContext; scalar_t__ DestroySurface; scalar_t__ CreateContext; scalar_t__ BindAPI; scalar_t__ Terminate; scalar_t__ Initialize; scalar_t__ GetError; scalar_t__ GetDisplay; scalar_t__ GetConfigs; scalar_t__ GetConfigAttrib; scalar_t__ handle; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;
typedef scalar_t__ PFN_eglTerminate ;
typedef scalar_t__ PFN_eglSwapInterval ;
typedef scalar_t__ PFN_eglSwapBuffers ;
typedef scalar_t__ PFN_eglQueryString ;
typedef scalar_t__ PFN_eglMakeCurrent ;
typedef scalar_t__ PFN_eglInitialize ;
typedef scalar_t__ PFN_eglGetProcAddress ;
typedef scalar_t__ PFN_eglGetError ;
typedef scalar_t__ PFN_eglGetDisplay ;
typedef scalar_t__ PFN_eglGetConfigs ;
typedef scalar_t__ PFN_eglGetConfigAttrib ;
typedef scalar_t__ PFN_eglDestroySurface ;
typedef scalar_t__ PFN_eglDestroyContext ;
typedef scalar_t__ PFN_eglCreateWindowSurface ;
typedef scalar_t__ PFN_eglCreateContext ;
typedef scalar_t__ PFN_eglBindAPI ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;

GLFWbool FUNC_10(void)
{
    int VAR_8;
    const char* VAR_9[] =
    {
        "libEGL.so.1",

        ((void*)0)
    };

    if (VAR_7.egl.handle)
        return VAR_4;

    for (VAR_8 = 0; VAR_9[VAR_8]; VAR_8++)
    {
        VAR_7.egl.handle = FUNC_2(VAR_9[VAR_8]);
        if (VAR_7.egl.handle)
            break;
    }

    if (!VAR_7.egl.handle)
    {
        FUNC_0(VAR_1, "EGL: Library not found");
        return VAR_2;
    }

    VAR_7.egl.prefix = (FUNC_9(VAR_9[VAR_8], "lib", 3) == 0);

    VAR_7.egl.GetConfigAttrib = (PFN_eglGetConfigAttrib)
        FUNC_3(VAR_7.egl.handle, "eglGetConfigAttrib");
    VAR_7.egl.GetConfigs = (PFN_eglGetConfigs)
        FUNC_3(VAR_7.egl.handle, "eglGetConfigs");
    VAR_7.egl.GetDisplay = (PFN_eglGetDisplay)
        FUNC_3(VAR_7.egl.handle, "eglGetDisplay");
    VAR_7.egl.GetError = (PFN_eglGetError)
        FUNC_3(VAR_7.egl.handle, "eglGetError");
    VAR_7.egl.Initialize = (PFN_eglInitialize)
        FUNC_3(VAR_7.egl.handle, "eglInitialize");
    VAR_7.egl.Terminate = (PFN_eglTerminate)
        FUNC_3(VAR_7.egl.handle, "eglTerminate");
    VAR_7.egl.BindAPI = (PFN_eglBindAPI)
        FUNC_3(VAR_7.egl.handle, "eglBindAPI");
    VAR_7.egl.CreateContext = (PFN_eglCreateContext)
        FUNC_3(VAR_7.egl.handle, "eglCreateContext");
    VAR_7.egl.DestroySurface = (PFN_eglDestroySurface)
        FUNC_3(VAR_7.egl.handle, "eglDestroySurface");
    VAR_7.egl.DestroyContext = (PFN_eglDestroyContext)
        FUNC_3(VAR_7.egl.handle, "eglDestroyContext");
    VAR_7.egl.CreateWindowSurface = (PFN_eglCreateWindowSurface)
        FUNC_3(VAR_7.egl.handle, "eglCreateWindowSurface");
    VAR_7.egl.MakeCurrent = (PFN_eglMakeCurrent)
        FUNC_3(VAR_7.egl.handle, "eglMakeCurrent");
    VAR_7.egl.SwapBuffers = (PFN_eglSwapBuffers)
        FUNC_3(VAR_7.egl.handle, "eglSwapBuffers");
    VAR_7.egl.SwapInterval = (PFN_eglSwapInterval)
        FUNC_3(VAR_7.egl.handle, "eglSwapInterval");
    VAR_7.egl.QueryString = (PFN_eglQueryString)
        FUNC_3(VAR_7.egl.handle, "eglQueryString");
    VAR_7.egl.GetProcAddress = (PFN_eglGetProcAddress)
        FUNC_3(VAR_7.egl.handle, "eglGetProcAddress");

    if (!VAR_7.egl.GetConfigAttrib ||
        !VAR_7.egl.GetConfigs ||
        !VAR_7.egl.GetDisplay ||
        !VAR_7.egl.GetError ||
        !VAR_7.egl.Initialize ||
        !VAR_7.egl.Terminate ||
        !VAR_7.egl.BindAPI ||
        !VAR_7.egl.CreateContext ||
        !VAR_7.egl.DestroySurface ||
        !VAR_7.egl.DestroyContext ||
        !VAR_7.egl.CreateWindowSurface ||
        !VAR_7.egl.MakeCurrent ||
        !VAR_7.egl.SwapBuffers ||
        !VAR_7.egl.SwapInterval ||
        !VAR_7.egl.QueryString ||
        !VAR_7.egl.GetProcAddress)
    {
        FUNC_0(VAR_3,
                        "EGL: Failed to load required entry points");

        FUNC_1();
        return VAR_2;
    }

    VAR_7.egl.display = FUNC_4(VAR_6);
    if (VAR_7.egl.display == VAR_0)
    {
        FUNC_0(VAR_1,
                        "EGL: Failed to get EGL display: %s",
                        FUNC_8(FUNC_5()));

        FUNC_1();
        return VAR_2;
    }

    if (!FUNC_6(VAR_7.egl.display, &VAR_7.egl.major, &VAR_7.egl.minor))
    {
        FUNC_0(VAR_1,
                        "EGL: Failed to initialize EGL: %s",
                        FUNC_8(FUNC_5()));

        FUNC_1();
        return VAR_2;
    }

    VAR_7.egl.KHR_create_context =
        FUNC_7("EGL_KHR_create_context");
    VAR_7.egl.KHR_create_context_no_error =
        FUNC_7("EGL_KHR_create_context_no_error");
    VAR_7.egl.KHR_gl_colorspace =
        FUNC_7("EGL_KHR_gl_colorspace");
    VAR_7.egl.KHR_get_all_proc_addresses =
        FUNC_7("EGL_KHR_get_all_proc_addresses");
    VAR_7.egl.KHR_context_flush_control =
        FUNC_7("EGL_KHR_context_flush_control");

    return VAR_4;
}
