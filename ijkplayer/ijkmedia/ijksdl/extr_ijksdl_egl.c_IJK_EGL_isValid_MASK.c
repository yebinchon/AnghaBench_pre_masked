
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context; scalar_t__ surface; scalar_t__ display; scalar_t__ window; } ;
typedef TYPE_1__ IJK_EGL ;
typedef int EGLBoolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static EGLBoolean FUNC_0(IJK_EGL* VAR_2)
{
    if (VAR_2 &&
        VAR_2->window &&
        VAR_2->display &&
        VAR_2->surface &&
        VAR_2->context) {
        return VAR_1;
    }

    return VAR_0;
}
