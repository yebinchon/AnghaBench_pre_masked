
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "%s\n%s\n%s\n%s\n",
 "usage: yp_mkdb -c",
 "       yp_mkdb -u dbname",
 "       yp_mkdb [-c] [-b] [-s] [-f] [-i inputfile] [-o outputfile]",
 "               [-d domainname ] [-m mastername] inputfile dbname");
 FUNC_0(1);
}
