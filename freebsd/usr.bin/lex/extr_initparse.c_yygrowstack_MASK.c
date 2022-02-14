
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef short YYSTYPE ;
struct TYPE_3__ {unsigned int stacksize; short* s_mark; short* s_base; short* l_base; short* l_mark; short* s_last; } ;
typedef TYPE_1__ YYSTACKDATA ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (short*,unsigned int) ;

__attribute__((used)) static int FUNC_1(YYSTACKDATA *VAR_2)
{
    int VAR_3;
    unsigned VAR_4;
    short *VAR_5;
    YYSTYPE *VAR_6;

    if ((VAR_4 = VAR_2->stacksize) == 0)
        VAR_4 = VAR_0;
    else if (VAR_4 >= VAR_1)
        return -1;
    else if ((VAR_4 *= 2) > VAR_1)
        VAR_4 = VAR_1;

    VAR_3 = VAR_2->s_mark - VAR_2->s_base;
    VAR_5 = (short *)FUNC_0(VAR_2->s_base, VAR_4 * sizeof(*VAR_5));
    if (VAR_5 == ((void*)0))
        return -1;

    VAR_2->s_base = VAR_5;
    VAR_2->s_mark = VAR_5 + VAR_3;

    VAR_6 = (YYSTYPE *)FUNC_0(VAR_2->l_base, VAR_4 * sizeof(*VAR_6));
    if (VAR_6 == ((void*)0))
        return -1;

    VAR_2->l_base = VAR_6;
    VAR_2->l_mark = VAR_6 + VAR_3;

    VAR_2->stacksize = VAR_4;
    VAR_2->s_last = VAR_2->s_base + VAR_4 - 1;
    return 0;
}
