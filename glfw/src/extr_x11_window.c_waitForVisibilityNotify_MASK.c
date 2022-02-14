
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int XEvent ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (double*) ;

__attribute__((used)) static GLFWbool FUNC_2(_GLFWwindow* VAR_4)
{
    XEvent VAR_5;
    double VAR_6 = 0.1;

    while (!FUNC_0(VAR_3.x11.display,
                                   VAR_4->x11.handle,
                                   VAR_2,
                                   &VAR_5))
    {
        if (!FUNC_1(&VAR_6))
            return VAR_0;
    }

    return VAR_1;
}
