
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*,int,int *) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,struct sctphdr*,int ,int ,struct mbuf*,int ,int ,int ,int ,int ) ;

void
FUNC_3(struct mbuf *VAR_1, int VAR_2, struct sockaddr *VAR_3, struct sockaddr *VAR_4,
    struct sctphdr *VAR_5, uint32_t VAR_6, struct mbuf *VAR_7,
    uint8_t VAR_8, uint32_t VAR_9, uint16_t VAR_10,
    uint32_t VAR_11, uint16_t VAR_12)
{

 if (FUNC_0(VAR_1, VAR_2, &VAR_6)) {
  if (VAR_7)
   FUNC_1(VAR_7);
  return;
 }
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_0, VAR_7,
     VAR_8, VAR_9, VAR_10,
     VAR_11, VAR_12);
 return;
}
