
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int primary_destination; int vrf_id; } ;
struct sctp_tcb {TYPE_1__ asoc; int sctp_ep; } ;
struct sctp_ifa {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,char*,void*) ;
 int FUNC_1 (int ,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct sctp_tcb*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_ifa*,int ) ;
 struct sctp_ifa* FUNC_4 (struct sockaddr*,int ,int ) ;
 int FUNC_5 (struct sctp_tcb*,int *,int ) ;
 int FUNC_6 (int ,int ,struct sctp_tcb*,int ) ;

int32_t
FUNC_7(struct sctp_tcb *VAR_6, struct sockaddr *VAR_7)
{
 uint32_t VAR_8;
 struct sctp_ifa *VAR_9;


 VAR_8 = VAR_6->asoc.vrf_id;
 VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_0);
 if (VAR_9 == ((void*)0)) {

  return (-1);
 }


 if (!FUNC_3(VAR_6, VAR_9, VAR_2)) {

  FUNC_0(VAR_1,
      "set_primary_ip_address_sa: queued on tcb=%p, ",
      (void *)VAR_6);
  FUNC_1(VAR_1, VAR_7);
  if ((FUNC_2(VAR_6) == VAR_3) ||
      (FUNC_2(VAR_6) == VAR_4)) {





   FUNC_5(VAR_6, ((void*)0), VAR_0);

  }
 } else {
  FUNC_0(VAR_1, "set_primary_ip_address_sa: failed to add to queue on tcb=%p, ",
      (void *)VAR_6);
  FUNC_1(VAR_1, VAR_7);
  return (-1);
 }
 return (0);
}
