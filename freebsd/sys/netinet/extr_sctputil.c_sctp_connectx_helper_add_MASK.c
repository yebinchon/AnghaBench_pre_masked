
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_4__ {int port; } ;
struct sctp_tcb {TYPE_2__ asoc; struct sctp_inpcb* sctp_ep; } ;
struct sctp_inpcb {int dummy; } ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,struct sctp_tcb*,int *,scalar_t__,int) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_tcb*,struct sockaddr*,int *,int ,int ,int ) ;
 int FUNC_6 (struct sctp_inpcb*,struct sctp_tcb*,int ,scalar_t__) ;

int
FUNC_7(struct sctp_tcb *VAR_12, struct sockaddr *VAR_13,
    int VAR_14, int *VAR_15)
{
 int VAR_16 = 0;
 int VAR_17;
 struct sctp_inpcb *VAR_18;
 struct sockaddr *VAR_19;
 size_t VAR_20 = 0;







 VAR_19 = VAR_13;
 VAR_18 = VAR_12->sctp_ep;
 *VAR_15 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  switch (VAR_19->sa_family) {
  default:
   break;
  }
  VAR_19 = (struct sockaddr *)((caddr_t)VAR_19 + VAR_20);
 }
out_now:
 return (VAR_16);
}
