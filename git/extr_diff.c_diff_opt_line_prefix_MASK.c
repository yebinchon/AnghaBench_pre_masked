
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {char const* line_prefix; int line_prefix_length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0,
    const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);
 VAR_3->line_prefix = VAR_1;
 VAR_3->line_prefix_length = FUNC_2(VAR_3->line_prefix);
 FUNC_1(VAR_3);
 return 0;
}
