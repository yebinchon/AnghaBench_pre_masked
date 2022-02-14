
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;

void FUNC_1 (void) {
  FUNC_0 (VAR_1, "./storage-append [-v] [-1] <input-binlog> <output-binlog>\n"
                   "\t%s\n"
           "\tThis tool copies file from <input-binlog> to <output-binlog> until first error.\n"
           "\tIt could repair single bit error in file body.\n"
           "\tIf this tool write something to output, output will be ended by LEV_CRC32 logevent.\n"
           "\tOutput binlog should be ended by LEV_CRC32 or contains only LEV_START logevent (36 bytes).\n"
           "\tIf output binlog not exists, it will be created.\n"
           "\n"
           "\t[-1]\tKeep working if file body couldn't be recovered.\n"
           "\t[-m]\tTry to read <input-binlog> to memory and replace broken images with one-pix jpeg.\n"
           "\t\t<input-binlog> could be concatenated readable parts of broken storage volume.\n"
           "\t\tNOTICE:After -m fix, old index for repaired volume must be removed!\n"
           "\t[-t]\tExport to stdout wget download commands (for testing)\n"
           "\t[-H<http-port>]\tset storage-engine http port for [-t] mode\n",
           VAR_0);
}
