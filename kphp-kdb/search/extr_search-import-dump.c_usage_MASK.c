
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_0 ;
 int VAR_1 ;

void FUNC_1 (void) {
  FUNC_0 (VAR_1, "usage:\t%s [-v] [-u<username>] [-m<rem>,<mod>] [-g<filename>] [-f<format>] [-o<output-class>] <input-file> [<output-file>]\n"
    "\tConverts tab-separated table dump into KDB binlog. "
    "If <output-file> is specified, resulting binlog is appended to it.\n"
    "\t-h\tthis help screen\n"
    "\t-v\tverbose mode on\n"
    "\t-u<username>\tassume identity of given user\n"
    "\t-m<rem>,<mod>\tslice parameters: consider only users with uid %% mod == rem\n"
    "\t-o<int>\tdetermines output format\n"
    "\t-g<map-file>\tsets map file\n"
    "\t-f<format>\tdetermines dump format, one of audio, video, groups, ...\n",
    VAR_0);
}
