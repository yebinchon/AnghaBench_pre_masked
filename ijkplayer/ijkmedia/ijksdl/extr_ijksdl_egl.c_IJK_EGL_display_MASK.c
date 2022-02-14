
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int display; int * opaque; } ;
typedef int SDL_VoutOverlay ;
typedef int IJK_EGL_Opaque ;
typedef TYPE_1__ IJK_EGL ;
typedef int EGLNativeWindowType ;
typedef int EGLBoolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;

EGLBoolean FUNC_4(IJK_EGL* VAR_3, EGLNativeWindowType VAR_4, SDL_VoutOverlay *VAR_5)
{
    EGLBoolean VAR_6 = VAR_0;
    if (!VAR_3)
        return VAR_0;

    IJK_EGL_Opaque *VAR_7 = VAR_3->opaque;
    if (!VAR_7)
        return VAR_0;

    if (!FUNC_1(VAR_3, VAR_4))
        return VAR_0;

    VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
    FUNC_2(VAR_3->display, VAR_2, VAR_2, VAR_1);
    FUNC_3();
    return VAR_6;
}
