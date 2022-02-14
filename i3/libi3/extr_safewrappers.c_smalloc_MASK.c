
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 void* FUNC_1 (size_t) ;

void *FUNC_2(size_t VAR_1) {
    void *VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == ((void*)0))
        FUNC_0(VAR_0, "malloc(%zd)", VAR_1);
    return VAR_2;
}
