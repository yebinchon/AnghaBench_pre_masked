
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char*,char*,int,int,int,int,int,char*,int ) ;
 char* VAR_7 ;
 int VAR_8 ;

void FUNC_2 (void) {
  FUNC_1 ("usage: %s [-v] [-r] [-i] [-p<port>] [-H<http-port>] [-n<nginx-port>] [-u<username>] [-g<groupname>] [-c<max-conn>] <binlogs-dirname>]\n"
    "\t%s\n"
   "\t-i\tindex mode (docs bodies only in binlog)\n"
   "\t-I<volume_id>\tsingle volume index mode\n"
   "\t-v\toutput statistical and debug information into stderr\n"
   "\t-r\tread-only binlog (don't log new events)\n"
    "\t-R<filesize>\tsets max_immediately_reply_filesize, could be end by 'k', 'm', etc. (default: %d)\n"
    "\t-M<max_metafiles_size>\tcould be end by 'k', 'm', etc. (default: %d)\n"
    "\t-Z<max_zmalloc_memory>\tcould be end by 'k', 'm', etc. (default: %d)\n"
    "\t\tzmalloc memory used only for aio_connections\n"
    "\t-T<aio_query_timeout>\tset aio query timeout (default: %.3lf)\n"
    "\t-F\tdisable crc32 check after loading metafile\n"
    "\t-V<required-volumes-number-at-startup>\t(default: %d)\n"
    "\t-L<bad-image-cache-max_living-time>\t(default: %ds)\n"
    "\t-A<max_aio_read_connection>\tlimit number of aio read connection for one disk (default: 0 - no limit)\n"
    "\t-C<choose_binlog_criterions>\t(default: '%s')\n"
    "\t\t\t's' - minimal consecutive file failures,\n"
    "\t\t\t'a' - minimal aio read connections for disk,\n"
    "\t\t\t'h' - minimal amortization hour file failures,\n"
    "\t\t\t't' - minimal total file failures)\n"
    "\t-E<N,cs,md5_mode,prefix>\tcreate N empty binlogs and write config-file\n"
    "\t\t\t\t(volume_id = cs * 1000 + log_split_min)\n",
   VAR_7,
    VAR_0,
    VAR_4,
    VAR_5, VAR_6, VAR_1, VAR_8, VAR_2, VAR_3);
  FUNC_0 (2);
}
