
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sysinfo {int mem_unit; scalar_t__ totalram; } ;


 scalar_t__ FUNC_0 (struct sysinfo*) ;

uint64_t FUNC_1(void) {
  struct sysinfo VAR_0;

  if (FUNC_0(&VAR_0) == 0)
    return (uint64_t) VAR_0.totalram * VAR_0.mem_unit;
  return 0;
}
