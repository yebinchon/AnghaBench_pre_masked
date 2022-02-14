
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 char* VAR_0 ;

void FUNC_2 (void) {
  FUNC_1 ("usage: %s [-v] [-w<modulus>:<remainder>] [-u<users-index-file>] <inbox-fname> <outbox-fname>\n"
   "\tResulting index file is written to stdout\n"
   "\t-v\toutput statistical information into stderr\n"
   "\t-w\tprocess only users with user_id MOD modulus == remainder\n"
   "\t-u\tload specified users index file for indexing message senders\n",
   VAR_0);
  FUNC_0(2);
}
