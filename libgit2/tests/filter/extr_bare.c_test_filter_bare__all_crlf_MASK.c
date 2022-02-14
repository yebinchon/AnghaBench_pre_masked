
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int **,int ,char*) ;

void FUNC_7(void)
{
 git_blob *VAR_4;
 git_buf VAR_5 = { 0 };

 FUNC_1(FUNC_6(
  (git_object **)&VAR_4, VAR_3, "a9a2e89"));

 FUNC_0(VAR_1, FUNC_4(VAR_4));

 FUNC_1(FUNC_2(&VAR_5, VAR_4, "file.bin", &VAR_2));

 FUNC_0(VAR_1, VAR_5.ptr);

 FUNC_1(FUNC_2(&VAR_5, VAR_4, "file.crlf", &VAR_2));


 FUNC_0(VAR_0, VAR_5.ptr);

 FUNC_1(FUNC_2(&VAR_5, VAR_4, "file.lf", &VAR_2));


 FUNC_0(VAR_0, VAR_5.ptr);

 FUNC_1(FUNC_2(&VAR_5, VAR_4, "file.txt", &VAR_2));


 FUNC_0(VAR_0, VAR_5.ptr);

 FUNC_5(&VAR_5);
 FUNC_3(VAR_4);
}
