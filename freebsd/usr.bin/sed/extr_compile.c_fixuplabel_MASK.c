
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct s_command* c; } ;
struct s_command {int code; struct s_command* next; TYPE_1__ u; int * t; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int *) ;
 struct s_command* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct s_command *VAR_3, struct s_command *VAR_4)
{

 for (; VAR_3 != VAR_4; VAR_3 = VAR_3->next)
  switch (VAR_3->code) {
  case 'a':
  case 'r':
   VAR_0++;
   break;
  case 'b':
  case 't':

   if (VAR_3->t == ((void*)0)) {
    VAR_3->u.c = ((void*)0);
    break;
   }
   if ((VAR_3->u.c = FUNC_1(VAR_3->t)) == ((void*)0))
    FUNC_0(1, "%lu: %s: undefined label '%s'", VAR_2, VAR_1, VAR_3->t);
   FUNC_2(VAR_3->t);
   break;
  case '{':

   FUNC_3(VAR_3->u.c, VAR_3->next);
   break;
  }
}
