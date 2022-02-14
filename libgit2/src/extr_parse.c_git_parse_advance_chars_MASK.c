
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t line; size_t remain_len; size_t line_len; } ;
typedef TYPE_1__ git_parse_ctx ;



void FUNC_0(git_parse_ctx *VAR_0, size_t VAR_1)
{
 VAR_0->line += VAR_1;
 VAR_0->remain_len -= VAR_1;
 VAR_0->line_len -= VAR_1;
}
