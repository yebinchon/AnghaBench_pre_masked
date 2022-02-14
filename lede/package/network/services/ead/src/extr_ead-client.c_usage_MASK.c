
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
 FUNC_0(VAR_0, "Usage: %s [-s <addr>] [-b <addr>] <node> <username>[:<password>] <command>\n"
  "\n"
  "\t-s <addr>:  Set the server's source address to <addr>\n"
  "\t-b <addr>:  Set the broadcast address to <addr>\n"
  "\t<node>:     Node ID (4 digits hex)\n"
  "\t<username>: Username to authenticate with\n"
  "\n"
  "\tPassing no arguments shows a list of active nodes on the network\n"
  "\n", VAR_1);
 return -1;
}
