
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line_len; int line; } ;
typedef TYPE_1__ git_parse_ctx ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

int FUNC_2(git_oid *VAR_1, git_parse_ctx *VAR_2)
{
 if (VAR_2->line_len < VAR_0)
  return -1;
 if ((FUNC_0(VAR_1, VAR_2->line, VAR_0)) < 0)
  return -1;
 FUNC_1(VAR_2, VAR_0);
 return 0;
}
