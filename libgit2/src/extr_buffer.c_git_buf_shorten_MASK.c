
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

void FUNC_2(git_buf *VAR_0, size_t VAR_1)
{
 if (VAR_0->size > VAR_1)
  FUNC_1(VAR_0, VAR_0->size - VAR_1);
 else
  FUNC_0(VAR_0);
}
