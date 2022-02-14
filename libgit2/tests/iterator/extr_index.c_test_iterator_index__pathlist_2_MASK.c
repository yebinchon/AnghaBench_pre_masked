
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_10__ {char** strings; int count; } ;
struct TYPE_12__ {char* start; char* end; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_1;
 git_index *VAR_7;
 git_vector VAR_8 = VAR_2;
 int VAR_9, VAR_10;

 VAR_3 = FUNC_1("icase");

 FUNC_0(FUNC_7(&VAR_7, VAR_3));

 FUNC_0(FUNC_9(&VAR_8, 100, &VAR_4));
 FUNC_0(FUNC_10(&VAR_8, "0"));
 FUNC_0(FUNC_10(&VAR_8, "c"));
 FUNC_0(FUNC_10(&VAR_8, "D"));
 FUNC_0(FUNC_10(&VAR_8, "e"));
 FUNC_0(FUNC_10(&VAR_8, "k/"));
 FUNC_0(FUNC_10(&VAR_8, "k.a"));
 FUNC_0(FUNC_10(&VAR_8, "k.b"));
 FUNC_0(FUNC_10(&VAR_8, "kZZZZZZZ"));


 VAR_9 = ((FUNC_3(VAR_7) & VAR_0) != 0);

 VAR_6.pathlist.strings = (char **)VAR_8.contents;
 VAR_6.pathlist.count = VAR_8.length;

 VAR_6.start = "b";
 VAR_6.end = "k/D";


 VAR_10 = VAR_9 ? 8 : 5;

 FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_7, &VAR_6));
 FUNC_2(VAR_5, VAR_10, ((void*)0), VAR_10, ((void*)0));
 FUNC_6(VAR_5);

 FUNC_4(VAR_7);
 FUNC_8(&VAR_8);
}
