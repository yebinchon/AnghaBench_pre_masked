
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_0(struct tcpcb *VAR_8)
{
 if ((VAR_8->t_state == VAR_2) ||
     (VAR_8->t_state == VAR_3)) {

  return (0);
 }
 if ((VAR_8->t_state == VAR_5) ||
     (VAR_8->t_state == VAR_4)) {




  return (VAR_0);
 }
 if ((VAR_8->t_flags & VAR_6) || VAR_7) {
  return (0);
 }




 return (VAR_1);
}
