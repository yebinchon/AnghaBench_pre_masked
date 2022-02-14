
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (char*,int,int) ;

__attribute__((used)) static double FUNC_1() {
   const unsigned long int VAR_0 = FUNC_0("info", 3, 4);
   if (VAR_0 == 0)
      return 0;

   const unsigned long int VAR_1 = FUNC_0("state", 5, 3);
   if (VAR_1 == 0)
      return 0;

   return VAR_1 * 100.0 / (double) VAR_0;
}
