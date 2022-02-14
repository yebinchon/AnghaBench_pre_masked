
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;

void
FUNC_3(unsigned char *VAR_1)
{
    do {
        FUNC_0(VAR_1, VAR_0);
        VAR_1[VAR_0 - 1] &= 0x1f;
    } while (FUNC_1(VAR_1) == 0 ||
             FUNC_2(VAR_1, VAR_0));
}
