
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
typedef int git_tree ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_11__ {TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;

void FUNC_12(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_0;
 git_vector VAR_5;
 git_tree *VAR_6;
 git_index *VAR_7;

 VAR_1 = FUNC_1("testrepo2");
 FUNC_6(&VAR_6, VAR_1);

 FUNC_0(FUNC_10(&VAR_5, 100, &VAR_2));
 FUNC_0(FUNC_11(&VAR_5, "subdir"));

 VAR_4.pathlist.strings = (char **)VAR_5.contents;
 VAR_4.pathlist.count = VAR_5.length;

 FUNC_0(FUNC_7(&VAR_7, VAR_1));
 FUNC_0(FUNC_4(&VAR_3, VAR_1, VAR_7, &VAR_4));
 FUNC_2(VAR_3, 4, ((void*)0), 4, ((void*)0));
 FUNC_5(VAR_3);

 FUNC_3(VAR_7);
 FUNC_8(VAR_6);
 FUNC_9(&VAR_5);
}
