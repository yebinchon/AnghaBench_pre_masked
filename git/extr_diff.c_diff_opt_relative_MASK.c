
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct diff_options* value; } ;
struct TYPE_2__ {int relative_name; } ;
struct diff_options {char const* prefix; TYPE_1__ flags; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_0,
        const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);
 VAR_3->flags.relative_name = 1;
 if (VAR_1)
  VAR_3->prefix = VAR_1;
 return 0;
}
