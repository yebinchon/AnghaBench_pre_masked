
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ height; scalar_t__ width; scalar_t__ buffer; int * handle; } ;
struct TYPE_6__ {TYPE_1__ osmesa; } ;
struct TYPE_7__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_0)
{
    if (VAR_0->context.osmesa.handle)
    {
        FUNC_0(VAR_0->context.osmesa.handle);
        VAR_0->context.osmesa.handle = ((void*)0);
    }

    if (VAR_0->context.osmesa.buffer)
    {
        FUNC_1(VAR_0->context.osmesa.buffer);
        VAR_0->context.osmesa.width = 0;
        VAR_0->context.osmesa.height = 0;
    }
}
