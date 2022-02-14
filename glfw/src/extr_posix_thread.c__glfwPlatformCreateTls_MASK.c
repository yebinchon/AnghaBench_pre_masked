
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allocated; int key; } ;
struct TYPE_5__ {TYPE_1__ posix; } ;
typedef TYPE_2__ _GLFWtls ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

GLFWbool FUNC_3(_GLFWtls* VAR_3)
{
    FUNC_1(VAR_3->posix.allocated == VAR_0);

    if (FUNC_2(&VAR_3->posix.key, ((void*)0)) != 0)
    {
        FUNC_0(VAR_1,
                        "POSIX: Failed to create context TLS");
        return VAR_0;
    }

    VAR_3->posix.allocated = VAR_2;
    return VAR_2;
}
