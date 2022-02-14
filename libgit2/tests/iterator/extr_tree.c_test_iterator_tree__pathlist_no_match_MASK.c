
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
typedef int git_index_entry ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int const**,int *) ;
 int FUNC_4 (int **,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_0;
 git_vector VAR_6;
 git_tree *VAR_7;
 const git_index_entry *VAR_8;

 VAR_2 = FUNC_2("testrepo2");
 FUNC_6(&VAR_7, VAR_2);

 FUNC_1(FUNC_9(&VAR_6, 100, &VAR_3));
 FUNC_1(FUNC_10(&VAR_6, "nonexistent/"));

 VAR_5.pathlist.strings = (char **)VAR_6.contents;
 VAR_5.pathlist.count = VAR_6.length;

 FUNC_1(FUNC_4(&VAR_4, VAR_7, &VAR_5));
 FUNC_0(VAR_1, FUNC_3(&VAR_8, VAR_4));
 FUNC_5(VAR_4);

 FUNC_7(VAR_7);
 FUNC_8(&VAR_6);
}
