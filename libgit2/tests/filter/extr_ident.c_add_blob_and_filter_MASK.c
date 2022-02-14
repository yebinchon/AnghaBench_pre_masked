
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_filter_list ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void FUNC_8(
 const char *VAR_1,
 git_filter_list *VAR_2,
 const char *VAR_3)
{
 git_oid VAR_4;
 git_blob *VAR_5;
 git_buf VAR_6 = { 0 };

 FUNC_1("crlf/identtest", VAR_1);
 FUNC_2(FUNC_3(&VAR_4, VAR_0, "identtest"));
 FUNC_2(FUNC_5(&VAR_5, VAR_0, &VAR_4));

 FUNC_2(FUNC_7(&VAR_6, VAR_2, VAR_5));

 FUNC_0(VAR_3, VAR_6.ptr);

 FUNC_4(VAR_5);
 FUNC_6(&VAR_6);
}
