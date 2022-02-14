
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (void* const,size_t const,int ) ;

__attribute__((used)) static int
FUNC_2(void * const VAR_3, const size_t VAR_4)
{
    int VAR_5;

    FUNC_0(VAR_4 <= 256U);
    do {
        VAR_5 = FUNC_1(VAR_3, VAR_4, 0);
    } while (VAR_5 < 0 && (VAR_2 == VAR_1 || VAR_2 == VAR_0));

    return (VAR_5 == (int) VAR_4) - 1;
}
