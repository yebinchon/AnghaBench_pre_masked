
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 ("usage: cache-engine [-v] [-r] [-i] [-D<disable-feature-mask>] [-T<acounters_init_string>] [-p<port>] [-u<username>] [-b<backlog>] [-c<max-conn>] [-a<binlog-name>] [-l<log-name>] <binlog> \n"
      "\tPerforms cache queries.\n"
      "\t[-v]\toutput statistical and debug information into stderr\n"
      "\t[-r]\tread-only binlog (don't log new events)\n"
      "\t[-T<acounters_init_string>]\tcomma separated list of half-life periods in seconds.\n"
      "\t\tHalf-life period could be terminated by characters ('s','h','d','w','m').\n"
      "\t\tAlso it is possible to use reserved words: hour, day, week and month.\n"
      "\t\tacounter_init_string example: \"3600,1d,week,1m\"\n"
      "\t[-E<cache_id,split_min,split_mod>]\tcreate empty binlog\n"
      "\t[-H<heap-size>]\tdefines maximum heap size\n"
      "\t[-S<hash-slots>]\tset global uries hashtable size, <hash-slots> is a natural number (engine himself finds prime)\n"
      "\t\t\t<hash-slots> should be around half of uries in the engine stats (default value is %d)\n"






      "\t[-D<disable-feature-mask>]\tdisable some features\n"
      "\t[-D 1]\tdisable long queries : get (top|bottom)_(access|disk|stats), delete remote|disk (memory optimization)\n"
      "\t[-D 2]\tdisable uri delete during binlog replaying (fix wrong Garbage Collector logevents)\n"
      "\t[-D 4]\tdisable get detailed_server_stat queries\n"
      "\t[-D 8]\tdisable fast get bottom_disk queries, but increase performance of get top_access for cached files.\n"
      "\t[-D 16]\tdisable access queries (memory optimization).\n"
      "\t[-A]\tallows handling kill -64 in the case of [-D 16] option.\n"
      "\t[-I<timestamp[,path]>]\tspecial indexing mode - dump to stdout \"local_url\\tglobal_url\\n\"\n"
      "\t\t\tit is possible to set filename containing list of local servers (\"cs{$node_id}_{$server_id}\")\n"
      "\t[-J<timestamp,new_cache_id,map_file>]\tspecial indexing mode\n"
      "\t\tin pseudo indexing mode original binlog read till given timestamp\n"
      "\t[-K]\tspecial indexing mode (dump uncached uries)\n",
      VAR_1
      );
  FUNC_0 (2);
}
