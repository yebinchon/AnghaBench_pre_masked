
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int length; scalar_t__ contents; } ;
typedef TYPE_4__ git_vector ;
typedef int git_tree ;
struct TYPE_15__ {char** strings; int count; } ;
struct TYPE_19__ {TYPE_1__ pathspec; } ;
typedef TYPE_5__ git_diff_options ;
struct TYPE_17__ {int mode; } ;
struct TYPE_16__ {int mode; } ;
struct TYPE_20__ {TYPE_3__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_6__ git_diff_delta ;
typedef int git_diff ;
struct TYPE_21__ {int files; int member_0; } ;
typedef TYPE_7__ diff_expects ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,int ,int ,int ,int ,TYPE_7__*) ;
 int FUNC_9 (int *) ;
 TYPE_6__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,TYPE_5__*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int *,int ) ;
 int FUNC_15 (int*,int ,int ) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,char*) ;
 int FUNC_20 (char*,int) ;
 int * FUNC_21 (int ,char const*) ;

void FUNC_22(void)
{
 git_tree *VAR_10;
 git_diff *VAR_11;
 diff_expects VAR_12 = {0};
 const git_diff_delta *VAR_13;
 const char *VAR_14 = "7fccd7";
 git_diff_options VAR_15 = VAR_1;
 git_vector VAR_16 = VAR_4;
 int VAR_17;

 VAR_9 = FUNC_5("unsymlinked.git");

 FUNC_3(FUNC_15(&VAR_17, VAR_9, VAR_0));

 if (VAR_17)
  FUNC_7();

 FUNC_3(FUNC_19(&VAR_16, "include/Nu/Nu.h"));

 VAR_15.pathspec.strings = (char **)VAR_16.contents;
 VAR_15.pathspec.count = VAR_16.length;

 FUNC_6(FUNC_20("symlink", 0777));
 FUNC_3(FUNC_16(VAR_9, "symlink", 0));

 FUNC_0((VAR_10 = FUNC_21(VAR_9, VAR_14)) != ((void*)0));



 FUNC_3(FUNC_13("symlink/include/Nu/Nu.h", 0755));
 FUNC_2("symlink/include/Nu/Nu.h", "../../objc/Nu.h");

 FUNC_3(FUNC_12(&VAR_11, VAR_9, VAR_10, &VAR_15));
 FUNC_1(0, FUNC_11(VAR_11));
 FUNC_9(VAR_11);





 FUNC_4("symlink/include/Nu/Nu.h", "awesome content\n");

 FUNC_3(FUNC_12(&VAR_11, VAR_9, VAR_10, &VAR_15));

 FUNC_3(FUNC_8(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_12));
 FUNC_1(1, VAR_12.files);

 FUNC_1(1, FUNC_11(VAR_11));
 VAR_13 = FUNC_10(VAR_11, 0);
 FUNC_1(VAR_2, VAR_13->old_file.mode);
 FUNC_1(VAR_2, VAR_13->new_file.mode);

 FUNC_9(VAR_11);

 FUNC_3(FUNC_14("symlink", ((void*)0), VAR_3));

 FUNC_17(VAR_10);
 FUNC_18(&VAR_16);
}
