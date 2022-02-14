
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_1(VAR_0, "%s\n%s\n%s\n%s\n%s\n",
  "usage: rpcgen infile",
  "       rpcgen [-abCLNTM] [-Dname[=value]] [-i size][-I -P [-K seconds]] [-Y path] infile",

  "       rpcgen [-c | -h | -l | -m | -t | -Sc | -Ss | -Sm][-o outfile] [infile]",

  "       rpcgen [-s nettype]* [-o outfile] [infile]",
  "       rpcgen [-n netid]* [-o outfile] [infile]");
 FUNC_2();
 FUNC_0(1);
}
