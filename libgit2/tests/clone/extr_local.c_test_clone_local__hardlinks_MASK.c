
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int st_nlink; } ;
typedef int git_repository ;
struct TYPE_9__ {int bare; void* local; } ;
typedef TYPE_1__ git_clone_options ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char,int,int ,char*,char*,char*) ;
 int FUNC_7 (int **,char*,char*,TYPE_1__*) ;
 int FUNC_8 (char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct stat*) ;

void FUNC_12(void)
{
 git_repository *VAR_5;
 git_clone_options VAR_6 = VAR_3;
 git_buf VAR_7 = VAR_0;
 struct stat VAR_8;






 VAR_6.bare = 1;
 VAR_6.local = VAR_2;
 FUNC_2(FUNC_7(&VAR_5, FUNC_1("testrepo.git"), "./clone.git", &VAR_6));
 FUNC_9(VAR_5);



 VAR_6.local = VAR_1;
 FUNC_2(FUNC_7(&VAR_5, FUNC_3("clone.git"), "./clone2.git", &VAR_6));


 FUNC_4(&VAR_7);
 FUNC_2(FUNC_6(&VAR_7, '/', 4, FUNC_10(VAR_5), "objects", "08", "b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_2(FUNC_11(VAR_7.ptr, &VAR_8));
 FUNC_0(2, VAR_8.st_nlink);


 FUNC_9(VAR_5);
 FUNC_4(&VAR_7);

 VAR_6.local = VAR_2;
 FUNC_2(FUNC_7(&VAR_5, FUNC_3("clone.git"), "./clone3.git", &VAR_6));

 FUNC_4(&VAR_7);
 FUNC_2(FUNC_6(&VAR_7, '/', 4, FUNC_10(VAR_5), "objects", "08", "b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_2(FUNC_11(VAR_7.ptr, &VAR_8));
 FUNC_0(1, VAR_8.st_nlink);

 FUNC_9(VAR_5);


 FUNC_2(FUNC_7(&VAR_5, "./clone.git", "./clone4.git", ((void*)0)));


 FUNC_4(&VAR_7);
 FUNC_2(FUNC_6(&VAR_7, '/', 4, FUNC_10(VAR_5), "objects", "08", "b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_2(FUNC_11(VAR_7.ptr, &VAR_8));
 FUNC_0(3, VAR_8.st_nlink);


 FUNC_5(&VAR_7);
 FUNC_9(VAR_5);

 FUNC_2(FUNC_8("./clone.git", ((void*)0), VAR_4));
 FUNC_2(FUNC_8("./clone2.git", ((void*)0), VAR_4));
 FUNC_2(FUNC_8("./clone3.git", ((void*)0), VAR_4));
 FUNC_2(FUNC_8("./clone4.git", ((void*)0), VAR_4));
}
