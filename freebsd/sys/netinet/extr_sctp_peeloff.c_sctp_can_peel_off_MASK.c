
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct socket {scalar_t__ so_pcb; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_inpcb {int sctp_flags; } ;
typedef int sctp_assoc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_inpcb*,struct sctp_tcb*,int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct sctp_tcb*) ;
 struct sctp_tcb* FUNC_3 (struct sctp_inpcb*,int ,int) ;

int
FUNC_4(struct socket *VAR_10, sctp_assoc_t VAR_11)
{
 struct sctp_inpcb *VAR_12;
 struct sctp_tcb *VAR_13;
 uint32_t VAR_14;

 if (VAR_10 == ((void*)0)) {
  FUNC_1(((void*)0), ((void*)0), ((void*)0), VAR_5, VAR_0);
  return (VAR_0);
 }
 VAR_12 = (struct sctp_inpcb *)VAR_10->so_pcb;
 if (VAR_12 == ((void*)0)) {
  FUNC_1(((void*)0), ((void*)0), ((void*)0), VAR_5, VAR_1);
  return (VAR_1);
 }
 if ((VAR_12->sctp_flags & VAR_7) ||
     (VAR_12->sctp_flags & VAR_6)) {
  FUNC_1(VAR_12, ((void*)0), ((void*)0), VAR_5, VAR_4);
  return (VAR_4);
 }
 VAR_13 = FUNC_3(VAR_12, VAR_11, 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_12, VAR_13, ((void*)0), VAR_5, VAR_2);
  return (VAR_2);
 }
 VAR_14 = FUNC_0(VAR_13);
 if ((VAR_14 == VAR_8) ||
     (VAR_14 == VAR_9)) {
  FUNC_2(VAR_13);
  FUNC_1(VAR_12, VAR_13, ((void*)0), VAR_5, VAR_3);
  return (VAR_3);
 }
 FUNC_2(VAR_13);

 return (0);
}
