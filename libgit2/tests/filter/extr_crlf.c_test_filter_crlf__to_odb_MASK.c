
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_filter_list ;
typedef int git_filter ;
struct TYPE_5__ {char* ptr; int size; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int ,int ) ;
 int FUNC_7 (int *,int *,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 git_filter_list *VAR_3;
 git_filter *VAR_4;
 git_buf VAR_5 = { 0 }, VAR_6 = { 0 };

 FUNC_2(FUNC_6(
  &VAR_3, VAR_2, VAR_1, 0));

 VAR_4 = FUNC_8(VAR_0);
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_2(FUNC_7(VAR_3, VAR_4, ((void*)0)));

 VAR_5.ptr = "Some text\r\nRight here\r\n";
 VAR_5.size = FUNC_9(VAR_5.ptr);

 FUNC_2(FUNC_4(&VAR_6, VAR_3, &VAR_5));

 FUNC_1("Some text\nRight here\n", VAR_6.ptr);

 FUNC_5(VAR_3);
 FUNC_3(&VAR_6);
}
