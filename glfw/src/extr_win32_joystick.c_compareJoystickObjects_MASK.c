
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int offset; } ;
typedef TYPE_1__ _GLFWjoyobjectWin32 ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1)
{
    const _GLFWjoyobjectWin32* VAR_2 = VAR_0;
    const _GLFWjoyobjectWin32* VAR_3 = VAR_1;

    if (VAR_2->type != VAR_3->type)
        return VAR_2->type - VAR_3->type;

    return VAR_2->offset - VAR_3->offset;
}
