
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_0(VAR_0,
  "%s [-u bus_num] [-prt] [-c node] [-d node] [-o node] [-s node]\n"
  "\t  [-l file] [-g gap_count] [-f force_root ] [-b pri_req]\n"
  "\t  [-M mode] [-R filename] [-S filename] [-m EUI64 | hostname]\n"
  "\t-u: specify bus number\n"
  "\t-p: Display current PHY register settings\n"
  "\t-r: bus reset\n"
  "\t-t: read topology map\n"
  "\t-c: read configuration ROM\n"
  "\t-d: hex dump of configuration ROM\n"
  "\t-o: send link-on packet to the node\n"
  "\t-s: write RESET_START register on the node\n"
  "\t-l: load and parse hex dump file of configuration ROM\n"
  "\t-g: set gap count\n"
  "\t-f: force root node\n"
  "\t-b: set PRIORITY_BUDGET register on all supported nodes\n"
  "\t-M: specify dv or mpeg\n"
  "\t-R: Receive DV or MPEG TS stream\n"
  "\t-S: Send DV stream\n"
  "\t-m: set fwmem target\n"
  , FUNC_1() );
 FUNC_0(VAR_0, "\n");
}
