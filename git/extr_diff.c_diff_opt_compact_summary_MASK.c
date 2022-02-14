
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct diff_options* value; } ;
struct TYPE_2__ {int stat_with_summary; } ;
struct diff_options {int output_format; TYPE_1__ flags; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_1,
        const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;

 FUNC_0(VAR_2);
 if (VAR_3) {
  VAR_4->flags.stat_with_summary = 0;
 } else {
  VAR_4->flags.stat_with_summary = 1;
  VAR_4->output_format |= VAR_0;
 }
 return 0;
}
