
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secpolicy {int spidx; } ;
struct inpcb {TYPE_1__* inp_sp; } ;
struct TYPE_2__ {int flags; struct secpolicy* sp_out; struct secpolicy* sp_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_2 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct secpolicy* FUNC_3 (struct secpolicy*) ;
 int FUNC_4 (struct inpcb*,int *,int ) ;
 int FUNC_5 (struct secpolicy**) ;

int
FUNC_6(struct inpcb *VAR_5, struct inpcb *VAR_6)
{
 struct secpolicy *VAR_7;






 if (VAR_5->inp_sp == ((void*)0))
  return (0);

 FUNC_2(VAR_6->inp_sp != ((void*)0), ("new inp_sp is NULL"));
 FUNC_2((VAR_6->inp_sp->flags & (
     VAR_1 | VAR_2)) == 0,
     ("new PCB already has configured policies"));
 FUNC_1(VAR_6);
 FUNC_0(VAR_5);

 if (VAR_5->inp_sp->flags & VAR_1) {
  VAR_7 = FUNC_3(VAR_5->inp_sp->sp_in);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  FUNC_4(VAR_6, &VAR_7->spidx, VAR_3);
  if (VAR_6->inp_sp->sp_in != ((void*)0))
   FUNC_5(&VAR_6->inp_sp->sp_in);
  VAR_6->inp_sp->sp_in = VAR_7;
  VAR_6->inp_sp->flags |= VAR_1;
 }
 if (VAR_5->inp_sp->flags & VAR_2) {
  VAR_7 = FUNC_3(VAR_5->inp_sp->sp_out);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  FUNC_4(VAR_6, &VAR_7->spidx, VAR_4);
  if (VAR_6->inp_sp->sp_out != ((void*)0))
   FUNC_5(&VAR_6->inp_sp->sp_out);
  VAR_6->inp_sp->sp_out = VAR_7;
  VAR_6->inp_sp->flags |= VAR_2;
 }
 return (0);
}
