
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int override_submodule_config; } ;
struct diff_options {int* format_callback_data; int pathspec; int repo; TYPE_1__ flags; int format_callback; int output_format; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pathspec const*) ;
 int FUNC_2 (struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 scalar_t__ FUNC_4 (struct object_id*,struct diff_options*) ;
 int FUNC_5 (struct diff_options*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(const struct pathspec *VAR_3,
     struct object_id *VAR_4,
     int VAR_5)
{
 struct diff_options VAR_6;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6.pathspec, VAR_3);
 VAR_6.output_format = VAR_0;
 VAR_6.format_callback = VAR_2;
 VAR_6.format_callback_data = &VAR_5;
 VAR_6.flags.override_submodule_config = 1;
 VAR_6.repo = VAR_1;

 if (FUNC_4(VAR_4, &VAR_6))
  return 1;
 FUNC_3(&VAR_6);
 FUNC_2(&VAR_6);
 FUNC_0(&VAR_6.pathspec);

 return 0;
}
