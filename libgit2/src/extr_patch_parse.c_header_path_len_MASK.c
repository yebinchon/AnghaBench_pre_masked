
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t line_len; char* line; } ;
struct TYPE_4__ {TYPE_3__ parse_ctx; } ;
typedef TYPE_1__ git_patch_parse_ctx ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static size_t FUNC_2(git_patch_parse_ctx *VAR_0)
{
 bool VAR_1 = 0;
 bool VAR_2 = FUNC_1(&VAR_0->parse_ctx, "\"");
 size_t VAR_3;

 for (VAR_3 = VAR_2; VAR_3 < VAR_0->parse_ctx.line_len; VAR_3++) {
  if (!VAR_2 && FUNC_0(VAR_0->parse_ctx.line[VAR_3]))
   break;
  else if (VAR_2 && !VAR_1 && VAR_0->parse_ctx.line[VAR_3] == '"') {
   VAR_3++;
   break;
  }

  VAR_1 = (!VAR_1 && VAR_0->parse_ctx.line[VAR_3] == '\\');
 }

 return VAR_3;
}
