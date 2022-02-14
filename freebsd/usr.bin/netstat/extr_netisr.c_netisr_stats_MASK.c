
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sysctl_netisr_workstream {int dummy; } ;
struct sysctl_netisr_proto {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sysctl_netisr_proto*) ;
 int FUNC_8 (struct sysctl_netisr_workstream*) ;
 int VAR_6 ;
 struct sysctl_netisr_proto* VAR_7 ;
 size_t VAR_8 ;
 struct sysctl_netisr_workstream* VAR_9 ;
 size_t VAR_10 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

void
FUNC_16(void)
{
 struct sysctl_netisr_workstream *VAR_11;
 struct sysctl_netisr_proto *VAR_12;
 u_int VAR_13;

 if (VAR_3) {
  FUNC_3();
  FUNC_4();
  FUNC_6();
  FUNC_5();
 } else {
  FUNC_0();
  FUNC_1();
  FUNC_2();
 }

 FUNC_13("netisr");

 FUNC_12("{T:Configuration}:\n");
 FUNC_12("{T:/%-25s} {T:/%12s} {T:/%12s}\n",
     "Setting", "Current", "Limit");
 FUNC_12("{T:/%-25s} {T:/%12u} {T:/%12u}\n",
     "Thread count", VAR_6, VAR_5);
 FUNC_12("{T:/%-25s} {T:/%12u} {T:/%12u}\n",
     "Default queue limit", VAR_1, VAR_4);
 FUNC_12("{T:/%-25s} {T:/%12s} {T:/%12s}\n",
     "Dispatch policy", VAR_2, "n/a");
 FUNC_12("{T:/%-25s} {T:/%12s} {T:/%12s}\n",
     "Threads bound to CPUs", VAR_0 ? "enabled" : "disabled",
     "n/a");
 FUNC_12("\n");

 FUNC_12("{T:Protocols}:\n");
 FUNC_12("{T:/%-6s} {T:/%5s} {T:/%6s} {T:/%-6s} {T:/%-8s} {T:/%-5s}\n",
     "Name", "Proto", "QLimit", "Policy", "Dispatch", "Flags");
 FUNC_15("protocol");
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  FUNC_14("protocol");
  VAR_12 = &VAR_7[VAR_13];
  FUNC_7(VAR_12);
  FUNC_10("protocol");
 }
 FUNC_11("protocol");
 FUNC_12("\n");

 FUNC_12("{T:Workstreams}:\n");
 FUNC_12("{T:/%4s} {T:/%3s} ", "WSID", "CPU");
 FUNC_12("{P:/%2s}", "");
 FUNC_12("{T:/%-6s} {T:/%5s} {T:/%5s} {T:/%8s} {T:/%8s} {T:/%8s} "
     "{T:/%8s} {T:/%8s}\n",
     "Name", "Len", "WMark", "Disp'd", "HDisp'd", "QDrops", "Queued",
     "Handled");
 FUNC_15("workstream");
 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  FUNC_14("workstream");
  VAR_11 = &VAR_9[VAR_13];
  FUNC_8(VAR_11);
  FUNC_10("workstream");
 }
 FUNC_11("workstream");
 FUNC_9("netisr");
}
