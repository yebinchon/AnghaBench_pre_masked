
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {scalar_t__ word_diff; char const* word_regex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2,
        const char *VAR_3, int VAR_4)
{
 struct diff_options *VAR_5 = VAR_2->value;

 FUNC_0(VAR_4);
 if (VAR_5->word_diff == VAR_0)
  VAR_5->word_diff = VAR_1;
 VAR_5->word_regex = VAR_3;
 return 0;
}
