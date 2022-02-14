
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tcpcb {int t_flags; int rcv_numsacks; scalar_t__ t_maxseg; int t_state; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

u_int
FUNC_3(const struct tcpcb *VAR_14)
{
 u_int VAR_15;

 if (VAR_14->t_flags & VAR_8)
  return (VAR_14->t_maxseg);
 if (FUNC_1(VAR_14->t_state)) {
  if (VAR_14->t_flags & VAR_9)
   VAR_15 = VAR_5;
  else
   VAR_15 = 0;




  if ((VAR_14->t_flags & VAR_12) && VAR_14->rcv_numsacks > 0) {
   VAR_15 += VAR_2;
   VAR_15 += VAR_14->rcv_numsacks * VAR_1;
   VAR_15 = ((((VAR_15) / 4) + !!((VAR_15) % 4)) * 4);
  }
 } else {
  if (VAR_14->t_flags & VAR_11)
   VAR_15 = VAR_5;
  else
   VAR_15 = ((((VAR_0) / 4) + !!((VAR_0) % 4)) * 4);
  if (VAR_14->t_flags & VAR_10)
   VAR_15 += ((((VAR_6) / 4) + !!((VAR_6) % 4)) * 4);




  if (VAR_14->t_flags & VAR_12)
   VAR_15 += ((((VAR_3) / 4) + !!((VAR_3) % 4)) * 4);
 }

 VAR_15 = FUNC_2(VAR_15, VAR_7);
 return (VAR_14->t_maxseg - VAR_15);
}
