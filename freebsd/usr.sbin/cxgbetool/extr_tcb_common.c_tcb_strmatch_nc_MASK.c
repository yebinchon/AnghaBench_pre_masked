
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(char *VAR_1, char *VAR_2) {
    while (*VAR_1)
        if (FUNC_0(*VAR_1++) != FUNC_0(*VAR_2++)) return (VAR_0);
    return (!(*VAR_2));
}
