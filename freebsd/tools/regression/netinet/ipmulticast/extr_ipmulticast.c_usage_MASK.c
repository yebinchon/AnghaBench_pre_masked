
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_9, "\nIP multicast regression test utility\n");
 FUNC_1(VAR_9,
"usage: %s [-4] [-b] [-g groupaddr] [-i ifname] [-I ifaddr] [-m]\n"
"       [-M ngroups] [-p portno] [-r] [-R] [-s] [-S nsources] [-t] [-T timeout]\n"
"       [-v] [blockaddr ...]\n\n", VAR_8);
 FUNC_1(VAR_9, "-4: Use IPv4 API "
                 "(default: Use protocol-independent API)\n");
 FUNC_1(VAR_9, "-b: bind listening socket to ifaddr "
     "(default: INADDR_ANY)\n");
 FUNC_1(VAR_9, "-g: Base IPv4 multicast group to join (default: %s)\n",
     VAR_0);
 FUNC_1(VAR_9, "-i: interface for multicast joins (default: %s)\n",
     VAR_2);
 FUNC_1(VAR_9, "-I: IPv4 address to join groups on, if using IPv4 "
     "API\n    (default: %s)\n", VAR_1);




 FUNC_1(VAR_9, "-M: Number of multicast groups to join "
     "(default: %d)\n", (int)VAR_6);
 FUNC_1(VAR_9, "-p: Set local and remote port (default: %d)\n",
     VAR_3);
 FUNC_1(VAR_9, "-r: Set SO_REUSEPORT on (default: off)\n");
 FUNC_1(VAR_9, "-R: Randomize groups/sources (default: off)\n");
 FUNC_1(VAR_9, "-s: Test source-specific API "
     "(default: test any-source API)\n");
 FUNC_1(VAR_9, "-S: Number of multicast sources to generate if\n"
     "    none specified on command line (default: %d)\n",
     (int)VAR_7);
 FUNC_1(VAR_9, "-t: Test get/setNsourcefilter() (default: off)\n");
 FUNC_1(VAR_9, "-T: Timeout to wait for blocked traffic on first "
     "group (default: %d)\n", VAR_4);
 FUNC_1(VAR_9, "-v: Be verbose (default: off)\n");
 FUNC_1(VAR_9, "\nRemaining arguments are treated as a list of IPv4 "
     "sources to filter.\n\n");

 FUNC_0(VAR_5);
}
