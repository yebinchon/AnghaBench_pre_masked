
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dest_port; int src_port; scalar_t__ v_tag; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int sctp_flags; } ;
struct sctp_chunkhdr {scalar_t__ chunk_type; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ,char*,void*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 struct sctp_tcb* FUNC_2 (struct sockaddr*,struct sockaddr*,int ,struct sctp_inpcb**,struct sctp_nets**,int ,int ,int ,int ,int ) ;
 struct sctp_tcb* FUNC_3 (struct sockaddr*,struct sockaddr*,struct sctp_inpcb**,struct sctp_nets**,int,int ) ;
 struct sctp_tcb* FUNC_4 (struct mbuf*,int,struct sctphdr*,struct sctp_inpcb**,struct sctp_nets**,struct sockaddr*) ;

struct sctp_tcb *
FUNC_5(struct mbuf *VAR_4, int VAR_5,
    struct sockaddr *VAR_6, struct sockaddr *VAR_7,
    struct sctphdr *VAR_8, struct sctp_chunkhdr *VAR_9,
    struct sctp_inpcb **VAR_10, struct sctp_nets **VAR_11, uint32_t VAR_12)
{
 struct sctp_tcb *VAR_13;
 struct sctp_inpcb *VAR_14;

 if (VAR_8->v_tag) {

  VAR_13 = FUNC_2(VAR_6, VAR_7, FUNC_1(VAR_8->v_tag),
      VAR_10, VAR_11, VAR_8->src_port, VAR_8->dest_port, 0, VAR_12, 0);
  if (VAR_13) {
   return (VAR_13);
  }
 }

 if (VAR_10) {
  VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_10, VAR_11,
      1, VAR_12);
  VAR_14 = *VAR_10;
 } else {
  VAR_13 = FUNC_3(VAR_6, VAR_7, &VAR_14, VAR_11,
      1, VAR_12);
 }
 FUNC_0(VAR_0, "stcb:%p inp:%p\n", (void *)VAR_13, (void *)VAR_14);
 if (VAR_13 == ((void*)0) && VAR_14) {

  if ((VAR_9->chunk_type == VAR_1) ||
      (VAR_9->chunk_type == VAR_2)) {
   if (VAR_14->sctp_flags & VAR_3) {
    if (VAR_10) {
     *VAR_10 = ((void*)0);
    }
    return (((void*)0));
   }
   VAR_13 = FUNC_4(VAR_4,
       VAR_5, VAR_8, &VAR_14, VAR_11, VAR_7);
   if (VAR_10 != ((void*)0)) {
    *VAR_10 = VAR_14;
   }
  }
 }
 FUNC_0(VAR_0, "stcb is %p\n", (void *)VAR_13);
 return (VAR_13);
}
