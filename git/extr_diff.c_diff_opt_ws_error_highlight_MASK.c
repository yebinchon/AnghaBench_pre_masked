
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct diff_options* value; } ;
struct diff_options {int ws_error_highlight; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_0,
           const char *VAR_1, int VAR_2)
{
 struct diff_options *VAR_3 = VAR_0->value;
 int VAR_4 = FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return FUNC_2(FUNC_1("unknown value after ws-error-highlight=%.*s"),
        -1 - VAR_4, VAR_1);
 VAR_3->ws_error_highlight = VAR_4;
 return 0;
}
