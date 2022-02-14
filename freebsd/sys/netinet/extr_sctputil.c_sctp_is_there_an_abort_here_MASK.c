
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sctphdr {int dummy; } ;
struct TYPE_2__ {int initiate_tag; } ;
struct sctp_init_chunk {TYPE_1__ init; } ;
struct sctp_chunkhdr {scalar_t__ chunk_type; int chunk_length; } ;
struct mbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mbuf*,int,int,int *) ;

int
FUNC_4(struct mbuf *VAR_2, int VAR_3, uint32_t *VAR_4)
{
 struct sctp_chunkhdr *VAR_5;
 struct sctp_init_chunk *VAR_6, VAR_7;
 int VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_3 + sizeof(struct sctphdr);
 VAR_5 = (struct sctp_chunkhdr *)FUNC_3(VAR_2, VAR_8, sizeof(*VAR_5),
     (uint8_t *)&VAR_7);
 while (VAR_5 != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_5->chunk_length);
  if (VAR_9 < sizeof(*VAR_5)) {

   break;
  }

  if (VAR_5->chunk_type == VAR_0) {

   return (1);
  }
  if (VAR_5->chunk_type == VAR_1) {

   VAR_6 = (struct sctp_init_chunk *)FUNC_3(VAR_2,
       VAR_8, sizeof(*VAR_6), (uint8_t *)&VAR_7);
   if (VAR_6 != ((void*)0)) {
    *VAR_4 = FUNC_1(VAR_6->init.initiate_tag);
   }
  }

  VAR_8 += FUNC_0(VAR_9);
  VAR_5 = (struct sctp_chunkhdr *)FUNC_3(VAR_2, VAR_8,
      sizeof(*VAR_5), (uint8_t *)&VAR_7);
 }
 return (0);
}
