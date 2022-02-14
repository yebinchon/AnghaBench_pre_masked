
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2()
{
 FUNC_1("usage: lb [options]\n");
 FUNC_1("where options are:\n");
 FUNC_1("  -h              	view help text\n");
 FUNC_1("  -i iface        	interface name (required)\n");
 FUNC_1("  -p [prefix:]npipes	add a new group of output pipes\n");
 FUNC_1("  -B nbufs        	number of extra buffers (default: %d)\n", VAR_1);
 FUNC_1("  -b batch        	batch size (default: %d)\n", VAR_0);
 FUNC_1("  -w seconds        	wait for link up (default: %d)\n", VAR_2);
 FUNC_1("  -W                    enable busy waiting. this will run your CPU at 100%%\n");
 FUNC_1("  -s seconds      	seconds between syslog stats messages (default: 0)\n");
 FUNC_1("  -o seconds      	seconds between stdout stats messages (default: 0)\n");
 FUNC_0(0);
}
