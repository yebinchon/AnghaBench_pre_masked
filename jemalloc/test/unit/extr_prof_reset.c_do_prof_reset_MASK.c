
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (size_t,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int *,int *,void*,int) ;

__attribute__((used)) static void
FUNC_4(size_t VAR_0) {
 FUNC_0(FUNC_3("prof.reset", ((void*)0), ((void*)0),
     (void *)&VAR_0, sizeof(size_t)), 0,
     "Unexpected mallctl failure while resetting profile data");
 FUNC_1(VAR_0, FUNC_2(),
     "Expected profile sample rate change");
}
