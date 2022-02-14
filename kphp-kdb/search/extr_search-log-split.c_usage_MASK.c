
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;

void FUNC_1 (void) {
  FUNC_0 (VAR_1, "usage:\t%s [-v] [-u<username>] [-s<start-pos>] [-t<end-pos>] [-m<rem>,<mod>] [-D] <old-binlog-prefix> [<output-file>]\n"
    "\tCopies (some of) search records to another binlog. "
    "If <output-file> is specified, resulting binlog is appended to it.\n"
    "\t-h\tthis help screen\n"
    "\t-v\tverbose mode on\n"
    "\t-m<rem>,<mod>\tcopy only record with id %% <mod> == <rem>\n"
    "\t-s<start-binlog-pos>\tstart reading binlog from specified position\n"
    "\t-t<stop-binlog-pos>\tstop reading binlog at specified position\n"
    "\t-D\tdisable crc32 check while reading original binlog\n"
    "\t-u<username>\tassume identity of given user\n",
    VAR_0);
}
