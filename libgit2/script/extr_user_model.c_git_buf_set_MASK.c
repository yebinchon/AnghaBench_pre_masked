
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,void const*,size_t) ;

int FUNC_2(git_buf *VAR_0, const void *VAR_1, size_t VAR_2)
{
    VAR_0->ptr = FUNC_0(VAR_2 + 1);
    FUNC_1(VAR_0->ptr, VAR_1, VAR_2);
    VAR_0->size = VAR_2 + 1;
    return 0;
}
