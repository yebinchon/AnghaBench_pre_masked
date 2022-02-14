
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opaque; int * opaque_class; } ;
typedef int IJK_EGL_Opaque ;
typedef TYPE_1__ IJK_EGL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

IJK_EGL *FUNC_2()
{
    IJK_EGL *VAR_1 = (IJK_EGL*) FUNC_1(sizeof(IJK_EGL));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->opaque_class = &VAR_0;
    VAR_1->opaque = FUNC_1(sizeof(IJK_EGL_Opaque));
    if (!VAR_1->opaque) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
