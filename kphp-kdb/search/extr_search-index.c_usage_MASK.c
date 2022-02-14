
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,...) ;
 char* VAR_3 ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 ("usage: %s [-v] [-t] [-A] [-u<username>] [-a<binlog-name>] [-l<log-name>] [-f] <huge-index-file>\n"
   "\tBuilds a search index from given binlog file.\n"
   "\t-t\tenable tags (*word @word #word are considered words)\n"
   "\t-A\tenable universal tag\n"
   "\t-S\tuse stemmer\n"
   "\t-U\tenable UTF-8 mode\n"
   "\t-W\tenable storing words frequencies in item\n"
    "\t-D\tstore in item's date modification time (default: first creation time)\n"
    "\t-H<heap-size>\tsets maximal heap size, e.g. 4g\n"
    "\t-B<heap-size>\tsets maximal binlog size, e.g. 4g\n"
    "\t-P<max_pairs>\tsets maximal number of pairs\n"
    "\t-v\toutput statistical and debug information into stderr\n"
    "\t-f\tallow to load snapshots without crc32\n"
    "\t-O\tenable tag owner mode\n"

    "\t-Q\toutput hash stats\n"
    "\t-0\tuse only Golomb coding (faster decompression)\n"
    "\t-1\tuse Interpolative coding (slower decompression)\n"
    "\t\t\tif it consumes less than %.6lf%% memory used by Golomb coding\n"
    "\t-2\tuse Interpolative coding if it consumes less memory than Golomb coding\n"
    "\t-x<left subtree size threshold>\tuse Redundant Interpolative coding.\n"
    "\t by default -x%d compression is used.\n"
    "\t-I<filename>\toutput to the given text file all item_ids and exit without saving index\n"

   , VAR_3

    , VAR_1, VAR_2

    );
  FUNC_0 (2);
}
