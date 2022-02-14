
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line_num; int remain_len; int line; scalar_t__ line_len; } ;
typedef TYPE_1__ git_parse_ctx ;


 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1(git_parse_ctx *VAR_0)
{
 VAR_0->line += VAR_0->line_len;
 VAR_0->remain_len -= VAR_0->line_len;
 VAR_0->line_len = FUNC_0(VAR_0->line, VAR_0->remain_len);
 VAR_0->line_num++;
}
