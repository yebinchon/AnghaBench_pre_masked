
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {scalar_t__ window; scalar_t__ display; scalar_t__ surface; scalar_t__ context; int* gles2_extensions; } ;
typedef TYPE_1__ IJK_EGL ;
typedef int EGLint ;
typedef scalar_t__ EGLSurface ;
typedef scalar_t__ EGLNativeWindowType ;
typedef scalar_t__ EGLDisplay ;
typedef int EGLConfig ;
typedef int EGLBoolean ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ,int) ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;




 int VAR_6 ;

 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 size_t VAR_8 ;
 int FUNC_6 (scalar_t__,int const*,int *,int,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__,int const*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ,int*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,int*,int*) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 char* FUNC_20 (char const*) ;
 char* FUNC_21 (char*,char*,char**) ;

__attribute__((used)) static EGLBoolean FUNC_22(IJK_EGL* VAR_9, EGLNativeWindowType VAR_10)
{
    if (VAR_10 && VAR_10 == VAR_9->window &&
        VAR_9->display &&
        VAR_9->surface &&
        VAR_9->context) {

        if (!FUNC_15(VAR_9->display, VAR_9->surface, VAR_9->surface, VAR_9->context)) {
            FUNC_0("[EGL] elgMakeCurrent() failed (cached)\n");
            return VAR_1;
        }

        return VAR_6;
    }

    FUNC_4(VAR_9);
    VAR_9->window = VAR_10;

    if (!VAR_10)
        return VAR_1;

    EGLDisplay VAR_11 = FUNC_12(VAR_0);
    if (VAR_11 == VAR_4) {
        FUNC_0("[EGL] eglGetDisplay failed\n");
        return VAR_1;
    }


    EGLint VAR_12, VAR_13;
    if (!FUNC_14(VAR_11, &VAR_12, &VAR_13)) {
        FUNC_0("[EGL] eglInitialize failed\n");
        return VAR_1;
    }
    FUNC_1("[EGL] eglInitialize %d.%d\n", (int)VAR_12, (int)VAR_13);


    static const EGLint VAR_14[] = {
        130, 132,
        129, 128,
        136, 8,
        134, 8,
        131, 8,
        133
    };

    static const EGLint VAR_15[] = {
        135, 2,
        133
    };

    EGLConfig VAR_16;
    EGLint VAR_17;
    if (!FUNC_6(VAR_11, VAR_14, &VAR_16, 1, &VAR_17)) {
        FUNC_0("[EGL] eglChooseConfig failed\n");
        FUNC_16(VAR_11);
        return VAR_1;
    }
    EGLSurface VAR_18 = FUNC_8(VAR_11, VAR_16, VAR_10, ((void*)0));
    if (VAR_18 == VAR_5) {
        FUNC_0("[EGL] eglCreateWindowSurface failed\n");
        FUNC_16(VAR_11);
        return VAR_1;
    }

    EGLSurface VAR_19 = FUNC_7(VAR_11, VAR_16, VAR_3, VAR_15);
    if (VAR_19 == VAR_3) {
        FUNC_0("[EGL] eglCreateContext failed\n");
        FUNC_10(VAR_11, VAR_18);
        FUNC_16(VAR_11);
        return VAR_1;
    }

    if (!FUNC_15(VAR_11, VAR_18, VAR_18, VAR_19)) {
        FUNC_0("[EGL] elgMakeCurrent() failed (new)\n");
        FUNC_9(VAR_11, VAR_19);
        FUNC_10(VAR_11, VAR_18);
        FUNC_16(VAR_11);
        return VAR_1;
    }
    FUNC_5();

    VAR_9->context = VAR_19;
    VAR_9->surface = VAR_18;
    VAR_9->display = VAR_11;
    return VAR_6;
}
