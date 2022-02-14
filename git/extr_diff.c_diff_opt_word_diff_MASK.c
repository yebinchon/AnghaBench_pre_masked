
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {scalar_t__ word_diff; int use_color; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_4,
         const char *VAR_5, int VAR_6)
{
 struct diff_options *VAR_7 = VAR_4->value;

 FUNC_0(VAR_6);
 if (VAR_5) {
  if (!FUNC_3(VAR_5, "plain"))
   VAR_7->word_diff = VAR_2;
  else if (!FUNC_3(VAR_5, "color")) {
   VAR_7->use_color = 1;
   VAR_7->word_diff = VAR_0;
  }
  else if (!FUNC_3(VAR_5, "porcelain"))
   VAR_7->word_diff = VAR_3;
  else if (!FUNC_3(VAR_5, "none"))
   VAR_7->word_diff = VAR_1;
  else
   return FUNC_2(FUNC_1("bad --word-diff argument: %s"), VAR_5);
 } else {
  if (VAR_7->word_diff == VAR_1)
   VAR_7->word_diff = VAR_2;
 }
 return 0;
}
