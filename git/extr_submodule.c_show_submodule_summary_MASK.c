
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct diff_options {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*,int ) ;
 int FUNC_1 (struct diff_options*,char*) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct commit_list*) ;
 struct repository* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct rev_info*,char const*,struct commit*,struct commit*,struct commit_list*) ;
 int FUNC_6 (struct repository*,struct rev_info*,struct diff_options*) ;
 int FUNC_7 (struct repository*) ;
 int FUNC_8 (struct diff_options*,char const*,struct object_id*,struct object_id*,unsigned int,struct repository*,struct commit**,struct commit**,struct commit_list**) ;

void FUNC_9(struct diff_options *VAR_0, const char *VAR_1,
  struct object_id *VAR_2, struct object_id *VAR_3,
  unsigned VAR_4)
{
 struct rev_info VAR_5;
 struct commit *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct commit_list *VAR_8 = ((void*)0);
 struct repository *VAR_9;

 VAR_9 = FUNC_4(VAR_1);
 FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_9, &VAR_6, &VAR_7, &VAR_8);






 if (!VAR_6 || !VAR_7 || !VAR_9)
  goto out;


 if (FUNC_5(&VAR_5, VAR_1, VAR_6, VAR_7, VAR_8)) {
  FUNC_1(VAR_0, "(revision walker failed)\n");
  goto out;
 }

 FUNC_6(VAR_9, &VAR_5, VAR_0);

out:
 if (VAR_8)
  FUNC_3(VAR_8);
 FUNC_0(VAR_6, ~0);
 FUNC_0(VAR_7, ~0);
 if (VAR_9) {
  FUNC_7(VAR_9);
  FUNC_2(VAR_9);
 }
}
