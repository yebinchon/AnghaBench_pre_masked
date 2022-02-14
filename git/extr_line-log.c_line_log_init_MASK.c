
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_2__ {int pathspec; int repo; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct line_log_data {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct rev_info*,struct commit*,struct line_log_data*) ;
 struct commit* FUNC_1 (struct rev_info*) ;
 struct line_log_data* FUNC_2 (int ,struct commit*,char const*,struct string_list*) ;
 int FUNC_3 (int *,struct line_log_data*) ;

void FUNC_4(struct rev_info *VAR_0, const char *VAR_1, struct string_list *VAR_2)
{
 struct commit *VAR_3 = ((void*)0);
 struct line_log_data *VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_2(VAR_0->diffopt.repo, VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_3, VAR_4);

 FUNC_3(&VAR_0->diffopt.pathspec, VAR_4);
}
