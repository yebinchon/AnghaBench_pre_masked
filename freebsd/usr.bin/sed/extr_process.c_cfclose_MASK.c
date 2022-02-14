
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; struct s_command* c; TYPE_1__* s; } ;
struct s_command {int code; struct s_command* next; TYPE_2__ u; int t; } ;
struct TYPE_3__ {int wfd; int wfile; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;

void
FUNC_2(struct s_command *VAR_0, struct s_command *VAR_1)
{

 for (; VAR_0 != VAR_1; VAR_0 = VAR_0->next)
  switch(VAR_0->code) {
  case 's':
   if (VAR_0->u.s->wfd != -1 && FUNC_0(VAR_0->u.s->wfd))
    FUNC_1(1, "%s", VAR_0->u.s->wfile);
   VAR_0->u.s->wfd = -1;
   break;
  case 'w':
   if (VAR_0->u.fd != -1 && FUNC_0(VAR_0->u.fd))
    FUNC_1(1, "%s", VAR_0->t);
   VAR_0->u.fd = -1;
   break;
  case '{':
   FUNC_2(VAR_0->u.c, VAR_0->next);
   break;
  }
}
