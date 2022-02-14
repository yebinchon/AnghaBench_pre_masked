
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int point; } ;


 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

struct mount *FUNC_2(char *VAR_0) {
    struct mount *VAR_1 = FUNC_0(VAR_0);
    char *VAR_2 = VAR_0;
    const char *VAR_3 = VAR_0 + FUNC_1(VAR_1->point);
    while (*VAR_3 != '\0')
        *VAR_2++ = *VAR_3++;
    *VAR_2 = '\0';
    return VAR_1;
}
