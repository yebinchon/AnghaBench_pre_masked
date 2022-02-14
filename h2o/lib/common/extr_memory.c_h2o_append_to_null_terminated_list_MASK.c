
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** FUNC_0 (void**,size_t) ;

void FUNC_1(void ***VAR_0, void *VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; (*VAR_0)[VAR_2] != ((void*)0); ++VAR_2)
        ;
    *VAR_0 = FUNC_0(*VAR_0, (VAR_2 + 2) * sizeof(void *));
    (*VAR_0)[VAR_2++] = VAR_1;
    (*VAR_0)[VAR_2] = ((void*)0);
}
