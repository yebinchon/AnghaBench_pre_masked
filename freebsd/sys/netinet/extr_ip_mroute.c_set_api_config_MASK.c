
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_long ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

int
FUNC_3(uint32_t *VAR_7)
{
    u_long VAR_8;
    if (VAR_3 > 0) {
 *VAR_7 = 0;
 return VAR_0;
    }
    if (VAR_4) {
 *VAR_7 = 0;
 return VAR_0;
    }

    FUNC_1();

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
 if (FUNC_0(&VAR_1[VAR_8]) != ((void*)0)) {
     FUNC_2();
     *VAR_7 = 0;
     return VAR_0;
 }
    }

    FUNC_2();

    VAR_2 = *VAR_7 & VAR_6;
    *VAR_7 = VAR_2;

    return 0;
}
