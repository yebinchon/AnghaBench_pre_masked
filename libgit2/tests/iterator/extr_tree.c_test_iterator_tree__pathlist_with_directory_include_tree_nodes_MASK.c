
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
struct TYPE_11__ {int flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int **,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int *) ;
 int FUNC_9 (TYPE_2__*,char*) ;

void FUNC_10(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_2;
 git_vector VAR_7;
 git_tree *VAR_8;

 const char *VAR_9[] = { "subdir/", "subdir/README", "subdir/new.txt",
  "subdir/subdir2/", "subdir/subdir2/README", "subdir/subdir2/new.txt" };
 size_t VAR_10 = 6;

 VAR_3 = FUNC_1("testrepo2");
 FUNC_5(&VAR_8, VAR_3);

 FUNC_0(FUNC_8(&VAR_7, 100, &VAR_4));
 FUNC_0(FUNC_9(&VAR_7, "subdir"));

 VAR_6.pathlist.strings = (char **)VAR_7.contents;
 VAR_6.pathlist.count = VAR_7.length;
 VAR_6.flags |= VAR_0 | VAR_1;

 FUNC_0(FUNC_3(&VAR_5, VAR_8, &VAR_6));
 FUNC_2(VAR_5, VAR_10, VAR_9, VAR_10, VAR_9);
 FUNC_4(VAR_5);

 FUNC_6(VAR_8);
 FUNC_7(&VAR_7);
}
