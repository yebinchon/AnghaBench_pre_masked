
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int short_name; struct grep_opt* value; } ;
struct grep_opt {int pre_context; int post_context; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0, const char *VAR_1,
       int VAR_2)
{
 struct grep_opt *VAR_3 = VAR_0->value;
 int VAR_4;
 const char *VAR_5;

 if (VAR_2) {
  VAR_3->pre_context = VAR_3->post_context = 0;
  return 0;
 }
 VAR_4 = FUNC_2(VAR_1, (char **)&VAR_5, 10);
 if (*VAR_5) {
  return FUNC_1(FUNC_0("switch `%c' expects a numerical value"),
        VAR_0->short_name);
 }
 VAR_3->pre_context = VAR_3->post_context = VAR_4;
 return 0;
}
