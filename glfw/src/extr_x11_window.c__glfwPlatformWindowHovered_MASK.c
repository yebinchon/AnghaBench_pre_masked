
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ Window ;
struct TYPE_6__ {int display; scalar_t__ root; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*,scalar_t__*,int*,int*,int*,int*,unsigned int*) ;
 TYPE_5__ VAR_2 ;

int FUNC_1(_GLFWwindow* VAR_3)
{
    Window VAR_4 = VAR_2.x11.root;
    while (VAR_4)
    {
        Window VAR_5;
        int VAR_6, VAR_7, VAR_8, VAR_9;
        unsigned int VAR_10;

        if (!FUNC_0(VAR_2.x11.display, VAR_4,
                           &VAR_5, &VAR_4, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10))
        {
            return VAR_0;
        }

        if (VAR_4 == VAR_3->x11.handle)
            return VAR_1;
    }

    return VAR_0;
}
