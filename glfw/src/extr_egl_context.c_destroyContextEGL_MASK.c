
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ handle; scalar_t__ surface; int * client; } ;
struct TYPE_9__ {scalar_t__ client; TYPE_2__ egl; } ;
struct TYPE_10__ {TYPE_3__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_7__ {int display; } ;
struct TYPE_11__ {TYPE_1__ egl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_4)
{





    {
        if (VAR_4->context.egl.client)
        {
            FUNC_0(VAR_4->context.egl.client);
            VAR_4->context.egl.client = ((void*)0);
        }
    }

    if (VAR_4->context.egl.surface)
    {
        FUNC_2(VAR_3.egl.display, VAR_4->context.egl.surface);
        VAR_4->context.egl.surface = VAR_1;
    }

    if (VAR_4->context.egl.handle)
    {
        FUNC_1(VAR_3.egl.display, VAR_4->context.egl.handle);
        VAR_4->context.egl.handle = VAR_0;
    }
}
