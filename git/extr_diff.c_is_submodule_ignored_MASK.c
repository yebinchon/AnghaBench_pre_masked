
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_flags {scalar_t__ ignore_submodules; int override_submodule_config; } ;
struct diff_options {struct diff_flags flags; } ;


 int FUNC_0 (struct diff_options*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, struct diff_options *VAR_1)
{
 int VAR_2 = 0;
 struct diff_flags VAR_3 = VAR_1->flags;
 if (!VAR_1->flags.override_submodule_config)
  FUNC_0(VAR_1, VAR_0);
 if (VAR_1->flags.ignore_submodules)
  VAR_2 = 1;
 VAR_1->flags = VAR_3;
 return VAR_2;
}
