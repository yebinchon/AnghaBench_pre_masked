
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 git_oid VAR_1;
 git_blob *VAR_2;
 git_buf VAR_3 = { 0 };

 FUNC_1("crlf/test.ident", "Some text\n$Id$\nGoes there\n");
 FUNC_2(FUNC_3(&VAR_1, VAR_0, "test.ident"));
 FUNC_2(FUNC_6(&VAR_2, VAR_0, &VAR_1));
 FUNC_0(
  "Some text\n$Id$\nGoes there\n", FUNC_7(VAR_2));
 FUNC_5(VAR_2);

 FUNC_1("crlf/test.ident", "Some text\n$Id: Any old just you want$\nGoes there\n");
 FUNC_2(FUNC_3(&VAR_1, VAR_0, "test.ident"));
 FUNC_2(FUNC_6(&VAR_2, VAR_0, &VAR_1));
 FUNC_0(
  "Some text\n$Id$\nGoes there\n", FUNC_7(VAR_2));

 FUNC_2(FUNC_4(&VAR_3, VAR_2, "filter.bin", ((void*)0)));
 FUNC_0(
  "Some text\n$Id$\nGoes there\n", VAR_3.ptr);

 FUNC_2(FUNC_4(&VAR_3, VAR_2, "filter.identcrlf", ((void*)0)));
 FUNC_0(
  "Some text\r\n$Id: 3164f585d548ac68027d22b104f2d8100b2b6845 $\r\nGoes there\r\n", VAR_3.ptr);

 FUNC_2(FUNC_4(&VAR_3, VAR_2, "filter.identlf", ((void*)0)));
 FUNC_0(
  "Some text\n$Id: 3164f585d548ac68027d22b104f2d8100b2b6845 $\nGoes there\n", VAR_3.ptr);

 FUNC_8(&VAR_3);
 FUNC_5(VAR_2);

}
