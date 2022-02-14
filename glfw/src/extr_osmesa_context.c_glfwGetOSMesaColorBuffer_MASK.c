
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int handle; } ;
struct TYPE_4__ {TYPE_2__ osmesa; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int GLint ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*,int*,void**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(GLFWwindow* VAR_3, int* VAR_4,
                                     int* VAR_5, int* VAR_6, void** VAR_7)
{
    void* VAR_8;
    GLint VAR_9, VAR_10, VAR_11;
    _GLFWwindow* VAR_12 = (_GLFWwindow*) VAR_3;
    FUNC_3(VAR_12 != ((void*)0));

    FUNC_1(VAR_0);

    if (!FUNC_0(VAR_12->context.osmesa.handle,
                              &VAR_9, &VAR_10,
                              &VAR_11, &VAR_8))
    {
        FUNC_2(VAR_1,
                        "OSMesa: Failed to retrieve color buffer");
        return VAR_0;
    }

    if (VAR_4)
        *VAR_4 = VAR_9;
    if (VAR_5)
        *VAR_5 = VAR_10;
    if (VAR_6)
        *VAR_6 = VAR_11;
    if (VAR_7)
        *VAR_7 = VAR_8;

    return VAR_2;
}
