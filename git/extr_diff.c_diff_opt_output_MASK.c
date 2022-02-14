
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int prefix; } ;
struct option {struct diff_options* value; } ;
struct diff_options {int close_file; scalar_t__ use_color; int file; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static enum parse_opt_result FUNC_4(struct parse_opt_ctx_t *VAR_2,
          const struct option *VAR_3,
          const char *VAR_4, int VAR_5)
{
 struct diff_options *VAR_6 = VAR_3->value;
 char *VAR_7;

 FUNC_0(VAR_5);
 VAR_7 = FUNC_2(VAR_2->prefix, VAR_4);
 VAR_6->file = FUNC_3(VAR_7, "w");
 VAR_6->close_file = 1;
 if (VAR_6->use_color != VAR_0)
  VAR_6->use_color = VAR_1;
 FUNC_1(VAR_7);
 return 0;
}
