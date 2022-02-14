
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct line_opt_callback_data* value; } ;
struct line_opt_callback_data {int args; TYPE_1__* rev; } ;
struct TYPE_2__ {int line_level_traverse; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct line_opt_callback_data *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 if (!VAR_1)
  return -1;

 VAR_3->rev->line_level_traverse = 1;
 FUNC_1(&VAR_3->args, VAR_1);

 return 0;
}
