
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int sctp_flags; int fibnum; } ;
struct TYPE_2__ {int chunk_length; } ;
struct sctp_init {scalar_t__ initiate_tag; scalar_t__ num_inbound_streams; scalar_t__ num_outbound_streams; int a_rwnd; } ;
struct sctp_init_chunk {TYPE_1__ ch; struct sctp_init init; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sctp_tcb*) ;
 int FUNC_3 (struct sctp_inpcb*) ;
 int FUNC_4 (struct sctp_inpcb*) ;
 int FUNC_5 (struct sctp_inpcb*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sctp_inpcb*,struct sctp_tcb*,struct mbuf*,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,struct mbuf*,int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_9 (struct sctp_inpcb*,struct sctp_tcb*,int ,int ) ;
 int VAR_10 ;
 struct mbuf* FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (struct mbuf*,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,int ,struct mbuf*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*,struct mbuf*,int,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,struct sctp_init_chunk*,int ,int ,int ,int ) ;
 int FUNC_13 (struct sctp_tcb*,int *) ;
 scalar_t__ FUNC_14 (struct mbuf*,int,int) ;

__attribute__((used)) static void
FUNC_15(struct mbuf *VAR_11, int VAR_12, int VAR_13,
    struct sockaddr *VAR_14, struct sockaddr *VAR_15, struct sctphdr *VAR_16,
    struct sctp_init_chunk *VAR_17, struct sctp_inpcb *VAR_18,
    struct sctp_tcb *VAR_19, struct sctp_nets *VAR_20, int *VAR_21,
    uint8_t VAR_22, uint32_t VAR_23,
    uint32_t VAR_24, uint16_t VAR_25)
{
 struct sctp_init *VAR_26;
 struct mbuf *VAR_27;

 FUNC_0(VAR_1, "sctp_handle_init: handling INIT tcb:%p\n",
     (void *)VAR_19);
 if (VAR_19 == ((void*)0)) {
  FUNC_3(VAR_18);
 }

 if (FUNC_7(VAR_17->ch.chunk_length) < sizeof(struct sctp_init_chunk)) {
  VAR_27 = FUNC_10(VAR_0, "");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }

 VAR_26 = &VAR_17->init;
 if (VAR_26->initiate_tag == 0) {

  VAR_27 = FUNC_10(VAR_0, "");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }
 if (FUNC_6(VAR_26->a_rwnd) < VAR_3) {

  VAR_27 = FUNC_10(VAR_0, "");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }
 if (VAR_26->num_inbound_streams == 0) {

  VAR_27 = FUNC_10(VAR_0, "");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }
 if (VAR_26->num_outbound_streams == 0) {

  VAR_27 = FUNC_10(VAR_0, "");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }
 if (FUNC_14(VAR_11, VAR_13 + sizeof(*VAR_17),
     VAR_13 + FUNC_7(VAR_17->ch.chunk_length))) {

  VAR_27 = FUNC_10(FUNC_1(VAR_10),
      "Problem with AUTH parameters");
  FUNC_8(VAR_18, VAR_19, VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, VAR_27,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
  if (VAR_19)
   *VAR_21 = 1;
  goto outnow;
 }

 if ((VAR_19 == ((void*)0)) &&
     ((VAR_18->sctp_flags & VAR_6) ||
     (VAR_18->sctp_flags & VAR_5) ||
     (!FUNC_5(VAR_18)))) {
  if (FUNC_1(VAR_9) == 0) {
   VAR_27 = FUNC_10(FUNC_1(VAR_10),
       "No listener");
   FUNC_11(VAR_11, VAR_12, VAR_14, VAR_15, VAR_16, 0, VAR_27,
       VAR_22, VAR_23, VAR_18->fibnum,
       VAR_24, VAR_25);
  }
  goto outnow;
 }
 if ((VAR_19 != ((void*)0)) &&
     (FUNC_2(VAR_19) == VAR_8)) {
  FUNC_0(VAR_2, "sctp_handle_init: sending SHUTDOWN-ACK\n");
  FUNC_13(VAR_19, ((void*)0));
  FUNC_9(VAR_18, VAR_19, VAR_4, VAR_7);
 } else {
  FUNC_0(VAR_2, "sctp_handle_init: sending INIT-ACK\n");
  FUNC_12(VAR_18, VAR_19, VAR_20, VAR_11, VAR_12, VAR_13,
      VAR_14, VAR_15, VAR_16, VAR_17,
      VAR_22, VAR_23,
      VAR_24, VAR_25);
 }
outnow:
 if (VAR_19 == ((void*)0)) {
  FUNC_4(VAR_18);
 }
}
