
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char**,unsigned int*,char*,int,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,int,char*,char*,int,char*,int *) ;

void FUNC_7(void)
{
 git_buf VAR_2 = VAR_0, VAR_3 = VAR_0;
 git_patch *VAR_4;
 unsigned int VAR_5;
 char *VAR_6;

 FUNC_1(FUNC_6(&VAR_4,
        "foo\nbar", 7, "file.txt",
        "foo\nfoo", 7, "file.txt", ((void*)0)));
 FUNC_0(VAR_1,
    FUNC_3(&VAR_3, &VAR_6, &VAR_5,
       "foo\nbar\n", 5, VAR_4, ((void*)0)));


 FUNC_1(FUNC_3(&VAR_3, &VAR_6, &VAR_5,
         "foo\nbar\n", 7, VAR_4, ((void*)0)));

 FUNC_4(&VAR_2);
 FUNC_4(&VAR_3);
 FUNC_5(VAR_4);
 FUNC_2(VAR_6);
}
