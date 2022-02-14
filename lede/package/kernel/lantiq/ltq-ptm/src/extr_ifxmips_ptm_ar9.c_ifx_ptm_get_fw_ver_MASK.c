
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int major; unsigned int minor; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(unsigned int *VAR_1, unsigned int *VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0), "pointer is NULL");
    FUNC_0(VAR_2 != ((void*)0), "pointer is NULL");

    *VAR_1 = VAR_0->major;
    *VAR_2 = VAR_0->minor;
}
