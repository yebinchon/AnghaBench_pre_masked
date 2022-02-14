
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {scalar_t__* shallow_ref; } ;
struct command {size_t index; int ref_name; struct command* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct command*) ;

__attribute__((used)) static void FUNC_3(struct command *VAR_0,
            struct shallow_info *VAR_1)
{
 struct command *VAR_2;
 int VAR_3 = 1;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_2(VAR_2) && VAR_1->shallow_ref[VAR_2->index]) {
   FUNC_1("BUG: connectivity check has not been run on ref %s",
         VAR_2->ref_name);
   VAR_3 = 0;
  }
 }
 if (!VAR_3)
  FUNC_0("connectivity check skipped???");
}
