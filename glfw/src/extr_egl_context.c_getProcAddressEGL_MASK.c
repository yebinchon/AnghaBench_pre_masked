
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ client; } ;
struct TYPE_7__ {TYPE_1__ egl; } ;
struct TYPE_8__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_9__ {int contextSlot; } ;
typedef scalar_t__ GLFWglproc ;


 TYPE_5__ VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static GLFWglproc FUNC_3(const char* VAR_1)
{
    _GLFWwindow* VAR_2 = FUNC_0(&VAR_0.contextSlot);

    if (VAR_2->context.egl.client)
    {
        GLFWglproc VAR_3 = (GLFWglproc) FUNC_1(VAR_2->context.egl.client,
                                                   VAR_1);
        if (VAR_3)
            return VAR_3;
    }

    return FUNC_2(VAR_1);
}
