
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct diff_options* value; } ;
struct TYPE_2__ {int follow_renames; scalar_t__ default_follow_renames; } ;
struct diff_options {TYPE_1__ flags; } ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_0,
      const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_0(VAR_1);
 if (VAR_2) {
  VAR_3->flags.follow_renames = 0;
  VAR_3->flags.default_follow_renames = 0;
 } else {
  VAR_3->flags.follow_renames = 1;
 }
 return 0;
}
