
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;

inline int FUNC_1(const char* VAR_0, const char* VAR_1) {
   if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
      if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
         return 1;
      else
         return 0;
   }
   return (FUNC_0(VAR_0, VAR_1) == 0);
}
