
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_11__ {char* start; char* end; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;

void FUNC_12(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_1;
 git_index *VAR_6;
 int VAR_7;
 git_vector VAR_8;

 FUNC_0(FUNC_10(&VAR_8, 100, &VAR_3));
 FUNC_0(FUNC_11(&VAR_8, "a"));
 FUNC_0(FUNC_11(&VAR_8, "B"));
 FUNC_0(FUNC_11(&VAR_8, "c"));
 FUNC_0(FUNC_11(&VAR_8, "D"));
 FUNC_0(FUNC_11(&VAR_8, "e"));
 FUNC_0(FUNC_11(&VAR_8, "k/1"));
 FUNC_0(FUNC_11(&VAR_8, "k/a"));
 FUNC_0(FUNC_11(&VAR_8, "L/1"));

 VAR_2 = FUNC_1("icase");

 FUNC_0(FUNC_8(&VAR_6, VAR_2));
 VAR_7 = FUNC_3(VAR_6);


 FUNC_0(FUNC_5(VAR_6, VAR_7 & ~VAR_0));



 VAR_5.pathlist.strings = (char **)VAR_8.contents;
 VAR_5.pathlist.count = VAR_8.length;

 VAR_5.start = "c";
 VAR_5.end = "k/D";
 FUNC_0(FUNC_6(&VAR_4, VAR_2, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 3, ((void*)0), 3, ((void*)0));
 FUNC_7(VAR_4);

 VAR_5.start = "k";
 VAR_5.end = "k/Z";
 FUNC_0(FUNC_6(&VAR_4, VAR_2, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 1, ((void*)0), 1, ((void*)0));
 FUNC_7(VAR_4);


 FUNC_0(FUNC_5(VAR_6, VAR_7 | VAR_0));

 VAR_5.start = "c";
 VAR_5.end = "k/D";
 FUNC_0(FUNC_6(&VAR_4, VAR_2, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 5, ((void*)0), 5, ((void*)0));
 FUNC_7(VAR_4);

 VAR_5.start = "k";
 VAR_5.end = "k/Z";
 FUNC_0(FUNC_6(&VAR_4, VAR_2, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 2, ((void*)0), 2, ((void*)0));
 FUNC_7(VAR_4);

 FUNC_0(FUNC_5(VAR_6, VAR_7));
 FUNC_4(VAR_6);
 FUNC_9(&VAR_8);
}
