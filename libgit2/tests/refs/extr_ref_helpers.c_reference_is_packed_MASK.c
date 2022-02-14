
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(git_reference *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 int VAR_3;

 FUNC_0(VAR_1);

 if (FUNC_2(&VAR_2,
  FUNC_6(FUNC_5(VAR_1)),
  FUNC_4(VAR_1)) < 0)
  return -1;

 VAR_3 = !FUNC_3(VAR_2.ptr);

 FUNC_1(&VAR_2);

 return VAR_3;
}
