
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

void *
FUNC_3(void *VAR_0, size_t VAR_1)
{
    void *VAR_2 = FUNC_1 (VAR_1);
    if (!VAR_2)
 FUNC_0(2, "memory error!");

    FUNC_2 (VAR_2, VAR_0, VAR_1);
    return VAR_2;
}
