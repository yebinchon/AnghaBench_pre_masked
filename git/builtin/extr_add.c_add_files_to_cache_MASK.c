
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct update_callback_data {int flags; int add_errors; } ;
struct TYPE_3__ {int override_submodule_config; } ;
struct TYPE_4__ {TYPE_1__ flags; struct update_callback_data* format_callback_data; int format_callback; int output_format; } ;
struct rev_info {int prune_data; scalar_t__ max_count; TYPE_2__ diffopt; } ;
struct pathspec {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pathspec const*) ;
 int FUNC_2 (struct update_callback_data*,int ,int) ;
 int FUNC_3 (int ,struct rev_info*,char const*) ;
 int FUNC_4 (struct rev_info*,int ) ;
 int FUNC_5 (int ,int *,struct rev_info*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_6(const char *VAR_4,
         const struct pathspec *VAR_5, int VAR_6)
{
 struct update_callback_data VAR_7;
 struct rev_info VAR_8;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.flags = VAR_6;

 FUNC_3(VAR_2, &VAR_8, VAR_4);
 FUNC_5(0, ((void*)0), &VAR_8, ((void*)0));
 if (VAR_5)
  FUNC_1(&VAR_8.prune_data, VAR_5);
 VAR_8.diffopt.output_format = VAR_0;
 VAR_8.diffopt.format_callback = VAR_3;
 VAR_8.diffopt.format_callback_data = &VAR_7;
 VAR_8.diffopt.flags.override_submodule_config = 1;
 VAR_8.max_count = 0;
 FUNC_4(&VAR_8, VAR_1);
 FUNC_0(&VAR_8.prune_data);
 return !!VAR_7.add_errors;
}
