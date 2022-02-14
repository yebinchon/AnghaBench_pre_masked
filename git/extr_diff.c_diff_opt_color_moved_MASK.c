
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {scalar_t__ color_moved; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct diff_options *VAR_6 = VAR_3->value;

 if (VAR_5) {
  VAR_6->color_moved = VAR_1;
 } else if (!VAR_4) {
  if (VAR_2)
   VAR_6->color_moved = VAR_2;
  if (VAR_6->color_moved == VAR_1)
   VAR_6->color_moved = VAR_0;
 } else {
  int VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 < 0)
   return FUNC_1(FUNC_0("bad --color-moved argument: %s"), VAR_4);
  VAR_6->color_moved = VAR_7;
 }
 return 0;
}
