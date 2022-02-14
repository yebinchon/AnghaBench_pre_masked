
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
struct TYPE_12__ {int flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_2;
 git_index *VAR_6;
 git_vector VAR_7;

 const char *VAR_8[] = { "k/", "k/1", "k/B", "k/D", "k/a", "k/c" };
 size_t VAR_9 = 6;

 FUNC_0(FUNC_9(&VAR_7, 5, ((void*)0)));

 VAR_3 = FUNC_1("icase");

 FUNC_0(FUNC_6(&VAR_6, VAR_3));

 FUNC_7(&VAR_7);
 FUNC_0(FUNC_10(&VAR_7, "k"));

 VAR_5.pathlist.strings = (char **)VAR_7.contents;
 VAR_5.pathlist.count = VAR_7.length;
 VAR_5.flags = VAR_0 | VAR_1;

 FUNC_0(FUNC_4(&VAR_4, VAR_3, VAR_6, &VAR_5));
 FUNC_2(VAR_4, VAR_9, VAR_8, VAR_9, VAR_8);
 FUNC_5(VAR_4);

 FUNC_3(VAR_6);
 FUNC_8(&VAR_7);
}
