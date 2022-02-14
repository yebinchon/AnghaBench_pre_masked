
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
struct TYPE_5__ {TYPE_1__ x11; } ;
typedef TYPE_2__ _GLFWcursor ;
typedef int GLFWimage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int,int) ;

int FUNC_1(_GLFWcursor* VAR_2,
                              const GLFWimage* VAR_3,
                              int VAR_4, int VAR_5)
{
    VAR_2->x11.handle = FUNC_0(VAR_3, VAR_4, VAR_5);
    if (!VAR_2->x11.handle)
        return VAR_0;

    return VAR_1;
}
