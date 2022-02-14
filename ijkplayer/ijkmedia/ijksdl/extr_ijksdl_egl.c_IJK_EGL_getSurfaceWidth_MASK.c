
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int surface; int display; } ;
typedef TYPE_1__ IJK_EGL ;
typedef int EGLint ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(IJK_EGL* VAR_1)
{
    EGLint VAR_2 = 0;
    if (!FUNC_2(VAR_1->display, VAR_1->surface, VAR_0, &VAR_2)) {
        FUNC_0("[EGL] eglQuerySurface(EGL_WIDTH) returned error %d", FUNC_1());
        return 0;
    }

    return VAR_2;
}
