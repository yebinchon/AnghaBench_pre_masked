
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int index_file_path; } ;
typedef TYPE_1__ git_index ;
typedef int git_filebuf ;
struct TYPE_8__ {int klass; } ;
typedef TYPE_2__ git_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__**,int *) ;
 int FUNC_10 (int **,char*,int ) ;

void FUNC_11(void)
{
 git_repository *VAR_4;
 git_index *VAR_5;
 git_filebuf VAR_6 = VAR_2;
 const git_error *VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3, ((void*)0));

 FUNC_1(FUNC_10(&VAR_4, "./myrepo", 0));
 FUNC_1(FUNC_9(&VAR_5, VAR_4));


 FUNC_1(FUNC_5(&VAR_6, VAR_5->index_file_path, 0, 0666));
 VAR_8 = FUNC_7(VAR_5);
 FUNC_0(VAR_0, VAR_8);

 VAR_7 = FUNC_3();
 FUNC_0(VAR_7->klass, VAR_1);

 FUNC_4(&VAR_6);
 FUNC_6(VAR_5);
 FUNC_8(VAR_4);
}
