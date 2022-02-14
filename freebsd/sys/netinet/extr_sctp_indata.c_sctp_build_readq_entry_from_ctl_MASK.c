
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_queued_to_read {int fsn_included; int port_from; int stcb; TYPE_1__* whoFrom; int sinfo_assoc_id; int sinfo_cumtsn; int sinfo_tsn; int sinfo_context; int sinfo_ppid; int sinfo_flags; int mid; int top_fsn; int reasm; int sinfo_stream; } ;
struct TYPE_2__ {int ref_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct sctp_queued_to_read*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct sctp_queued_to_read *VAR_0, struct sctp_queued_to_read *VAR_1)
{
 FUNC_2(VAR_0, 0, sizeof(struct sctp_queued_to_read));
 VAR_0->sinfo_stream = VAR_1->sinfo_stream;
 VAR_0->mid = VAR_1->mid;
 FUNC_0(&VAR_0->reasm);
 VAR_0->top_fsn = VAR_1->top_fsn;
 VAR_0->mid = VAR_1->mid;
 VAR_0->sinfo_flags = VAR_1->sinfo_flags;
 VAR_0->sinfo_ppid = VAR_1->sinfo_ppid;
 VAR_0->sinfo_context = VAR_1->sinfo_context;
 VAR_0->fsn_included = 0xffffffff;
 VAR_0->sinfo_tsn = VAR_1->sinfo_tsn;
 VAR_0->sinfo_cumtsn = VAR_1->sinfo_cumtsn;
 VAR_0->sinfo_assoc_id = VAR_1->sinfo_assoc_id;
 VAR_0->whoFrom = VAR_1->whoFrom;
 FUNC_1(&VAR_0->whoFrom->ref_count, 1);
 VAR_0->stcb = VAR_1->stcb;
 VAR_0->port_from = VAR_1->port_from;
}
