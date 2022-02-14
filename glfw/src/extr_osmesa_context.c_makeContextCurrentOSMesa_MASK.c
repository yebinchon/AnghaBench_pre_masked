
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int * buffer; int handle; } ;
struct TYPE_9__ {TYPE_1__ osmesa; } ;
struct TYPE_10__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_11__ {int contextSlot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int,int) ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,int*,int*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int * FUNC_4 (int,size_t) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(_GLFWwindow* VAR_3)
{
    if (VAR_3)
    {
        int VAR_4, VAR_5;
        FUNC_2(VAR_3, &VAR_4, &VAR_5);


        if ((VAR_3->context.osmesa.buffer == ((void*)0)) ||
            (VAR_4 != VAR_3->context.osmesa.width) ||
            (VAR_5 != VAR_3->context.osmesa.height))
        {
            FUNC_5(VAR_3->context.osmesa.buffer);


            VAR_3->context.osmesa.buffer = FUNC_4(4, (size_t) VAR_4 * VAR_5);
            VAR_3->context.osmesa.width = VAR_4;
            VAR_3->context.osmesa.height = VAR_5;
        }

        if (!FUNC_0(VAR_3->context.osmesa.handle,
                               VAR_3->context.osmesa.buffer,
                               VAR_1,
                               VAR_4, VAR_5))
        {
            FUNC_1(VAR_0,
                            "OSMesa: Failed to make context current");
            return;
        }
    }

    FUNC_3(&VAR_2.contextSlot, VAR_3);
}
