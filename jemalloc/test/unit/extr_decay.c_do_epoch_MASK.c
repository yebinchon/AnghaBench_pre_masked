
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int epoch ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,int *,int *,void*,int) ;

void
FUNC_2(void) {
 uint64_t VAR_0 = 1;
 FUNC_0(FUNC_1("epoch", ((void*)0), ((void*)0), (void *)&VAR_0, sizeof(VAR_0)),
     0, "Unexpected mallctl() failure");
}
