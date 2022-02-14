
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sctp_tmit_chunk {int dummy; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_gap_ack_block {int end; int start; } ;
struct sctp_association {int sent_queue; } ;
struct mbuf {int dummy; } ;
typedef int block ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct sctp_tmit_chunk* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct mbuf*,int,int,int *) ;
 scalar_t__ FUNC_6 (struct sctp_tcb*,struct sctp_tmit_chunk**,scalar_t__,scalar_t__,scalar_t__,int,int*,scalar_t__*,scalar_t__*,int*) ;

__attribute__((used)) static int
FUNC_7(struct mbuf *VAR_3, int *VAR_4, struct sctp_tcb *VAR_5, struct sctp_association *VAR_6,
    uint32_t VAR_7, uint32_t *VAR_8,
    uint32_t *VAR_9, uint32_t *VAR_10,
    int VAR_11, int VAR_12, int *VAR_13)
{
 struct sctp_gap_ack_block *VAR_14, VAR_15;
 struct sctp_tmit_chunk *VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20;
 uint16_t VAR_21, VAR_22, VAR_23;

 VAR_16 = FUNC_2(&VAR_6->sent_queue);
 VAR_23 = 0;
 VAR_19 = 0;

 for (VAR_17 = 0; VAR_17 < (VAR_11 + VAR_12); VAR_17++) {
  if (VAR_17 == VAR_11) {
   VAR_23 = 0;
   VAR_16 = FUNC_2(&VAR_6->sent_queue);
  }
  VAR_14 = (struct sctp_gap_ack_block *)FUNC_5(VAR_3, *VAR_4,
      sizeof(struct sctp_gap_ack_block), (uint8_t *)&VAR_15);
  *VAR_4 += sizeof(VAR_15);
  if (VAR_14 == ((void*)0)) {
   return (VAR_19);
  }
  VAR_21 = FUNC_3(VAR_14->start);
  VAR_22 = FUNC_3(VAR_14->end);

  if (VAR_21 > VAR_22) {

   continue;
  }
  if (VAR_21 <= VAR_23) {

   VAR_16 = FUNC_2(&VAR_6->sent_queue);
  }
  if (FUNC_1((VAR_7 + VAR_22), *VAR_8)) {
   *VAR_8 = VAR_7 + VAR_22;
  }
  if (VAR_17 < VAR_11) {
   VAR_20 = 0;
  } else {
   VAR_20 = 1;
  }
  if (FUNC_6(VAR_5, &VAR_16, VAR_7, VAR_21, VAR_22,
      VAR_20, &VAR_18, VAR_9,
      VAR_10, VAR_13)) {
   VAR_19 = 1;
  }
  VAR_23 = VAR_22;
 }
 if (FUNC_0(VAR_2) & VAR_0) {
  if (VAR_18)
   FUNC_4(*VAR_8,
       *VAR_9,
       VAR_7, VAR_1);
 }
 return (VAR_19);
}
