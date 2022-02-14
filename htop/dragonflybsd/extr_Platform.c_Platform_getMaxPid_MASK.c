
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int maxPid ;


 int FUNC_0 (char*,int*,size_t*,int *,int ) ;

int FUNC_1() {
   int VAR_0;
   size_t VAR_1 = sizeof(VAR_0);
   int VAR_2 = FUNC_0("kern.pid_max", &VAR_0, &VAR_1, ((void*)0), 0);
   if (VAR_2) {
      return 999999;
   }
   return VAR_0;
}
