
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int remove_empty_trees; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int has_changes; } ;
struct diff_options {TYPE_1__ flags; struct rev_info* change_fn_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct diff_options *VAR_3,
      int VAR_4, unsigned VAR_5,
      const struct object_id *VAR_6,
      int VAR_7,
      const char *VAR_8, unsigned VAR_9)
{
 int VAR_10 = VAR_4 == '+' ? VAR_0 : VAR_1;
 struct rev_info *VAR_11 = VAR_3->change_fn_data;

 VAR_2 |= VAR_10;
 if (!VAR_11->remove_empty_trees || VAR_2 != VAR_0)
  VAR_3->flags.has_changes = 1;
}
