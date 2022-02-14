
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2(git_buf *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, ((void*)0))) == 0) {
  if (VAR_1)
   VAR_2 = FUNC_0(VAR_0, VAR_0->ptr, VAR_1);
 }

 return VAR_2;
}
