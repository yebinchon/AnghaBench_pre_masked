
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct grep_opt {struct string_list* output_priv; } ;
struct child_process {char const* dir; int use_shell; int args; } ;
struct TYPE_2__ {int string; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct child_process*) ;

__attribute__((used)) static void FUNC_3(struct grep_opt *VAR_1, const char *VAR_2)
{
 struct string_list *VAR_3 = VAR_1->output_priv;
 struct child_process VAR_4 = VAR_0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->nr; VAR_5++)
  FUNC_0(&VAR_4.args, VAR_3->items[VAR_5].string);
 VAR_4.dir = VAR_2;
 VAR_4.use_shell = 1;

 VAR_6 = FUNC_2(&VAR_4);
 if (VAR_6)
  FUNC_1(VAR_6);
}
