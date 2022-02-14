
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcap_pkthdr {scalar_t__ len; } ;
struct my_ctrs {int pkts; int bytes; } ;



__attribute__((used)) static void
FUNC_0(u_char *VAR_0, const struct pcap_pkthdr * VAR_1,
 const u_char * VAR_2)
{
 struct my_ctrs *VAR_3 = (struct my_ctrs *)VAR_0;
 (void)VAR_2;
 VAR_3->bytes += VAR_1->len;
 VAR_3->pkts++;
}
