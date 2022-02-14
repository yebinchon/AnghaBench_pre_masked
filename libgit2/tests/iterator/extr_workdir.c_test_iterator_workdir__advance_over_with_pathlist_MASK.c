
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
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (char*,int) ;

void FUNC_12(void)
{
 git_vector VAR_8 = VAR_6;
 git_iterator *VAR_9;
 git_iterator_options VAR_10 = VAR_2;

 FUNC_10(&VAR_8, "dirA/subdir1/subdir2/file");
 FUNC_10(&VAR_8, "dirB/subdir1/subdir2");
 FUNC_10(&VAR_8, "dirC/subdir1/nonexistent");
 FUNC_10(&VAR_8, "dirD/subdir1/nonexistent");
 FUNC_10(&VAR_8, "dirD/subdir1/subdir2");
 FUNC_10(&VAR_8, "dirD/nonexistent");

 VAR_10.pathlist.strings = (char **)VAR_8.contents;
 VAR_10.pathlist.count = VAR_8.length;
 VAR_10.flags |= VAR_1 |
  VAR_0;

 VAR_7 = FUNC_3("icase");


 FUNC_4(FUNC_11("icase/dirA", 0777));
 FUNC_4(FUNC_11("icase/dirA/subdir1", 0777));
 FUNC_4(FUNC_11("icase/dirA/subdir1/subdir2", 0777));
 FUNC_2("icase/dirA/subdir1/subdir2/file", "foo!");


 FUNC_4(FUNC_11("icase/dirB", 0777));
 FUNC_4(FUNC_11("icase/dirB/subdir1", 0777));
 FUNC_4(FUNC_11("icase/dirB/subdir1/subdir2", 0777));
 FUNC_2("icase/dirB/subdir1/subdir2/file", "foo!");






 FUNC_4(FUNC_11("icase/dirC", 0777));
 FUNC_4(FUNC_11("icase/dirC/subdir1", 0777));
 FUNC_4(FUNC_11("icase/dirC/subdir1/subdir2", 0777));
 FUNC_2("icase/dirC/subdir1/subdir2/file", "foo!");


 FUNC_4(FUNC_11("icase/dirD", 0777));
 FUNC_4(FUNC_11("icase/dirD/subdir1", 0777));
 FUNC_4(FUNC_11("icase/dirD/subdir1/subdir2", 0777));
 FUNC_2("icase/dirD/subdir1/subdir2/file", "foo!");

 FUNC_1(FUNC_7(&VAR_9, VAR_7, ((void*)0), ((void*)0), &VAR_10));

 FUNC_5(VAR_9, "dirA/", VAR_4);
 FUNC_5(VAR_9, "dirB/", VAR_4);
 FUNC_5(VAR_9, "dirC/", VAR_3);
 FUNC_5(VAR_9, "dirD/", VAR_4);

 FUNC_0(VAR_5, FUNC_6(((void*)0), VAR_9));
 FUNC_8(VAR_9);
 FUNC_9(&VAR_8);
}
