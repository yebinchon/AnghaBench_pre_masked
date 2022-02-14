
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(git_buf *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2,
            VAR_0);
 if (VAR_3 != VAR_1)
  return VAR_3;

 return FUNC_1(VAR_2->ptr);
}
