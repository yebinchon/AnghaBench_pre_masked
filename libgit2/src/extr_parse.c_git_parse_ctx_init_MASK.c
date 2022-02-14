
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* content; size_t content_len; char* remain; size_t remain_len; char* line; int line_num; int line_len; } ;
typedef TYPE_1__ git_parse_ctx ;


 int FUNC_0 (char*,size_t) ;

int FUNC_1(git_parse_ctx *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (VAR_1 && VAR_2) {
  VAR_0->content = VAR_1;
  VAR_0->content_len = VAR_2;
 } else {
  VAR_0->content = "";
  VAR_0->content_len = 0;
 }

 VAR_0->remain = VAR_0->content;
 VAR_0->remain_len = VAR_0->content_len;
 VAR_0->line = VAR_0->remain;
 VAR_0->line_len = FUNC_0(VAR_0->line, VAR_0->remain_len);
 VAR_0->line_num = 1;

 return 0;
}
