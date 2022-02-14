
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(int VAR_3)
{

 FUNC_0("Semaphores:\n");
 FUNC_0("T %12s %12s %-11s %-8s %-8s",
     "ID", "KEY", "MODE", "OWNER", "GROUP");
 if (VAR_3 & VAR_1)
  FUNC_0(" %-8s %-8s", "CREATOR", "CGROUP");
 if (VAR_3 & VAR_0)
  FUNC_0(" %12s", "NSEMS");
 if (VAR_3 & VAR_2)
  FUNC_0(" %-8s %-8s", "OTIME", "CTIME");
 FUNC_0("\n");
}
