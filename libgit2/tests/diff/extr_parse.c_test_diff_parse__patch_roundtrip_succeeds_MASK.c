
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_diff ;
struct TYPE_6__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const*,int ,char*,char const*,int ,char*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (char const*) ;

void FUNC_10(void)
{
 const char VAR_2[] = "a\n", VAR_3[] = "b\n";
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;
 git_patch *VAR_6;
 git_diff *VAR_7;

 FUNC_1(FUNC_7(&VAR_6, VAR_2, FUNC_9(VAR_2), "obj1", VAR_3, FUNC_9(VAR_3), "obj2", ((void*)0)));
 FUNC_1(FUNC_8(&VAR_4, VAR_6));

 FUNC_1(FUNC_4(&VAR_7, VAR_4.ptr, VAR_4.size));
 FUNC_1(FUNC_5(&VAR_5, VAR_7, VAR_1));

 FUNC_0(VAR_4.ptr, VAR_5.ptr);

 FUNC_6(VAR_6);
 FUNC_3(VAR_7);
 FUNC_2(&VAR_4);
 FUNC_2(&VAR_5);
}
