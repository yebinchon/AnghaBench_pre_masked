
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct setup_revision_opt {char* def; int revarg_opt; } ;
struct TYPE_2__ {scalar_t__ output_format; } ;
struct rev_info {int diff; TYPE_1__ diffopt; scalar_t__ simplify_history; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const**,char const*,struct rev_info*,struct setup_revision_opt*) ;
 int FUNC_1 (struct rev_info*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (struct setup_revision_opt*,int ,int) ;
 int FUNC_5 (int ,struct rev_info*,char const*) ;
 int VAR_3 ;

int FUNC_6(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 struct rev_info VAR_7;
 struct setup_revision_opt VAR_8;

 FUNC_3();
 FUNC_2(VAR_2, ((void*)0));

 FUNC_5(VAR_3, &VAR_7, VAR_6);
 VAR_7.diff = 1;
 VAR_7.simplify_history = 0;
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.def = "HEAD";
 VAR_8.revarg_opt = VAR_1;
 FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8);
 if (!VAR_7.diffopt.output_format)
  VAR_7.diffopt.output_format = VAR_0;
 return FUNC_1(&VAR_7);
}
