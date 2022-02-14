
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pfd ;
struct TYPE_9__ {void* ARB_context_flush_control; void* ARB_pixel_format; void* EXT_colorspace; void* EXT_swap_control; void* ARB_create_context_no_error; void* ARB_create_context_robustness; void* EXT_create_context_es2_profile; void* ARB_create_context_profile; void* ARB_create_context; void* EXT_framebuffer_sRGB; void* ARB_framebuffer_sRGB; void* ARB_multisample; scalar_t__ GetPixelFormatAttribivARB; scalar_t__ SwapIntervalEXT; scalar_t__ CreateContextAttribsARB; scalar_t__ GetExtensionsStringARB; scalar_t__ GetExtensionsStringEXT; scalar_t__ instance; scalar_t__ ShareLists; scalar_t__ MakeCurrent; scalar_t__ GetCurrentContext; scalar_t__ GetCurrentDC; scalar_t__ GetProcAddress; scalar_t__ DeleteContext; scalar_t__ CreateContext; } ;
struct TYPE_8__ {int helperWindowHandle; } ;
struct TYPE_11__ {TYPE_2__ wgl; TYPE_1__ win32; } ;
struct TYPE_10__ {int nSize; int nVersion; int dwFlags; int cColorBits; int iPixelType; } ;
typedef TYPE_3__ PIXELFORMATDESCRIPTOR ;
typedef scalar_t__ PFN_wglShareLists ;
typedef scalar_t__ PFN_wglMakeCurrent ;
typedef scalar_t__ PFN_wglGetProcAddress ;
typedef scalar_t__ PFN_wglGetCurrentDC ;
typedef scalar_t__ PFN_wglGetCurrentContext ;
typedef scalar_t__ PFN_wglDeleteContext ;
typedef scalar_t__ PFN_wglCreateContext ;
typedef scalar_t__ PFNWGLSWAPINTERVALEXTPROC ;
typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBIVARBPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGEXTPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGARBPROC ;
typedef scalar_t__ PFNWGLCREATECONTEXTATTRIBSARBPROC ;
typedef int HGLRC ;
typedef int HDC ;
typedef int GLFWbool ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 TYPE_4__ VAR_7 ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;

GLFWbool FUNC_14(void)
{
    PIXELFORMATDESCRIPTOR VAR_8;
    HGLRC VAR_9, VAR_10;
    HDC VAR_11, VAR_12;

    if (VAR_7.wgl.instance)
        return VAR_2;

    VAR_7.wgl.instance = FUNC_3("opengl32.dll");
    if (!VAR_7.wgl.instance)
    {
        FUNC_6(VAR_1,
                             "WGL: Failed to load opengl32.dll");
        return VAR_0;
    }

    VAR_7.wgl.CreateContext = (PFN_wglCreateContext)
        FUNC_2(VAR_7.wgl.instance, "wglCreateContext");
    VAR_7.wgl.DeleteContext = (PFN_wglDeleteContext)
        FUNC_2(VAR_7.wgl.instance, "wglDeleteContext");
    VAR_7.wgl.GetProcAddress = (PFN_wglGetProcAddress)
        FUNC_2(VAR_7.wgl.instance, "wglGetProcAddress");
    VAR_7.wgl.GetCurrentDC = (PFN_wglGetCurrentDC)
        FUNC_2(VAR_7.wgl.instance, "wglGetCurrentDC");
    VAR_7.wgl.GetCurrentContext = (PFN_wglGetCurrentContext)
        FUNC_2(VAR_7.wgl.instance, "wglGetCurrentContext");
    VAR_7.wgl.MakeCurrent = (PFN_wglMakeCurrent)
        FUNC_2(VAR_7.wgl.instance, "wglMakeCurrent");
    VAR_7.wgl.ShareLists = (PFN_wglShareLists)
        FUNC_2(VAR_7.wgl.instance, "wglShareLists");






    VAR_12 = FUNC_1(VAR_7.win32.helperWindowHandle);

    FUNC_5(&VAR_8, sizeof(VAR_8));
    VAR_8.nSize = sizeof(VAR_8);
    VAR_8.nVersion = 1;
    VAR_8.dwFlags = VAR_4 | VAR_5 | VAR_3;
    VAR_8.iPixelType = VAR_6;
    VAR_8.cColorBits = 24;

    if (!FUNC_4(VAR_12, FUNC_0(VAR_12, &VAR_8), &VAR_8))
    {
        FUNC_6(VAR_1,
                             "WGL: Failed to set pixel format for dummy context");
        return VAR_0;
    }

    VAR_10 = FUNC_8(VAR_12);
    if (!VAR_10)
    {
        FUNC_6(VAR_1,
                             "WGL: Failed to create dummy context");
        return VAR_0;
    }

    VAR_11 = FUNC_11();
    VAR_9 = FUNC_10();

    if (!FUNC_13(VAR_12, VAR_10))
    {
        FUNC_6(VAR_1,
                             "WGL: Failed to make dummy context current");
        FUNC_13(VAR_11, VAR_9);
        FUNC_9(VAR_10);
        return VAR_0;
    }



    VAR_7.wgl.GetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)
        FUNC_12("wglGetExtensionsStringEXT");
    VAR_7.wgl.GetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)
        FUNC_12("wglGetExtensionsStringARB");
    VAR_7.wgl.CreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)
        FUNC_12("wglCreateContextAttribsARB");
    VAR_7.wgl.SwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)
        FUNC_12("wglSwapIntervalEXT");
    VAR_7.wgl.GetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)
        FUNC_12("wglGetPixelFormatAttribivARB");



    VAR_7.wgl.ARB_multisample =
        FUNC_7("WGL_ARB_multisample");
    VAR_7.wgl.ARB_framebuffer_sRGB =
        FUNC_7("WGL_ARB_framebuffer_sRGB");
    VAR_7.wgl.EXT_framebuffer_sRGB =
        FUNC_7("WGL_EXT_framebuffer_sRGB");
    VAR_7.wgl.ARB_create_context =
        FUNC_7("WGL_ARB_create_context");
    VAR_7.wgl.ARB_create_context_profile =
        FUNC_7("WGL_ARB_create_context_profile");
    VAR_7.wgl.EXT_create_context_es2_profile =
        FUNC_7("WGL_EXT_create_context_es2_profile");
    VAR_7.wgl.ARB_create_context_robustness =
        FUNC_7("WGL_ARB_create_context_robustness");
    VAR_7.wgl.ARB_create_context_no_error =
        FUNC_7("WGL_ARB_create_context_no_error");
    VAR_7.wgl.EXT_swap_control =
        FUNC_7("WGL_EXT_swap_control");
    VAR_7.wgl.EXT_colorspace =
        FUNC_7("WGL_EXT_colorspace");
    VAR_7.wgl.ARB_pixel_format =
        FUNC_7("WGL_ARB_pixel_format");
    VAR_7.wgl.ARB_context_flush_control =
        FUNC_7("WGL_ARB_context_flush_control");

    FUNC_13(VAR_11, VAR_9);
    FUNC_9(VAR_10);
    return VAR_2;
}
