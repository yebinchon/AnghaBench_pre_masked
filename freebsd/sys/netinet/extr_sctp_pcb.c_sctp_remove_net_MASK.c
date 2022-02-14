
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {struct sctp_nets* alternate; struct sctp_nets* last_control_chunk_from; int nets; struct sctp_nets* last_data_chunk_from; struct sctp_nets* primary_destination; struct sctp_nets* deleted_primary; int numnets; } ;
struct sctp_tcb {struct sctp_association asoc; int sctp_ep; } ;
struct sctp_nets {int lastsv; int lastsa; int ref_count; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sctp_nets*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 struct sctp_nets* FUNC_5 (struct sctp_tcb*,struct sctp_nets*,int ) ;
 int FUNC_6 (struct sctp_nets*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,struct sctp_tcb*,int *) ;

void
FUNC_10(struct sctp_tcb *VAR_6, struct sctp_nets *VAR_7)
{
 struct sctp_association *VAR_8;

 VAR_8 = &VAR_6->asoc;
 VAR_8->numnets--;
 FUNC_2(&VAR_8->nets, VAR_7, VAR_5);
 if (VAR_7 == VAR_8->primary_destination) {

  struct sctp_nets *VAR_9;

  VAR_9 = FUNC_1(&VAR_8->nets);





  if (FUNC_7(VAR_6->sctp_ep,
      VAR_1) ||
      FUNC_7(VAR_6->sctp_ep,
      VAR_2)) {
   FUNC_0(VAR_0, "remove_net: primary dst is deleting\n");
   if (VAR_8->deleted_primary != ((void*)0)) {
    FUNC_0(VAR_0, "remove_net: deleted primary may be already stored\n");
    goto out;
   }
   VAR_8->deleted_primary = VAR_7;
   FUNC_3(&VAR_7->ref_count, 1);
   FUNC_4(&VAR_7->lastsa, 0, sizeof(VAR_7->lastsa));
   FUNC_4(&VAR_7->lastsv, 0, sizeof(VAR_7->lastsv));
   FUNC_8(VAR_6->sctp_ep,
       VAR_3);
   FUNC_9(VAR_4,
       VAR_6->sctp_ep, VAR_6, ((void*)0));
  }
out:

  VAR_8->primary_destination = FUNC_5(VAR_6, VAR_9, 0);
 }
 if (VAR_7 == VAR_8->last_data_chunk_from) {

  VAR_8->last_data_chunk_from = FUNC_1(&VAR_8->nets);
 }
 if (VAR_7 == VAR_8->last_control_chunk_from) {

  VAR_8->last_control_chunk_from = ((void*)0);
 }
 if (VAR_7 == VAR_6->asoc.alternate) {
  FUNC_6(VAR_6->asoc.alternate);
  VAR_6->asoc.alternate = ((void*)0);
 }
 FUNC_6(VAR_7);
}
