
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 FUNC_1(VAR_0, "usage: %s [-a] [-l framelen] [-m mode] [-r rate] [-s]\n",
     VAR_1);
 FUNC_1(VAR_0, "-a             display calculations for all possible rates\n");
 FUNC_1(VAR_0, "-l framelen    length in bytes of 802.11 payload (default 1536)\n");
 FUNC_1(VAR_0, "-m 11a         calculate for 11a channel\n");
 FUNC_1(VAR_0, "-m 11b         calculate for 11b channel\n");
 FUNC_1(VAR_0, "-m 11g         calculate for 11g channel (default)\n");
 FUNC_1(VAR_0, "-m half        calculate for 1/2 width channel\n");
 FUNC_1(VAR_0, "-m quarter     calculate for 1/4 width channel\n");
 FUNC_1(VAR_0, "-m 108g        calculate for dynamic turbo 11g channel\n");
 FUNC_1(VAR_0, "-m sturbo      calculate for static turbo channel\n");
 FUNC_1(VAR_0, "-m turbo       calculate for dynamic turbo 11a channel\n");
 FUNC_1(VAR_0, "-r rate        IEEE rate code (default 54)\n");
 FUNC_1(VAR_0, "-s             short preamble (default long)\n");
 FUNC_0(0);
}
