
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct timeval {int dummy; } ;
struct sctp_inpcb {int sctp_ep; } ;


 int FUNC_0 (struct timeval*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,struct timeval*) ;
 scalar_t__ FUNC_2 (int *) ;

uint32_t
FUNC_3(struct sctp_inpcb *VAR_0, uint16_t VAR_1, uint16_t VAR_2, int VAR_3)
{
 uint32_t VAR_4;
 struct timeval VAR_5;

 if (VAR_3) {
  (void)FUNC_0(&VAR_5);
 }
 for (;;) {
  VAR_4 = FUNC_2(&VAR_0->sctp_ep);
  if (VAR_4 == 0) {

   continue;
  }
  if (!VAR_3 || FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_5)) {
   break;
  }
 }
 return (VAR_4);
}
