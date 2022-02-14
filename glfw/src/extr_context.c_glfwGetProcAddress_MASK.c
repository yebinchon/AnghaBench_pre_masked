
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* getProcAddress ) (char const*) ;} ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_7__ {int contextSlot; } ;
typedef int * GLFWglproc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char const*) ;

GLFWglproc FUNC_5(const char* VAR_2)
{
    _GLFWwindow* VAR_3;
    FUNC_3(VAR_2 != ((void*)0));

    FUNC_0(((void*)0));

    VAR_3 = FUNC_2(&VAR_1.contextSlot);
    if (!VAR_3)
    {
        FUNC_1(VAR_0,
                        "Cannot query entry point without a current OpenGL or OpenGL ES context");
        return ((void*)0);
    }

    return VAR_3->context.getProcAddress(VAR_2);
}
