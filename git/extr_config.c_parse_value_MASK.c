
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; scalar_t__ len; } ;
struct TYPE_5__ {TYPE_1__ value; int linenr; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static char *FUNC_4(void)
{
 int VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;

 FUNC_3(&VAR_0->value);
 for (;;) {
  int VAR_4 = FUNC_0();
  if (VAR_4 == '\n') {
   if (VAR_1) {
    VAR_0->linenr--;
    return ((void*)0);
   }
   return VAR_0->value.buf;
  }
  if (VAR_2)
   continue;
  if (FUNC_1(VAR_4) && !VAR_1) {
   if (VAR_0->value.len)
    VAR_3++;
   continue;
  }
  if (!VAR_1) {
   if (VAR_4 == ';' || VAR_4 == '#') {
    VAR_2 = 1;
    continue;
   }
  }
  for (; VAR_3; VAR_3--)
   FUNC_2(&VAR_0->value, ' ');
  if (VAR_4 == '\\') {
   VAR_4 = FUNC_0();
   switch (VAR_4) {
   case '\n':
    continue;
   case 't':
    VAR_4 = '\t';
    break;
   case 'b':
    VAR_4 = '\b';
    break;
   case 'n':
    VAR_4 = '\n';
    break;

   case '\\': case '"':
    break;

   default:
    return ((void*)0);
   }
   FUNC_2(&VAR_0->value, VAR_4);
   continue;
  }
  if (VAR_4 == '"') {
   VAR_1 = 1-VAR_1;
   continue;
  }
  FUNC_2(&VAR_0->value, VAR_4);
 }
}
