
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_2 (void) {
  FUNC_1 (VAR_1, "%s\n", VAR_0);
  FUNC_1 (VAR_1, "Performs transactions from auxiliary binlog and writes results to the binlog.\n");
  FUNC_1 (VAR_1,
           "./copyexec-engine -I<instance-mask> -T<tmp-dir> -P<public-key-prefix> [-R<host:port>] [-v] [-p<port>] [-b<backlog>] [-c<max-conn>] [-l<log-name>] -a<aux-binlog-name> <binlog>\n"
                   "\t-I<instance-mask>\tmandatory option, instance mask could be hex (prefix:'0x'), oct (prefix:'0') or dec\n"
                   "\t-P<public-key-prefix>\t(mandatory option), full public key name is concatenation of <public-key-prefix> and key_id found in aux binlog.\n"
                   "\t-T<tmp-dir>\ttemporary transaction files will be created in subdirs of given directory\n"
                   "\t-a<aux-binlog-name>\tshould be full binlog filename (mandatory option)\n"
                   "\t-E<volume-id>\tcreates new empty binlog, volume-id is a string.\n"
                   "\t\t\tFor creating new binlog also need specify public-key-prefix and aux-binlog-name (for finding and writing sync point to the main binlog).\n"
                   "\t-p<port>\tif port given when copyexec-engine will reply to the stats memcache command\n"
                   "\t-R<host:port>\tif given copyexec-engine will send results to the copyexec-results-engine\n"
                   "\t-v\tincrease verbosity level\n"
          );
  FUNC_0 (2);
}
