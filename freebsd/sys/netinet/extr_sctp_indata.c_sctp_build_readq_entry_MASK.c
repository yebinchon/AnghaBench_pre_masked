
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct sctp_tcb {int rport; } ;
struct sctp_queued_to_read {int sinfo_flags; int top_fsn; int fsn_included; int port_from; struct sctp_tcb* stcb; struct mbuf* data; struct sctp_nets* whoFrom; int reasm; void* mid; int sinfo_assoc_id; void* sinfo_cumtsn; void* sinfo_tsn; void* sinfo_context; void* sinfo_ppid; int sinfo_stream; } ;
struct sctp_nets {int ref_count; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sctp_queued_to_read*,int ,int) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_queued_to_read*) ;
 int FUNC_4 (struct sctp_tcb*) ;

struct sctp_queued_to_read *
FUNC_5(struct sctp_tcb *VAR_0,
    struct sctp_nets *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint16_t VAR_5,
    uint32_t VAR_6, uint8_t VAR_7,
    struct mbuf *VAR_8)
{
 struct sctp_queued_to_read *VAR_9 = ((void*)0);

 FUNC_3(VAR_0, VAR_9);
 if (VAR_9 == ((void*)0)) {
  goto failed_build;
 }
 FUNC_2(VAR_9, 0, sizeof(struct sctp_queued_to_read));
 VAR_9->sinfo_stream = VAR_5;
 VAR_9->sinfo_flags = (VAR_7 << 8);
 VAR_9->sinfo_ppid = VAR_3;
 VAR_9->sinfo_context = VAR_4;
 VAR_9->sinfo_tsn = VAR_2;
 VAR_9->sinfo_cumtsn = VAR_2;
 VAR_9->sinfo_assoc_id = FUNC_4(VAR_0);
 VAR_9->mid = VAR_6;
 VAR_9->top_fsn = VAR_9->fsn_included = 0xffffffff;
 FUNC_0(&VAR_9->reasm);
 VAR_9->whoFrom = VAR_1;
 FUNC_1(&VAR_1->ref_count, 1);
 VAR_9->data = VAR_8;
 VAR_9->stcb = VAR_0;
 VAR_9->port_from = VAR_0->rport;
failed_build:
 return (VAR_9);
}
