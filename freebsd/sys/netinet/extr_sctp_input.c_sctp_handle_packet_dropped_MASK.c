
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sctphdr {int dummy; } ;
struct TYPE_11__ {int (* sctp_cwnd_update_after_packet_dropped ) (struct sctp_tcb*,struct sctp_nets*,struct sctp_pktdrop_chunk*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_12__ {scalar_t__ peers_rwnd; scalar_t__ total_flight; scalar_t__ sat_t3_loss_recovery; TYPE_5__ cc_functions; scalar_t__ sat_network; } ;
struct sctp_tcb {TYPE_6__ asoc; TYPE_3__* sctp_ep; } ;
struct TYPE_10__ {int chunk_flags; int chunk_length; } ;
struct sctp_pktdrop_chunk {TYPE_4__ ch; int current_onq; int bottle_bw; int trunc_len; scalar_t__ data; } ;
struct sctp_nets {int dummy; } ;
struct TYPE_7__ {int tsn; } ;
struct sctp_data_chunk {TYPE_1__ dp; } ;
struct sctp_chunkhdr {scalar_t__ chunk_type; int chunk_length; } ;
struct sctp_chunk_desc {scalar_t__ chunk_type; int tsn_ifany; int * data_bytes; } ;
typedef int desc ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {scalar_t__ sctp_sws_sender; } ;
struct TYPE_9__ {TYPE_2__ sctp_ep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_chunk_desc*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sctp_tcb*,struct sctp_chunk_desc*,struct sctp_nets*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct sctp_tcb*,struct sctp_nets*,struct sctp_pktdrop_chunk*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(struct sctp_pktdrop_chunk *VAR_10,
    struct sctp_tcb *VAR_11, struct sctp_nets *VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14, VAR_15;
 uint16_t VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 struct sctp_chunk_desc VAR_19;
 struct sctp_chunkhdr *VAR_20;

 VAR_17 = FUNC_4(VAR_10->ch.chunk_length);
 VAR_17 -= sizeof(struct sctp_pktdrop_chunk);

 if (VAR_17 == 0) {
  VAR_20 = ((void*)0);
  if (VAR_10->ch.chunk_flags & VAR_1)
   FUNC_1(VAR_2);
 } else {
  VAR_20 = (struct sctp_chunkhdr *)(VAR_10->data + sizeof(struct sctphdr));
  VAR_17 -= sizeof(struct sctphdr);

  FUNC_2(&VAR_19, 0, sizeof(VAR_19));
 }
 VAR_16 = (uint16_t)FUNC_4(VAR_10->trunc_len);
 if (VAR_16 > VAR_13) {
  VAR_16 = VAR_13;
 }


 while ((VAR_20 != ((void*)0)) && (VAR_17 >= sizeof(struct sctp_chunkhdr))) {
  VAR_19.chunk_type = VAR_20->chunk_type;

  VAR_18 = FUNC_4(VAR_20->chunk_length);
  if (VAR_18 < sizeof(struct sctp_chunkhdr)) {

   FUNC_1(VAR_3);
   break;
  }
  if (VAR_16 == 0) {

   if (VAR_18 > VAR_17) {

    FUNC_1(VAR_3);
    break;
   }
  } else {

   if (VAR_19.chunk_type == VAR_0) {
    if (VAR_17 < (sizeof(struct sctp_data_chunk) +
        sizeof(VAR_19.data_bytes))) {
     break;
    }
   } else {
    if (VAR_17 < sizeof(struct sctp_chunkhdr)) {
     break;
    }
   }
  }
  if (VAR_19.chunk_type == VAR_0) {

   if ((VAR_10->ch.chunk_flags & VAR_1))
    FUNC_1(VAR_7);

   if (VAR_17 >= (sizeof(struct sctp_data_chunk) + sizeof(uint32_t))) {

    struct sctp_data_chunk *VAR_21;
    uint8_t *VAR_22;
    unsigned int VAR_23;

    VAR_21 = (struct sctp_data_chunk *)VAR_20;
    VAR_22 = (uint8_t *)(VAR_21 + 1);
    for (VAR_23 = 0; VAR_23 < sizeof(VAR_19.data_bytes); VAR_23++) {
     VAR_19.data_bytes[VAR_23] = VAR_22[VAR_23];
    }
    VAR_19.tsn_ifany = VAR_21->dp.tsn;
   } else {

    FUNC_1(VAR_8);
    break;
   }
  } else {
   if ((VAR_10->ch.chunk_flags & VAR_1))
    FUNC_1(VAR_6);
  }

  if (FUNC_5(VAR_11, &VAR_19, VAR_12, VAR_10->ch.chunk_flags)) {
   FUNC_1(VAR_9);
   break;
  }
  if (FUNC_0(VAR_18) > VAR_17) {
   break;
  }
  VAR_17 -= FUNC_0(VAR_18);
  if (VAR_17 < sizeof(struct sctp_chunkhdr)) {

   break;
  }
  VAR_20 = (struct sctp_chunkhdr *)((caddr_t)VAR_20 + FUNC_0(VAR_18));
 }

 if ((VAR_10->ch.chunk_flags & VAR_1) == 0) {

  uint32_t VAR_24;

  FUNC_1(VAR_4);

  VAR_14 = FUNC_3(VAR_10->bottle_bw);
  VAR_15 = FUNC_3(VAR_10->current_onq);
  if (VAR_14 && VAR_15) {

   if (VAR_14 > VAR_15)
    VAR_24 = VAR_14 - VAR_15;
   else
    VAR_24 = 0;

   if (VAR_24 == 0)
    VAR_11->asoc.peers_rwnd = 0;
   else {
    if (VAR_24 > VAR_11->asoc.total_flight) {
     VAR_11->asoc.peers_rwnd =
         VAR_24 - VAR_11->asoc.total_flight;
    } else {
     VAR_11->asoc.peers_rwnd = 0;
    }
    if (VAR_11->asoc.peers_rwnd <
        VAR_11->sctp_ep->sctp_ep.sctp_sws_sender) {

     VAR_11->asoc.peers_rwnd = 0;
    }
   }
  }
 } else {
  FUNC_1(VAR_5);
 }


 if ((VAR_10->ch.chunk_flags & VAR_1) &&
     (VAR_11->asoc.sat_t3_loss_recovery == 0) &&
     (VAR_11->asoc.sat_network)) {





  VAR_11->asoc.cc_functions.sctp_cwnd_update_after_packet_dropped(VAR_11,
      VAR_12, VAR_10, &VAR_14, &VAR_15);
 }
}
