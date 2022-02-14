
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
struct TYPE_11__ {int flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;

void FUNC_8(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_1;
 git_vector VAR_6;

 const char *VAR_7[] = { "subdir/README", "subdir/new.txt",
                            "subdir/subdir2/README", "subdir/subdir2/new.txt" };
 size_t VAR_8 = 4;

 FUNC_0(FUNC_6(&VAR_6, 100, &VAR_3));
 FUNC_0(FUNC_7(&VAR_6, "subdir/"));

 VAR_2 = FUNC_1("testrepo2");

 VAR_5.pathlist.strings = (char **)VAR_6.contents;
 VAR_5.pathlist.count = VAR_6.length;
 VAR_5.flags |= VAR_0;

 FUNC_0(FUNC_3(&VAR_4, VAR_2, ((void*)0), ((void*)0), &VAR_5));
 FUNC_2(VAR_4, VAR_8, VAR_7, VAR_8, VAR_7);
 FUNC_4(VAR_4);

 FUNC_5(&VAR_6);
}
