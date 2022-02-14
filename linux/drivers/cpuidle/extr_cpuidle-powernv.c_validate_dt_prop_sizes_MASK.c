
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, int VAR_1,
      const char *VAR_2, int VAR_3)
{
 if (VAR_1 == VAR_3)
  return 0;

 FUNC_0("cpuidle-powernv: array sizes don't match for %s and %s\n",
  VAR_0, VAR_2);
 return -1;
}
