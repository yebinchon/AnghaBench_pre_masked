
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int icmpLinkCount; int udpLinkCount; int sctpLinkCount; int tcpLinkCount; int pptpLinkCount; int protoLinkCount; int fragmentIdLinkCount; int fragmentPtrLinkCount; int sockCount; scalar_t__ logDesc; } ;


 int FUNC_0 (scalar_t__,char*,int,...) ;
 int FUNC_1 (struct libalias*) ;

__attribute__((used)) static void
FUNC_2(struct libalias *VAR_0)
{

 FUNC_1(VAR_0);

 if (VAR_0->logDesc) {
  int VAR_1 = VAR_0->icmpLinkCount + VAR_0->udpLinkCount +
    (VAR_0->sctpLinkCount>>1) +
   VAR_0->tcpLinkCount + VAR_0->pptpLinkCount +
   VAR_0->protoLinkCount + VAR_0->fragmentIdLinkCount +
   VAR_0->fragmentPtrLinkCount;

  FUNC_0(VAR_0->logDesc,
    "icmp=%u, udp=%u, tcp=%u, sctp=%u, pptp=%u, proto=%u, frag_id=%u frag_ptr=%u / tot=%u",
    VAR_0->icmpLinkCount,
    VAR_0->udpLinkCount,
    VAR_0->tcpLinkCount,
    VAR_0->sctpLinkCount>>1,
    VAR_0->pptpLinkCount,
    VAR_0->protoLinkCount,
    VAR_0->fragmentIdLinkCount,
    VAR_0->fragmentPtrLinkCount, VAR_1);

  FUNC_0(VAR_0->logDesc, " (sock=%u)\n", VAR_0->sockCount);

 }
}
