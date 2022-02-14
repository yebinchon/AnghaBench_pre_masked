
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {scalar_t__* loads; } ;


 scalar_t__ FUNC_0 (struct sysinfo*) ;

void FUNC_1(double VAR_0[3]) {
  struct sysinfo VAR_1;

  if (FUNC_0(&VAR_1) < 0) return;

  VAR_0[0] = (double) VAR_1.loads[0] / 65536.0;
  VAR_0[1] = (double) VAR_1.loads[1] / 65536.0;
  VAR_0[2] = (double) VAR_1.loads[2] / 65536.0;
}
