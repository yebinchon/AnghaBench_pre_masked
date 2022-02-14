
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_filter_list ;
struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,char*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_5 ;

void FUNC_8(void)
{
 git_filter_list *VAR_6;
 git_buf VAR_7 = VAR_1, VAR_8 = VAR_1;

 FUNC_1(FUNC_6(
  &VAR_6, VAR_3, ((void*)0), "hero-reverse-foo", VAR_2, 0));

 FUNC_1(FUNC_3(&VAR_7, (char *)VAR_4, VAR_0));
 FUNC_1(FUNC_4(&VAR_8, VAR_6, &VAR_7));

 FUNC_0(VAR_0, VAR_8.size);

 FUNC_0(
  0, FUNC_7(VAR_5, VAR_8.ptr, VAR_8.size));

 FUNC_5(VAR_6);
 FUNC_2(&VAR_8);
 FUNC_2(&VAR_7);
}
