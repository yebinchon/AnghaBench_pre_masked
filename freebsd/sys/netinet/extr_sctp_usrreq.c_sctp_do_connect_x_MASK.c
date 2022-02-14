
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_6__ {int delayed_connection; int time_entered; int primary_destination; } ;
struct sctp_tcb {TYPE_3__ asoc; TYPE_2__* sctp_ep; } ;
struct TYPE_4__ {int port; int pre_open_stream_count; } ;
struct sctp_inpcb {int sctp_flags; TYPE_1__ sctp_ep; int def_vrf_id; int sctp_asoc_list; } ;
typedef int sctp_assoc_t ;
typedef int caddr_t ;
struct TYPE_5__ {int sctp_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sctp_tcb* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sctp_inpcb*) ;
 int FUNC_3 (struct sctp_inpcb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct sctp_inpcb*) ;
 int FUNC_6 (struct sctp_inpcb*) ;
 int FUNC_7 (struct sctp_inpcb*) ;
 int FUNC_8 (struct sctp_inpcb*) ;
 scalar_t__ FUNC_9 (struct sctp_inpcb*) ;
 int FUNC_10 (struct sctp_inpcb*,struct sctp_tcb*,int *,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (struct sctp_tcb*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct sctp_tcb*) ;
 int VAR_17 ;
 struct sctp_tcb* FUNC_13 (struct sctp_inpcb*,struct sockaddr*,int*,int ,int ,int ,int ,struct thread*,int ) ;
 int FUNC_14 (struct sctp_tcb*,struct sockaddr*,unsigned int,int*) ;
 int FUNC_15 (struct sctp_inpcb*,struct sockaddr*,unsigned int,unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_16 (struct sctp_tcb*) ;
 int FUNC_17 (struct socket*,int *,int *,void*) ;
 scalar_t__ FUNC_18 (struct sctp_inpcb*,int ) ;
 int FUNC_19 (struct sctp_inpcb*,struct sctp_tcb*,int ) ;
 int FUNC_20 (int ,struct sctp_inpcb*,struct sctp_tcb*,int ) ;
 int FUNC_21 (struct socket*) ;

__attribute__((used)) static int
FUNC_22(struct socket *VAR_18, struct sctp_inpcb *VAR_19, void *VAR_20,
    size_t VAR_21, void *VAR_22, int VAR_23)
{
 int VAR_24;
 int VAR_25 = 0;
 struct sctp_tcb *VAR_26 = ((void*)0);
 struct sockaddr *VAR_27;
 unsigned int VAR_28 = 0, VAR_29 = 0, *VAR_30, VAR_31;
 uint32_t VAR_32;
 sctp_assoc_t *VAR_33;

 FUNC_1(VAR_4, "Connectx called\n");

 if ((VAR_19->sctp_flags & VAR_13) &&
     (VAR_19->sctp_flags & VAR_8)) {

  FUNC_10(VAR_19, VAR_26, ((void*)0), VAR_5, VAR_0);
  return (VAR_0);
 }

 if ((VAR_19->sctp_flags & VAR_9) &&
     (FUNC_18(VAR_19, VAR_10))) {
  FUNC_10(VAR_19, VAR_26, ((void*)0), VAR_5, VAR_3);
  return (VAR_3);
 }

 if (VAR_19->sctp_flags & VAR_8) {
  FUNC_7(VAR_19);
  VAR_26 = FUNC_0(&VAR_19->sctp_asoc_list);
  FUNC_8(VAR_19);
 }
 if (VAR_26) {
  FUNC_10(VAR_19, VAR_26, ((void*)0), VAR_5, VAR_1);
  return (VAR_1);
 }
 FUNC_6(VAR_19);
 FUNC_2(VAR_19);
 VAR_25 = 1;
 if ((VAR_19->sctp_flags & VAR_11) ||
     (VAR_19->sctp_flags & VAR_12)) {
  FUNC_10(VAR_19, VAR_26, ((void*)0), VAR_5, VAR_2);
  VAR_24 = VAR_2;
  goto out_now;
 }
 VAR_30 = (unsigned int *)VAR_20;
 VAR_31 = *VAR_30;
 VAR_27 = (struct sockaddr *)(VAR_30 + 1);
 VAR_24 = FUNC_15(VAR_19, VAR_27, VAR_31, &VAR_29, &VAR_28, (unsigned int)(VAR_21 - sizeof(int)));
 if (VAR_24 != 0) {

  FUNC_3(VAR_19);
  VAR_25 = 0;
  FUNC_10(VAR_19, ((void*)0), ((void*)0), VAR_5, VAR_24);
  goto out_now;
 }
 if ((VAR_19->sctp_flags & VAR_14) ==
     VAR_14) {

  VAR_24 = FUNC_17(VAR_18, ((void*)0), ((void*)0), VAR_22);
  if (VAR_24) {
   goto out_now;
  }
 }


 VAR_32 = VAR_19->def_vrf_id;



 VAR_26 = FUNC_13(VAR_19, VAR_27, &VAR_24, 0, VAR_32,
     VAR_19->sctp_ep.pre_open_stream_count,
     VAR_19->sctp_ep.port,
     (struct thread *)VAR_22,
     VAR_6);
 if (VAR_26 == ((void*)0)) {

  goto out_now;
 }
 if (VAR_26->sctp_ep->sctp_flags & VAR_13) {
  VAR_26->sctp_ep->sctp_flags |= VAR_8;

  FUNC_21(VAR_18);
 }
 FUNC_11(VAR_26, VAR_16);

 switch (VAR_27->sa_family) {
 default:
  break;
 }

 VAR_24 = 0;
 FUNC_14(VAR_26, VAR_27, (VAR_31 - 1), &VAR_24);

 if (VAR_24) {
  goto out_now;
 }
 VAR_33 = (sctp_assoc_t *)VAR_20;
 *VAR_33 = FUNC_16(VAR_26);

 if (VAR_23) {

  VAR_26->asoc.delayed_connection = 1;
  FUNC_20(VAR_17, VAR_19, VAR_26, VAR_26->asoc.primary_destination);
 } else {
  (void)FUNC_4(&VAR_26->asoc.time_entered);
  FUNC_19(VAR_19, VAR_26, VAR_15);
 }
 FUNC_12(VAR_26);
out_now:
 if (VAR_25) {
  FUNC_3(VAR_19);
 }
 FUNC_5(VAR_19);
 return (VAR_24);
}
