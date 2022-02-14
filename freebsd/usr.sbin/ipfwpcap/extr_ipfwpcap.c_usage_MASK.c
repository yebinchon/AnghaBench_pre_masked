
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1,
"\n"
"usage:\n"
"    %s [-dr] [-b maxbytes] [-p maxpkts] [-P pidfile] portnum dumpfile\n"
"\n"
"where:\n"
"	'-d'  = enable debugging messages.\n"
"	'-r'  = reflect. write packets back to the divert socket.\n"
"		(ie. simulate the original intent of \"ipfw tee\").\n"
"	'-rr' = indicate that it is okay to quit if packet-count or\n"
"		byte-count limits are reached (see the NOTE below\n"
"		about what this implies).\n"
"	'-b bytcnt'   = stop dumping after {bytcnt} bytes.\n"
"	'-p pktcnt'   = stop dumping after {pktcnt} packets.\n"
"	'-P pidfile'  = alternate file to store the PID\n"
"			(default: /var/run/%s.{portnum}.pid).\n"
"\n"
"	portnum  = divert(4) socket port number.\n"
"	dumpfile = file to write captured packets (tcpdump format).\n"
"		   (specify '-' to write packets to stdout).\n"
"\n"
"The '-r' option should not be necessary, but because \"ipfw tee\" is broken\n"
"(see BUGS in ipfw(8) for details) this feature can be used along with\n"
"an \"ipfw divert\" rule to simulate the original intent of \"ipfw tee\".\n"
"\n"
"NOTE: With an \"ipfw divert\" rule, diverted packets will silently\n"
"      disappear if there is nothing listening to the divert socket.\n"
"\n", VAR_0, VAR_0);
 FUNC_0(1);
}
