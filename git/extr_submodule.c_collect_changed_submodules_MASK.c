
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_4__ {struct collect_changed_submodules_cb_data* format_callback_data; int format_callback; int output_format; } ;
struct rev_info {TYPE_2__ diffopt; } ;
struct repository {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct collect_changed_submodules_cb_data {int * commit_oid; struct string_list* changed; struct repository* repo; } ;
struct argv_array {int argv; int argc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit const*,int,struct rev_info*) ;
 struct commit* FUNC_2 (struct rev_info*) ;
 scalar_t__ FUNC_3 (struct rev_info*) ;
 int FUNC_4 (struct repository*,struct rev_info*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,struct rev_info*,int *) ;

__attribute__((used)) static void FUNC_7(struct repository *VAR_2,
           struct string_list *VAR_3,
           struct argv_array *VAR_4)
{
 struct rev_info VAR_5;
 const struct commit *VAR_6;

 FUNC_4(VAR_2, &VAR_5, ((void*)0));
 FUNC_6(VAR_4->argc, VAR_4->argv, &VAR_5, ((void*)0));
 if (FUNC_3(&VAR_5))
  FUNC_0("revision walk setup failed");

 while ((VAR_6 = FUNC_2(&VAR_5))) {
  struct rev_info VAR_7;
  struct collect_changed_submodules_cb_data VAR_8;
  VAR_8.repo = VAR_2;
  VAR_8.changed = VAR_3;
  VAR_8.commit_oid = &VAR_6->object.oid;

  FUNC_4(VAR_2, &VAR_7, ((void*)0));
  VAR_7.diffopt.output_format |= VAR_0;
  VAR_7.diffopt.format_callback = VAR_1;
  VAR_7.diffopt.format_callback_data = &VAR_8;
  FUNC_1(VAR_6, 1, &VAR_7);
 }

 FUNC_5();
}
