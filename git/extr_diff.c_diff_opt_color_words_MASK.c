
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {int use_color; char const* word_regex; int word_diff; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;

 FUNC_0(VAR_3);
 VAR_4->use_color = 1;
 VAR_4->word_diff = VAR_0;
 VAR_4->word_regex = VAR_2;
 return 0;
}
