
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
 if (FUNC_0("started_auditd"))
  FUNC_1("service auditd onestop > /dev/null 2>&1");
}
