
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int surface; int display; TYPE_1__* opaque; } ;
struct TYPE_5__ {int renderer; } ;
typedef int SDL_VoutOverlay ;
typedef TYPE_1__ IJK_EGL_Opaque ;
typedef TYPE_2__ IJK_EGL ;
typedef int EGLNativeWindowType ;
typedef int EGLBoolean ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static EGLBoolean FUNC_4(IJK_EGL* VAR_2, EGLNativeWindowType VAR_3, SDL_VoutOverlay *VAR_4)
{
    IJK_EGL_Opaque *VAR_5 = VAR_2->opaque;

    if (!FUNC_1(VAR_2, VAR_4)) {
        FUNC_0("[EGL] IJK_EGL_prepareRenderer failed\n");
        return VAR_0;
    }

    if (!FUNC_2(VAR_5->renderer, VAR_4)) {
        FUNC_0("[EGL] IJK_GLES2_render failed\n");
        return VAR_0;
    }

    FUNC_3(VAR_2->display, VAR_2->surface);

    return VAR_1;
}
