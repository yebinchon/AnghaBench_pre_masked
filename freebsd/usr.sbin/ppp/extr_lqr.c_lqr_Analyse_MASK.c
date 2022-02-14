
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct lqrdata {int PeerInLQRs; int LastOutLQRs; int LastOutPackets; int PeerInPackets; int LastOutOctets; int PeerInOctets; int PeerOutPackets; int PeerOutOctets; int PeerInDiscards; int PeerInErrors; } ;
struct TYPE_6__ {int InPackets; int InOctets; } ;
struct TYPE_5__ {int InPackets; int InOctets; } ;
struct TYPE_7__ {int OutLQRs; TYPE_2__ prevSave; TYPE_1__ Save; } ;
struct TYPE_8__ {TYPE_3__ lqr; } ;
struct hdlc {TYPE_4__ lqm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

void
FUNC_1(const struct hdlc *VAR_1, const struct lqrdata *VAR_2,
            const struct lqrdata *VAR_3)
{
  u_int32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

  if (!VAR_3->PeerInLQRs)
    return;

  FUNC_0(VAR_0, "Analysis:\n");

  VAR_4 = (VAR_3->LastOutLQRs - VAR_2->LastOutLQRs) -
         (VAR_3->PeerInLQRs - VAR_2->PeerInLQRs);
  VAR_5 = VAR_1->lqm.lqr.OutLQRs - VAR_3->LastOutLQRs;
  VAR_6 = (VAR_3->LastOutPackets - VAR_2->LastOutPackets) -
         (VAR_3->PeerInPackets - VAR_2->PeerInPackets);
  VAR_7 = (VAR_3->LastOutOctets - VAR_2->LastOutOctets) -
           (VAR_3->PeerInOctets - VAR_2->PeerInOctets);
  FUNC_0(VAR_0, "  Outbound lossage: %d LQR%s (%d en route), %d packet%s,"
             " %d octet%s\n", (int)VAR_4, VAR_4 == 1 ? "" : "s", (int)VAR_5,
      (int)VAR_6, VAR_6 == 1 ? "" : "s",
      (int)VAR_7, VAR_7 == 1 ? "" : "s");

  VAR_6 = (VAR_3->PeerOutPackets - VAR_2->PeerOutPackets) -
    (VAR_1->lqm.lqr.Save.InPackets - VAR_1->lqm.lqr.prevSave.InPackets);
  VAR_7 = (VAR_3->PeerOutOctets - VAR_2->PeerOutOctets) -
    (VAR_1->lqm.lqr.Save.InOctets - VAR_1->lqm.lqr.prevSave.InOctets);
  FUNC_0(VAR_0, "  Inbound lossage: %d packet%s, %d octet%s\n",
      (int)VAR_6, VAR_6 == 1 ? "" : "s",
      (int)VAR_7, VAR_7 == 1 ? "" : "s");

  VAR_8 = VAR_3->PeerInDiscards - VAR_2->PeerInDiscards;
  VAR_9 = VAR_3->PeerInErrors - VAR_2->PeerInErrors;
  if (VAR_8 && VAR_9)
    FUNC_0(VAR_0, "                   Likely due to both peer congestion"
               " and physical errors\n");
  else if (VAR_8)
    FUNC_0(VAR_0, "                   Likely due to peer congestion\n");
  else if (VAR_9)
    FUNC_0(VAR_0, "                   Likely due to physical errors\n");
  else if (VAR_6)
    FUNC_0(VAR_0, "                   Likely due to transport "
        "congestion\n");
}
