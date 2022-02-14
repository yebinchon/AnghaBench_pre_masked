
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void
FUNC_1(void)
{
 FUNC_0(VAR_0,
"usage:  camdd <-i|-o pass=pass0,bs=1M,offset=1M,depth=4>\n"
"              <-i|-o file=/tmp/file,bs=512K,offset=1M>\n"
"              <-i|-o file=/dev/da0,bs=512K,offset=1M>\n"
"              <-i|-o file=/dev/nsa0,bs=512K>\n"
"              [-C retry_count][-E][-m max_io_amt][-t timeout_secs][-v][-h]\n"
"Option description\n"
"-i <arg=val>  Specify input device/file and parameters\n"
"-o <arg=val>  Specify output device/file and parameters\n"
"Input and Output parameters\n"
"pass=name     Specify a pass(4) device like pass0 or /dev/pass0\n"
"file=name     Specify a file or device, /tmp/foo, /dev/da0, /dev/null\n"
"              or - for stdin/stdout\n"
"bs=blocksize  Specify blocksize in bytes, or using K, M, G, etc. suffix\n"
"offset=len    Specify starting offset in bytes or using K, M, G suffix\n"
"              NOTE: offset cannot be specified on tapes, pipes, stdin/out\n"
"depth=N       Specify a numeric queue depth.  This only applies to pass(4)\n"
"mcs=N         Specify a minimum cmd size for pass(4) read/write commands\n"
"Optional arguments\n"
"-C retry_cnt  Specify a retry count for pass(4) devices\n"
"-E            Enable CAM error recovery for pass(4) devices\n"
"-m max_io     Specify the maximum amount to be transferred in bytes or\n"
"              using K, G, M, etc. suffixes\n"
"-t timeout    Specify the I/O timeout to use with pass(4) devices\n"
"-v            Enable verbose error recovery\n"
"-h            Print this message\n");
}
