
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct sockaddr_in {TYPE_7__ sin_addr; } ;
struct TYPE_12__ {int ipv4_local_scope; int site_scope; int local_scope; } ;
struct TYPE_13__ {int primary_destination; scalar_t__ asconf_supported; TYPE_4__ scope; } ;
struct sctp_tcb {TYPE_5__ asoc; } ;
struct TYPE_9__ {int inp_cred; } ;
struct TYPE_10__ {TYPE_1__ inp; } ;
struct sctp_inpcb {int sctp_flags; TYPE_2__ ip_inp; } ;
struct TYPE_14__ {int sa_family; } ;
struct TYPE_11__ {struct sockaddr_in sin; TYPE_6__ sa; struct sockaddr_in6 sin6; } ;
struct sctp_ifa {int localifa_flags; TYPE_3__ address; } ;




 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct sctp_tcb*) ;
 int FUNC_5 (struct sctp_inpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,TYPE_7__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct sctp_tcb*,struct sctp_ifa*) ;
 int FUNC_9 (struct sctp_tcb*,struct sctp_ifa*,int ) ;
 scalar_t__ FUNC_10 (struct sctp_inpcb*,int ) ;
 scalar_t__ FUNC_11 (struct sctp_inpcb*,int ) ;
 int FUNC_12 (struct sctp_tcb*,TYPE_6__*) ;
 int FUNC_13 (struct sctp_tcb*,int *,int) ;
 int FUNC_14 (int ,struct sctp_inpcb*,struct sctp_tcb*,int ) ;

__attribute__((used)) static void
FUNC_15(struct sctp_inpcb *VAR_7, struct sctp_tcb *VAR_8,
    struct sctp_ifa *VAR_9, uint16_t VAR_10, int VAR_11)
{
 int VAR_12;

 if ((VAR_7->sctp_flags & VAR_1) == 0 ||
     FUNC_10(VAR_7, VAR_3)) {

  return;
 }






 switch (VAR_9->address.sa.sa_family) {
 default:
  return;
 }
 FUNC_8(VAR_8, VAR_9);





 switch (VAR_9->address.sa.sa_family) {
 default:

  return;
 }


 if (FUNC_11(VAR_7, VAR_3)) {

  if (VAR_8->asoc.asconf_supported) {

   VAR_12 = FUNC_9(VAR_8, VAR_9, VAR_10);






   if (VAR_12 == 0 &&
       ((FUNC_4(VAR_8) == VAR_4) ||
       (FUNC_4(VAR_8) == VAR_5))) {




    FUNC_13(VAR_8, ((void*)0), VAR_11);

   }
  }
 }
}
