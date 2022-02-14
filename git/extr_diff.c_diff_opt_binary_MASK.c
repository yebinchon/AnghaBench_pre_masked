
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {struct diff_options* value; } ;
struct TYPE_2__ {int binary; } ;
struct diff_options {TYPE_1__ flags; int output_format; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0,
      const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_3->output_format);
 VAR_3->flags.binary = 1;
 return 0;
}
