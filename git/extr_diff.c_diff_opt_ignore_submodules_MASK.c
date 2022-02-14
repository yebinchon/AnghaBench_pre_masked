
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct diff_options* value; } ;
struct TYPE_2__ {int override_submodule_config; } ;
struct diff_options {TYPE_1__ flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct diff_options*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0,
          const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);
 if (!VAR_1)
  VAR_1 = "all";
 VAR_3->flags.override_submodule_config = 1;
 FUNC_1(VAR_3, VAR_1);
 return 0;
}
