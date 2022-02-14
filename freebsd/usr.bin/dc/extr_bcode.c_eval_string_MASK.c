
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source {int dummy; } ;
struct TYPE_2__ {size_t readsp; int readstack_sz; struct source* readstack; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 struct source* FUNC_2 (struct source*,size_t,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct source*,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(char *VAR_2)
{
 int VAR_3;

 if (VAR_1.readsp > 0) {

  VAR_3 = FUNC_1();
  if (VAR_3 == VAR_0) {
   FUNC_3();
   FUNC_4(&VAR_1.readstack[VAR_1.readsp], VAR_2);
   return;
  } else
   FUNC_5();
 }
 if (VAR_1.readsp == VAR_1.readstack_sz - 1) {
  size_t VAR_4 = VAR_1.readstack_sz * 2;
  struct source *VAR_5;
  VAR_5 = FUNC_2(VAR_1.readstack, VAR_4,
      sizeof(struct source));
  if (VAR_5 == ((void*)0))
   FUNC_0(1, "recursion too deep");
  VAR_1.readstack_sz = VAR_4;
  VAR_1.readstack = VAR_5;
 }
 FUNC_4(&VAR_1.readstack[++VAR_1.readsp], VAR_2);
}
