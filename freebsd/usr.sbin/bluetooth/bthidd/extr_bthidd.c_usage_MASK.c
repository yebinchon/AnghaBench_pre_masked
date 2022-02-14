
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1,
"Usage: %s [options]\n" "Where options are:\n" "	-a address	specify address to listen on (default ANY)\n" "	-c file		specify config file name\n" "	-d		run in foreground\n" "	-H file		specify known HIDs file name\n" "	-h		display this message\n" "	-p file		specify PID file name\n" "	-t tval		specify client rescan interval (sec)\n" "	-u		enable evdev protocol support\n" "", VAR_0);
 FUNC_0(255);
}
