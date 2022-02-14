
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ va_list ;
struct TYPE_3__ {size_t size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;

int FUNC_4(git_buf *VAR_0, const char *VAR_1, va_list VAR_2)
{
    char VAR_3, *VAR_4;
    size_t VAR_5;

    FUNC_1(VAR_1);
    FUNC_2(VAR_1);

    VAR_3 = *VAR_1;
    VAR_3 = *(char *)VAR_2;

    VAR_0->ptr = FUNC_0(VAR_5);
    FUNC_3(VAR_0->ptr);
    VAR_0->size = VAR_5;

    return 0;
}
