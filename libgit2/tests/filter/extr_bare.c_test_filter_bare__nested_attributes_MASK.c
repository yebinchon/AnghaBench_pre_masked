
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int **,int ,char*) ;

void FUNC_7(void)
{
 git_blob *VAR_3;
 git_buf VAR_4 = { 0 };

 FUNC_1(FUNC_6(
  (git_object **)&VAR_3, VAR_2, "799770d"));

 FUNC_0(VAR_0, FUNC_4(VAR_3));

 FUNC_1(FUNC_2(&VAR_4, VAR_3, "raw/file.bin", &VAR_1));
 FUNC_0(VAR_0, VAR_4.ptr);

 FUNC_1(FUNC_2(&VAR_4, VAR_3, "raw/file.crlf", &VAR_1));
 FUNC_0(VAR_0, VAR_4.ptr);

 FUNC_1(FUNC_2(&VAR_4, VAR_3, "raw/file.lf", &VAR_1));
 FUNC_0(VAR_0, VAR_4.ptr);

 FUNC_5(&VAR_4);
 FUNC_3(VAR_3);
}
