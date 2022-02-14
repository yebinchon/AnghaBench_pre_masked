
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {char* a_prefix; char* b_prefix; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0,
         const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1);
 VAR_3->a_prefix = "";
 VAR_3->b_prefix = "";
 return 0;
}
