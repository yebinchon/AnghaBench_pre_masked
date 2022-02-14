
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lqrdata {char const* MagicNumber; char const* LastOutLQRs; char const* LastOutPackets; char const* LastOutOctets; char const* PeerInLQRs; char const* PeerInPackets; char const* PeerInDiscards; char const* PeerInErrors; char const* PeerInOctets; char const* PeerOutLQRs; char const* PeerOutPackets; char const* PeerOutOctets; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;

void
FUNC_2(const char *VAR_1, const char *VAR_2, const struct lqrdata *VAR_3)
{
  if (FUNC_0(VAR_0)) {
    FUNC_1(VAR_0, "%s: %s:\n", VAR_1, VAR_2);
    FUNC_1(VAR_0, "  Magic:          %08x   LastOutLQRs:    %08x\n",
       VAR_3->MagicNumber, VAR_3->LastOutLQRs);
    FUNC_1(VAR_0, "  LastOutPackets: %08x   LastOutOctets:  %08x\n",
       VAR_3->LastOutPackets, VAR_3->LastOutOctets);
    FUNC_1(VAR_0, "  PeerInLQRs:     %08x   PeerInPackets:  %08x\n",
       VAR_3->PeerInLQRs, VAR_3->PeerInPackets);
    FUNC_1(VAR_0, "  PeerInDiscards: %08x   PeerInErrors:   %08x\n",
       VAR_3->PeerInDiscards, VAR_3->PeerInErrors);
    FUNC_1(VAR_0, "  PeerInOctets:   %08x   PeerOutLQRs:    %08x\n",
       VAR_3->PeerInOctets, VAR_3->PeerOutLQRs);
    FUNC_1(VAR_0, "  PeerOutPackets: %08x   PeerOutOctets:  %08x\n",
       VAR_3->PeerOutPackets, VAR_3->PeerOutOctets);
  }
}
