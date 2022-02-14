
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "options:\n");
 FUNC_1(VAR_0, "-a\t\tgenerate all files, including samples\n");
 FUNC_1(VAR_0, "-b\t\tbackward compatibility mode (generates code for FreeBSD 4.X)\n");

 FUNC_1(VAR_0, "-c\t\tgenerate XDR routines\n");
 FUNC_1(VAR_0, "-C\t\tANSI C mode\n");
 FUNC_1(VAR_0, "-Dname[=value]\tdefine a symbol (same as #define)\n");
 FUNC_1(VAR_0, "-h\t\tgenerate header file\n");
 FUNC_1(VAR_0, "-i size\t\tsize at which to start generatinginline code\n");

 FUNC_1(VAR_0, "-I\t\tgenerate code for inetd support in server\n");
 FUNC_1(VAR_0, "-K seconds\tserver exits after K seconds ofinactivity\n");

 FUNC_1(VAR_0, "-l\t\tgenerate client side stubs\n");
 FUNC_1(VAR_0, "-L\t\tserver errors will be printed to syslog\n");
 FUNC_1(VAR_0, "-m\t\tgenerate server side stubs\n");
 FUNC_1(VAR_0, "-M\t\tgenerate MT-safe code\n");
 FUNC_1(VAR_0, "-n netid\tgenerate server code that supportsnamed netid\n");

 FUNC_1(VAR_0, "-N\t\tsupports multiple arguments andcall-by-value\n");

 FUNC_1(VAR_0, "-o outfile\tname of the output file\n");
 FUNC_1(VAR_0, "-P\t\tgenerate code for port monitoring support in server\n");
 FUNC_1(VAR_0, "-s nettype\tgenerate server code that supports namednettype\n");

 FUNC_1(VAR_0, "-Sc\t\tgenerate sample client code that uses remoteprocedures\n");

 FUNC_1(VAR_0, "-Ss\t\tgenerate sample server code that definesremote procedures\n");

 FUNC_1(VAR_0, "-Sm \t\tgenerate makefile template \n");

 FUNC_1(VAR_0, "-t\t\tgenerate RPC dispatch table\n");
 FUNC_1(VAR_0, "-T\t\tgenerate code to support RPC dispatch tables\n");
 FUNC_1(VAR_0, "-Y path\t\tpath where cpp is found\n");
 FUNC_0(1);
}
