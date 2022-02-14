
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct inpcb {int inp_flowid; int inp_flowtype; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ) ;

inline int
FUNC_2(struct inpcb *VAR_4)
{
 u_int VAR_5;
 if (VAR_3) {





  VAR_5 = VAR_4->inp_flowid % (VAR_2 + 1);
  if (! FUNC_0(VAR_5))
   return (VAR_5);
  return (VAR_1);
 }


 else {
  return (0);
 }
}
