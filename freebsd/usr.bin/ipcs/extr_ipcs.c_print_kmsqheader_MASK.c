
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(int VAR_5)
{

 FUNC_0("Message Queues:\n");
 FUNC_0("T %12s %12s %-11s %-8s %-8s",
     "ID", "KEY", "MODE", "OWNER", "GROUP");
 if (VAR_5 & VAR_1)
  FUNC_0(" %-8s %-8s", "CREATOR", "CGROUP");
 if (VAR_5 & VAR_2)
  FUNC_0(" %20s %20s", "CBYTES", "QNUM");
 if (VAR_5 & VAR_0)
  FUNC_0(" %20s", "QBYTES");
 if (VAR_5 & VAR_3)
  FUNC_0(" %12s %12s", "LSPID", "LRPID");
 if (VAR_5 & VAR_4)
  FUNC_0(" %-8s %-8s %-8s", "STIME", "RTIME", "CTIME");
 FUNC_0("\n");
}
