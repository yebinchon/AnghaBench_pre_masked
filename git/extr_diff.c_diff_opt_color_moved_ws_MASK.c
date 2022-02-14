
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {unsigned int color_moved_ws_handling; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 unsigned int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1,
       const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;
 unsigned VAR_5;

 if (VAR_3) {
  VAR_4->color_moved_ws_handling = 0;
  return 0;
 }

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 & VAR_0)
  return FUNC_1(FUNC_0("invalid mode '%s' in --color-moved-ws"), VAR_2);
 VAR_4->color_moved_ws_handling = VAR_5;
 return 0;
}
