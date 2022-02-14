
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 void* FUNC_1 (void*,size_t) ;

void *FUNC_2(void *VAR_1, size_t VAR_2) {
    void *VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 == ((void*)0) && VAR_2 > 0)
        FUNC_0(VAR_0, "realloc(%zd)", VAR_2);
    return VAR_3;
}
