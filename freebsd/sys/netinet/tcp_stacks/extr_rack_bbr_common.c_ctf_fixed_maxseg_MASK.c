
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {int t_flags; scalar_t__ t_maxseg; int t_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int ) ;

uint32_t
FUNC_3(struct tcpcb *VAR_12)
{
 int VAR_13;

 if (VAR_12->t_flags & VAR_6)
  return (VAR_12->t_maxseg);
 if (FUNC_1(VAR_12->t_state)) {
  if (VAR_12->t_flags & VAR_7)
   VAR_13 = VAR_3;
  else
   VAR_13 = 0;




 } else {
  if (VAR_12->t_flags & VAR_9)
   VAR_13 = VAR_3;
  else
   VAR_13 = ((((VAR_0) / 4) + !!((VAR_0) % 4)) * 4);
  if (VAR_12->t_flags & VAR_8)
   VAR_13 += ((((VAR_4) / 4) + !!((VAR_4) % 4)) * 4);




  if (VAR_12->t_flags & VAR_10)
   VAR_13 += ((((VAR_1) / 4) + !!((VAR_1) % 4)) * 4);
 }

 VAR_13 = FUNC_2(VAR_13, VAR_5);
 return (VAR_12->t_maxseg - VAR_13);
}
