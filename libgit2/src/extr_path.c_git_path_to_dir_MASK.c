
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ asize; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char) ;

int FUNC_3(git_buf *VAR_0)
{
 if (VAR_0->asize > 0 &&
  FUNC_0(VAR_0) > 0 &&
  VAR_0->ptr[FUNC_0(VAR_0) - 1] != '/')
  FUNC_2(VAR_0, '/');

 return FUNC_1(VAR_0) ? -1 : 0;
}
