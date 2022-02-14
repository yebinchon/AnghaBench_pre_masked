
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emitted_diff_symbol {int len; int indent_off; int indent_width; scalar_t__ s; scalar_t__ line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(const struct emitted_diff_symbol *VAR_2,
       const struct emitted_diff_symbol *VAR_3,
       int *VAR_4)
{
 int VAR_5 = VAR_2->len,
     VAR_6 = VAR_3->len,
     VAR_7 = VAR_2->indent_off,
     VAR_8 = VAR_2->indent_width,
     VAR_9 = VAR_3->indent_off,
     VAR_10 = VAR_3->indent_width;
 int VAR_11;

 if (VAR_8 == VAR_1 && VAR_10 == VAR_1) {
  *VAR_4 = VAR_1;
  return 1;
 }

 if (VAR_2->s == VAR_0)
  VAR_11 = VAR_8 - VAR_10;
 else
  VAR_11 = VAR_10 - VAR_8;

 if (VAR_5 - VAR_7 != VAR_6 - VAR_9 ||
     FUNC_0(VAR_2->line + VAR_7, VAR_3->line + VAR_9, VAR_5 - VAR_7))
  return 0;

 *VAR_4 = VAR_11;

 return 1;
}
