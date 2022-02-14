
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ off_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;

int
FUNC_2(int VAR_2, uint32_t *VAR_3, off_t *VAR_4)
{
    uint32_t VAR_5 = ~0;
    int VAR_6 ;
    off_t VAR_7 ;
    char VAR_8[VAR_0], *VAR_9 ;

    VAR_7 = 0 ;
    VAR_1 = ~VAR_1 ;
    while ((VAR_6 = FUNC_1(VAR_2, VAR_8, sizeof(VAR_8))) > 0)
        for (VAR_7 += VAR_6, VAR_9 = VAR_8; VAR_6--; ++VAR_9) {
     FUNC_0(VAR_5, *VAR_9) ;
     FUNC_0(VAR_1, *VAR_9) ;
 }
    if (VAR_6 < 0)
        return 1 ;

    *VAR_4 = VAR_7 ;
    *VAR_3 = ~VAR_5 ;
    VAR_1 = ~VAR_1 ;
    return 0 ;
}
