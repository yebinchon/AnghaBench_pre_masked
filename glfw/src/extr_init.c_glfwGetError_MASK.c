
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int code; char* description; } ;
typedef TYPE_1__ _GLFWerror ;
struct TYPE_6__ {int errorSlot; scalar_t__ initialized; } ;


 void* VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

int FUNC_1(const char** VAR_3)
{
    _GLFWerror* VAR_4;
    int VAR_5 = VAR_0;

    if (VAR_3)
        *VAR_3 = ((void*)0);

    if (VAR_1.initialized)
        VAR_4 = FUNC_0(&VAR_1.errorSlot);
    else
        VAR_4 = &VAR_2;

    if (VAR_4)
    {
        VAR_5 = VAR_4->code;
        VAR_4->code = VAR_0;
        if (VAR_3 && VAR_5)
            *VAR_3 = VAR_4->description;
    }

    return VAR_5;
}
