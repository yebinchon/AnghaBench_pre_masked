
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct line_log_data {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; TYPE_1__* parents; } ;
struct TYPE_3__ {int next; } ;


 int VAR_0 ;
 struct line_log_data* FUNC_0 (struct rev_info*,struct commit*) ;
 int FUNC_1 (struct rev_info*,struct commit*,struct line_log_data*) ;
 int FUNC_2 (struct rev_info*,struct commit*,struct line_log_data*) ;

__attribute__((used)) static int FUNC_3(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct line_log_data *VAR_3 = FUNC_0(VAR_1, VAR_2);
 int VAR_4 = 0;

 if (VAR_3) {
  if (!VAR_2->parents || !VAR_2->parents->next)
   VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  else
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 if (!VAR_4)
  VAR_2->object.flags |= VAR_0;

 return VAR_4;
}
