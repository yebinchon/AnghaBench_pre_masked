
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct errs {int errnum; int arg; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
    int VAR_2;
    const struct errs * const VAR_3 = (const struct errs * const)VAR_0;
    const struct errs * const VAR_4 = (const struct errs * const)VAR_1;



    if ((VAR_2 = VAR_3->errnum - VAR_4->errnum) == 0)
    {
 return(FUNC_0(VAR_3->arg, VAR_4->arg));
    }
    return(VAR_2);
}
