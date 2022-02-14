
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {double uptime; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sysinfo*) ;

int FUNC_2(double* VAR_1) {
  struct sysinfo VAR_2;

  if (FUNC_1(&VAR_2) < 0)
    return FUNC_0(VAR_0);

  *VAR_1 = VAR_2.uptime;
  return 0;
}
