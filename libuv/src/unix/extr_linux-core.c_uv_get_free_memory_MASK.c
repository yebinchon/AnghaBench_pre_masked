
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct sysinfo {scalar_t__ mem_unit; scalar_t__ freeram; } ;


 scalar_t__ FUNC_0 (struct sysinfo*) ;
 scalar_t__ FUNC_1 (char*) ;

uint64_t FUNC_2(void) {
  struct sysinfo VAR_0;
  uint64_t VAR_1;

  VAR_1 = FUNC_1("MemFree:");

  if (VAR_1 != 0)
    return VAR_1;

  if (0 == FUNC_0(&VAR_0))
    return (uint64_t) VAR_0.freeram * VAR_0.mem_unit;

  return 0;
}
