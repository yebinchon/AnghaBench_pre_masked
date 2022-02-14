
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inpcb {TYPE_1__* inp_sp; } ;
struct TYPE_2__ {int * sp_out; int * sp_in; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int **) ;

int
FUNC_2(struct inpcb *VAR_1)
{

 if (VAR_1->inp_sp == ((void*)0))
  return (0);

 if (VAR_1->inp_sp->sp_in != ((void*)0))
  FUNC_1(&VAR_1->inp_sp->sp_in);

 if (VAR_1->inp_sp->sp_out != ((void*)0))
  FUNC_1(&VAR_1->inp_sp->sp_out);

 FUNC_0(VAR_1->inp_sp, VAR_0);
 VAR_1->inp_sp = ((void*)0);
 return (0);
}
