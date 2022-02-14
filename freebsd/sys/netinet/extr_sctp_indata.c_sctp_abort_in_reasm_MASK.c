
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int tsn; int sid; int fsn; int mid; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct sctp_tmit_chunk {int * data; TYPE_3__ rec; } ;
struct TYPE_5__ {scalar_t__ idata_supported; } ;
struct sctp_tcb {TYPE_4__* sctp_ep; TYPE_1__ asoc; } ;
struct sctp_queued_to_read {int fsn_included; } ;
struct mbuf {int dummy; } ;
typedef int msg ;
struct TYPE_8__ {scalar_t__ last_abort_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,struct sctp_tcb*,struct mbuf*,int ) ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_tmit_chunk*,int ) ;
 struct mbuf* FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_5,
    struct sctp_queued_to_read *VAR_6,
    struct sctp_tmit_chunk *VAR_7,
    int *VAR_8, int VAR_9)
{
 char VAR_10[VAR_1];
 struct mbuf *VAR_11;

 if (VAR_5->asoc.idata_supported) {
  FUNC_4(VAR_10, sizeof(VAR_10),
      "Reass %x,CF:%x,TSN=%8.8x,SID=%4.4x,FSN=%8.8x,MID:%8.8x",
      VAR_9,
      VAR_6->fsn_included,
      VAR_7->rec.data.tsn,
      VAR_7->rec.data.sid,
      VAR_7->rec.data.fsn, VAR_7->rec.data.mid);
 } else {
  FUNC_4(VAR_10, sizeof(VAR_10),
      "Reass %x,CI:%x,TSN=%8.8x,SID=%4.4x,FSN=%4.4x,SSN:%4.4x",
      VAR_9,
      VAR_6->fsn_included,
      VAR_7->rec.data.tsn,
      VAR_7->rec.data.sid,
      VAR_7->rec.data.fsn,
      (uint16_t)VAR_7->rec.data.mid);
 }
 VAR_11 = FUNC_2(VAR_0, VAR_10);
 FUNC_3(VAR_7->data);
 VAR_7->data = ((void*)0);
 FUNC_1(VAR_5, VAR_7, VAR_4);
 VAR_5->sctp_ep->last_abort_code = VAR_2 + VAR_3;
 FUNC_0(VAR_5->sctp_ep, VAR_5, VAR_11, VAR_4);
 *VAR_8 = 1;
}
