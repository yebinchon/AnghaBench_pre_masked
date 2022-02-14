
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_oid ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

void FUNC_9(void)
{
 git_oid VAR_3, VAR_4;
 git_blob *VAR_5, *VAR_6;
 git_patch *VAR_7;
 git_buf VAR_8 = VAR_1;


 FUNC_1(FUNC_5(&VAR_3, "45141a79", 8));
 FUNC_1(FUNC_3(&VAR_5, VAR_2, &VAR_3, 4));

 FUNC_1(FUNC_5(&VAR_4, "4d713dc4", 8));
 FUNC_1(FUNC_3(&VAR_6, VAR_2, &VAR_4, 4));

 FUNC_1(FUNC_7(&VAR_7, VAR_5, ((void*)0), VAR_6, ((void*)0), ((void*)0)));

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 FUNC_1(FUNC_8(&VAR_8, VAR_7));
 FUNC_0(VAR_8.ptr, VAR_0);

 FUNC_6(VAR_7);
 FUNC_4(&VAR_8);
}
