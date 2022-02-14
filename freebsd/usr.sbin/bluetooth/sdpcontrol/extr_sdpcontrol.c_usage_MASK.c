
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
"Usage: sdpcontrol options command\n" "Where options are:\n"

"	-a address	address to connect to\n" "	-c path		path to the control socket (default is %s)\n" "	-h		display usage and quit\n" "	-l		connect to the local SDP server via control socket\n" "	command		one of the supported commands\n", VAR_0);




 FUNC_0(255);
}
