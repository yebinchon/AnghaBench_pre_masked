
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * extensions; } ;
struct TYPE_4__ {TYPE_1__ vk; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

const char** FUNC_3(uint32_t* VAR_2)
{
    FUNC_2(VAR_2 != ((void*)0));

    *VAR_2 = 0;

    FUNC_0(((void*)0));

    if (!FUNC_1(VAR_0))
        return ((void*)0);

    if (!VAR_1.vk.extensions[0])
        return ((void*)0);

    *VAR_2 = 2;
    return (const char**) VAR_1.vk.extensions;
}
