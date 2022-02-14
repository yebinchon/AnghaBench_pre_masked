
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct secpolicy {int dummy; } ;
struct inpcb {TYPE_1__* inp_sp; } ;
struct TYPE_2__ {int flags; struct secpolicy* sp_out; struct secpolicy* sp_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct secpolicy**) ;

__attribute__((used)) static void
FUNC_2(struct inpcb *VAR_3, u_int VAR_4)
{
 struct secpolicy *VAR_5;

 FUNC_0(VAR_3);
 if (VAR_4 == VAR_2) {
  if (VAR_3->inp_sp->flags & VAR_0)
   return;
  VAR_5 = VAR_3->inp_sp->sp_in;
  VAR_3->inp_sp->sp_in = ((void*)0);
 } else {
  if (VAR_3->inp_sp->flags & VAR_1)
   return;
  VAR_5 = VAR_3->inp_sp->sp_out;
  VAR_3->inp_sp->sp_out = ((void*)0);
 }
 if (VAR_5 != ((void*)0))
  FUNC_1(&VAR_5);
}
