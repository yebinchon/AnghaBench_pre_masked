
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int content_len; int content; } ;
typedef TYPE_1__ git_parse_ctx ;
typedef int git_buf ;
typedef scalar_t__ git_bom_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(git_parse_ctx *VAR_1)
{
 git_buf VAR_2 = FUNC_0(VAR_1->content, VAR_1->content_len);
 git_bom_t VAR_3;
 int VAR_4 = FUNC_1(&VAR_3, &VAR_2);

 if (VAR_3 == VAR_0)
  FUNC_2(VAR_1, VAR_4);



 return 0;
}
