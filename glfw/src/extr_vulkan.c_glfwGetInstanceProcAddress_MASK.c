
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VkInstance ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;
typedef int * GLFWvkproc ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;

GLFWvkproc FUNC_6(VkInstance VAR_2,
                                              const char* VAR_3)
{
    GLFWvkproc VAR_4;
    FUNC_3(VAR_3 != ((void*)0));

    FUNC_0(((void*)0));

    if (!FUNC_1(VAR_0))
        return ((void*)0);

    VAR_4 = (GLFWvkproc) FUNC_5(VAR_2, VAR_3);







    if (!VAR_4)
        VAR_4 = (GLFWvkproc) FUNC_2(VAR_1.vk.handle, VAR_3);


    return VAR_4;
}
