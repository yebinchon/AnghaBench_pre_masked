
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allocated; scalar_t__ index; } ;
struct TYPE_5__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWtls ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

GLFWbool FUNC_3(_GLFWtls* VAR_4)
{
    FUNC_2(VAR_4->win32.allocated == VAR_0);

    VAR_4->win32.index = FUNC_0();
    if (VAR_4->win32.index == VAR_3)
    {
        FUNC_1(VAR_1,
                             "Win32: Failed to allocate TLS index");
        return VAR_0;
    }

    VAR_4->win32.allocated = VAR_2;
    return VAR_2;
}
