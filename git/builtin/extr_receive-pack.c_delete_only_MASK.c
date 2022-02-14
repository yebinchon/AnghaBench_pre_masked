
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int new_oid; struct command* next; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct command *VAR_0)
{
 struct command *VAR_1;
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next) {
  if (!FUNC_0(&VAR_1->new_oid))
   return 0;
 }
 return 1;
}
