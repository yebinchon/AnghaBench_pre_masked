
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
struct TYPE_11__ {char* start; char* end; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int **,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_0;
 git_vector VAR_5;
 git_tree *VAR_6;
 bool VAR_7;
 int VAR_8;

 FUNC_0(FUNC_9(&VAR_5, 100, &VAR_2));
 FUNC_0(FUNC_10(&VAR_5, "a"));
 FUNC_0(FUNC_10(&VAR_5, "B"));
 FUNC_0(FUNC_10(&VAR_5, "c"));
 FUNC_0(FUNC_10(&VAR_5, "D"));
 FUNC_0(FUNC_10(&VAR_5, "e"));
 FUNC_0(FUNC_10(&VAR_5, "k.a"));
 FUNC_0(FUNC_10(&VAR_5, "k.b"));
 FUNC_0(FUNC_10(&VAR_5, "k/1"));
 FUNC_0(FUNC_10(&VAR_5, "k/a"));
 FUNC_0(FUNC_10(&VAR_5, "kZZZZZZZ"));
 FUNC_0(FUNC_10(&VAR_5, "L/1"));

 VAR_1 = FUNC_1("icase");
 FUNC_6(&VAR_6, VAR_1);




 VAR_4.pathlist.strings = (char **)VAR_5.contents;
 VAR_4.pathlist.count = VAR_5.length;

 FUNC_0(FUNC_3(&VAR_3, VAR_6, &VAR_4));
 FUNC_2(VAR_3, 8, ((void*)0), 8, ((void*)0));
 FUNC_4(VAR_3);

 VAR_4.start = "c";
 VAR_4.end = ((void*)0);
 FUNC_0(FUNC_3(&VAR_3, VAR_6, &VAR_4));
 VAR_7 = FUNC_5(VAR_3);

 VAR_8 = ((VAR_7) ? 6 : 4);
 FUNC_2(VAR_3, VAR_8, ((void*)0), VAR_8, ((void*)0));
 FUNC_4(VAR_3);

 VAR_4.start = ((void*)0);
 VAR_4.end = "e";
 FUNC_0(FUNC_3(&VAR_3, VAR_6, &VAR_4));
 VAR_7 = FUNC_5(VAR_3);

 VAR_8 = ((VAR_7) ? 5 : 6);
 FUNC_2(VAR_3, VAR_8, ((void*)0), VAR_8, ((void*)0));
 FUNC_4(VAR_3);

 FUNC_8(&VAR_5);
 FUNC_7(VAR_6);
}
