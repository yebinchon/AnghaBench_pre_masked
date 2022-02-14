
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_int8_t ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct nbpcb {int nbp_vc; int nbp_state; int nbp_flags; int nbp_tso; int nbp_timo; int nbp_laddr; int nbp_paddr; } ;
struct mdchain {int mb_top; } ;
struct mbuf {int dummy; } ;
struct mbchain {int mb_top; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct mdchain*,int ) ;
 struct mdchain* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct mdchain*) ;
 int FUNC_5 (struct mdchain*) ;
 scalar_t__ FUNC_6 (struct mdchain*) ;
 int FUNC_7 (struct mdchain*) ;
 int FUNC_8 (struct mdchain*,int ) ;
 int FUNC_9 (struct mdchain*) ;
 int FUNC_10 (struct mdchain*,int ,int,int ) ;
 int FUNC_11 (struct mdchain*,int *) ;
 int FUNC_12 (struct mdchain*,struct mbuf*) ;
 int FUNC_13 (struct nbpcb*,struct sockaddr_in*,struct thread*) ;
 int FUNC_14 (struct mdchain*,int ) ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int FUNC_16 (int ,int ,int ,struct thread*) ;
 int FUNC_17 (struct nbpcb*,struct mbuf**,int*,scalar_t__*,struct thread*) ;
 int FUNC_18 (int ,int ,struct timeval*,struct thread*) ;
 int FUNC_19 (int ,struct thread*) ;

__attribute__((used)) static int
FUNC_20(struct nbpcb *VAR_14, struct thread *VAR_15)
{
 struct mbchain *VAR_16;
 struct mdchain *VAR_17;
 struct mbuf *VAR_18;
 struct timeval VAR_19;
 struct sockaddr_in VAR_20;
 u_short VAR_21;
 u_int8_t VAR_22;
 int VAR_23, VAR_24;

 VAR_16 = FUNC_3(sizeof(struct mbchain), VAR_4, VAR_5);
 VAR_17 = FUNC_3(sizeof(struct mbchain), VAR_4, VAR_5);
 VAR_23 = FUNC_7(VAR_16);
 if (VAR_23) {
  FUNC_2(VAR_16, VAR_4);
  FUNC_2(VAR_17, VAR_4);
  return VAR_23;
 }
 FUNC_8(VAR_16, 0);
 FUNC_14(VAR_16, VAR_14->nbp_paddr);
 FUNC_14(VAR_16, VAR_14->nbp_laddr);
 FUNC_15(VAR_16->mb_top, VAR_11, FUNC_6(VAR_16) - 4);
 VAR_23 = FUNC_16(VAR_14->nbp_tso, VAR_16->mb_top, 0, VAR_15);
 if (!VAR_23) {
  VAR_14->nbp_state = VAR_8;
 }
 FUNC_4(VAR_16);
 FUNC_5(VAR_16);
 FUNC_2(VAR_16, VAR_4);
 if (VAR_23) {
  FUNC_2(VAR_17, VAR_4);
  return VAR_23;
 }
 FUNC_1(&VAR_19, &VAR_14->nbp_timo);
 VAR_23 = FUNC_18(VAR_14->nbp_tso, VAR_13, &VAR_19, VAR_15);
 if (VAR_23 == VAR_2) {
  FUNC_0("initial request timeout\n");
  FUNC_2(VAR_17, VAR_4);
  return VAR_1;
 }
 if (VAR_23) {
  FUNC_2(VAR_17, VAR_4);
  return VAR_23;
 }
 VAR_23 = FUNC_17(VAR_14, &VAR_18, &VAR_24, &VAR_22, VAR_15);
 if (VAR_23) {
  FUNC_0("recv() error %d\n", VAR_23);
  FUNC_2(VAR_17, VAR_4);
  return VAR_23;
 }



 if (VAR_18)
  FUNC_12(VAR_17, VAR_18);
 VAR_23 = 0;
 do {
  if (VAR_22 == VAR_10) {
   VAR_14->nbp_state = VAR_9;
   VAR_14->nbp_flags |= VAR_6;
   break;
  }
  if (VAR_22 != VAR_12) {
   VAR_23 = VAR_0;
   break;
  }
  if (VAR_24 != 6) {
   VAR_23 = VAR_0;
   break;
  }
  FUNC_10(VAR_17, (caddr_t)&VAR_20.sin_addr, 4, VAR_3);
  FUNC_11(VAR_17, &VAR_21);
  VAR_20.sin_port = VAR_21;
  VAR_14->nbp_state = VAR_7;
  FUNC_19(VAR_14->nbp_vc, VAR_15);
  VAR_23 = FUNC_13(VAR_14, &VAR_20, VAR_15);
  if (!VAR_23)
   VAR_23 = FUNC_20(VAR_14, VAR_15);
  if (VAR_23) {
   FUNC_19(VAR_14->nbp_vc, VAR_15);
   break;
  }
 } while(0);
 if (VAR_18)
  FUNC_9(VAR_17);
 FUNC_2(VAR_17, VAR_4);
 return VAR_23;
}
