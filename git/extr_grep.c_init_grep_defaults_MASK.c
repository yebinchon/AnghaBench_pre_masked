
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct grep_opt {int relative; int pathname; int max_depth; int color; int output; scalar_t__ only_matching; int * colors; int pattern_type_option; struct repository* repo; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 struct grep_opt VAR_12 ;
 int FUNC_1 (struct grep_opt*,int ,int) ;
 int VAR_13 ;

void FUNC_2(struct repository *VAR_14)
{
 struct grep_opt *VAR_15 = &VAR_12;
 static int VAR_16;

 if (VAR_16)
  return;
 VAR_16++;

 FUNC_1(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->repo = VAR_14;
 VAR_15->relative = 1;
 VAR_15->pathname = 1;
 VAR_15->max_depth = -1;
 VAR_15->pattern_type_option = VAR_11;
 FUNC_0(VAR_15->colors[VAR_3], "");
 FUNC_0(VAR_15->colors[VAR_4], "");
 FUNC_0(VAR_15->colors[VAR_5], "");
 FUNC_0(VAR_15->colors[VAR_6], "");
 FUNC_0(VAR_15->colors[VAR_2], "");
 FUNC_0(VAR_15->colors[VAR_7], VAR_0);
 FUNC_0(VAR_15->colors[VAR_8], VAR_0);
 FUNC_0(VAR_15->colors[VAR_9], "");
 FUNC_0(VAR_15->colors[VAR_10], VAR_1);
 VAR_15->only_matching = 0;
 VAR_15->color = -1;
 VAR_15->output = VAR_13;
}
