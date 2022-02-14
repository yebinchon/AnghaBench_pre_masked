
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_5__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int **,int ,char*) ;

void FUNC_10(void)
{
 git_blob *VAR_3;
 git_buf VAR_4 = VAR_0;

 FUNC_3(FUNC_9(
  (git_object **)&VAR_3, VAR_2, "e69de29"));

 FUNC_0(0, FUNC_7(VAR_3));
 FUNC_1("", FUNC_6(VAR_3));

 FUNC_3(FUNC_4(&VAR_4, VAR_3, "file.bin", &VAR_1));
 FUNC_2(0, VAR_4.size);
 FUNC_1("", VAR_4.ptr);
 FUNC_8(&VAR_4);

 FUNC_3(FUNC_4(&VAR_4, VAR_3, "file.crlf", &VAR_1));
 FUNC_2(0, VAR_4.size);
 FUNC_1("", VAR_4.ptr);
 FUNC_8(&VAR_4);

 FUNC_3(FUNC_4(&VAR_4, VAR_3, "file.lf", &VAR_1));
 FUNC_2(0, VAR_4.size);
 FUNC_1("", VAR_4.ptr);
 FUNC_8(&VAR_4);

 FUNC_5(VAR_3);
}
