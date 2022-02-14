
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_nets {int addr_is_local; } ;
struct sctp_inpcb {int sctp_flags; int fibnum; } ;
struct sctp_ifa {int dummy; } ;
struct TYPE_9__ {int sa_family; } ;
struct TYPE_10__ {TYPE_1__ ro_dst; int * ro_rt; } ;
typedef TYPE_2__ sctp_route_t ;
typedef int sa_family_t ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct sockaddr*) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_1 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 struct sctp_ifa* FUNC_10 (struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*,TYPE_2__*,int ,int,int,int,int) ;
 struct sctp_ifa* FUNC_11 (struct sctp_inpcb*,TYPE_2__*,int ,int,int,int,int) ;
 struct sctp_ifa* FUNC_12 (struct sctp_inpcb*,struct sctp_tcb*,TYPE_2__*,int ,int,int,int,int) ;

struct sctp_ifa *
FUNC_13(struct sctp_inpcb *VAR_2,
    struct sctp_tcb *VAR_3,
    sctp_route_t *VAR_4,
    struct sctp_nets *VAR_5,
    int VAR_6, uint32_t VAR_7)
{
 struct sctp_ifa *VAR_8;
 uint8_t VAR_9, VAR_10;
 sa_family_t VAR_11;
 if (VAR_4->ro_rt == ((void*)0)) {



  FUNC_9(VAR_4, VAR_7, VAR_2->fibnum);
 }
 if (VAR_4->ro_rt == ((void*)0)) {
  return (((void*)0));
 }
 VAR_11 = VAR_4->ro_dst.sa_family;
 VAR_9 = VAR_10 = 0;

 switch (VAR_11) {
 }
 FUNC_4(VAR_0, "Select source addr for:");
 FUNC_5(VAR_0, (struct sockaddr *)&VAR_4->ro_dst);
 FUNC_6();
 if (VAR_2->sctp_flags & VAR_1) {



  VAR_8 = FUNC_10(VAR_2, VAR_3, VAR_5, VAR_4, VAR_7,
      VAR_9, VAR_10,
      VAR_6, VAR_11);
  FUNC_7();
  return (VAR_8);
 }



 if (VAR_3) {
  VAR_8 = FUNC_12(VAR_2, VAR_3, VAR_4,
      VAR_7, VAR_9,
      VAR_10,
      VAR_6, VAR_11);
 } else {
  VAR_8 = FUNC_11(VAR_2, VAR_4, VAR_7,
      VAR_6,
      VAR_9,
      VAR_10, VAR_11);
 }
 FUNC_7();
 return (VAR_8);
}
