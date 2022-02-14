
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conditional; char const* type; int speed; int * porttype; struct TYPE_3__* next; } ;
typedef TYPE_1__ MAP ;







 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,char const*) ;

const char *
FUNC_1(const char *VAR_2)
{
 MAP *VAR_3;
 int VAR_4;

 VAR_4 = 0;
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->porttype == ((void*)0) || !FUNC_0(VAR_3->porttype, VAR_2)) {
   switch (VAR_3->conditional) {
   case 0:
    VAR_4 = 1;
    break;
   case 132:
    VAR_4 = (VAR_0 == VAR_3->speed);
    break;
   case 131:
    VAR_4 = (VAR_0 >= VAR_3->speed);
    break;
   case 130:
    VAR_4 = (VAR_0 > VAR_3->speed);
    break;
   case 129:
    VAR_4 = (VAR_0 <= VAR_3->speed);
    break;
   case 128:
    VAR_4 = (VAR_0 < VAR_3->speed);
    break;
   }
   if (VAR_4)
    return (VAR_3->type);
  }

 return (VAR_2);
}
