
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_filter_list ;
struct TYPE_6__ {int size; int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,char*,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

void FUNC_9(void)
{
 git_filter_list *VAR_5;
 git_buf VAR_6 = { 0 };
 git_buf VAR_7 = FUNC_0(VAR_4, FUNC_8(VAR_4));

 FUNC_2(FUNC_6(
  &VAR_5, VAR_3, ((void*)0), "herofile", VAR_1, 0));

 FUNC_2(FUNC_4(&VAR_6, VAR_5, &VAR_7));

 FUNC_1(VAR_0, VAR_6.size);

 FUNC_1(
  0, FUNC_7(VAR_2, VAR_6.ptr, VAR_6.size));

 FUNC_5(VAR_5);
 FUNC_3(&VAR_6);
}
