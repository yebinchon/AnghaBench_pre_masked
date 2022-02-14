
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct sctp_inpcb {int sctp_flags; int sctp_asoc_list; } ;
struct sctp_chunkhdr {int chunk_type; int chunk_length; } ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct sctp_inpcb*,int ,int ) ;
 scalar_t__ FUNC_6 (struct mbuf*,int,int,int *) ;
 int FUNC_7 (struct mbuf*,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,int ,struct mbuf*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct sockaddr*,struct sockaddr*,struct sctphdr*,int ,int ,int ,int ,int ) ;
 int VAR_4 ;

void
FUNC_9(struct mbuf *VAR_5, int VAR_6, int VAR_7,
    struct sockaddr *VAR_8, struct sockaddr *VAR_9,
    struct sctphdr *VAR_10, struct sctp_inpcb *VAR_11,
    struct mbuf *VAR_12,
    uint8_t VAR_13, uint32_t VAR_14, uint16_t VAR_15,
    uint32_t VAR_16, uint16_t VAR_17)
{
 struct sctp_chunkhdr *VAR_18, VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 FUNC_3(VAR_4);

 if (VAR_11 && (VAR_11->sctp_flags & VAR_2)) {
  if (FUNC_0(&VAR_11->sctp_asoc_list)) {
   FUNC_5(VAR_11, VAR_1,
       VAR_0);
  }
 }
 VAR_21 = 0;
 VAR_18 = (struct sctp_chunkhdr *)FUNC_6(VAR_5, VAR_7,
     sizeof(*VAR_18), (uint8_t *)&VAR_19);
 while (VAR_18 != ((void*)0)) {
  VAR_20 = FUNC_4(VAR_18->chunk_length);
  if (VAR_20 < sizeof(*VAR_18)) {

   break;
  }
  switch (VAR_18->chunk_type) {
  case 131:
   VAR_21 = 1;
   break;
  case 130:

   return;
  case 132:

   return;
  case 128:




   return;
  case 129:
   FUNC_8(VAR_8, VAR_9, VAR_10,
       VAR_13, VAR_14, VAR_15,
       VAR_16, VAR_17);
   return;
  default:
   break;
  }
  VAR_7 += FUNC_2(VAR_20);
  VAR_18 = (struct sctp_chunkhdr *)FUNC_6(VAR_5, VAR_7,
      sizeof(*VAR_18), (uint8_t *)&VAR_19);
 }
 if ((FUNC_1(VAR_3) == 0) ||
     ((FUNC_1(VAR_3) == 1) &&
     (VAR_21 == 0))) {
  FUNC_7(VAR_5, VAR_6, VAR_8, VAR_9, VAR_10, 0, VAR_12,
      VAR_13, VAR_14, VAR_15,
      VAR_16, VAR_17);
 }
}
