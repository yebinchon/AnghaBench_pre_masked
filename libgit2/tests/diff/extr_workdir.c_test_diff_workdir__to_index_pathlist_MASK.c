
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
typedef int git_index ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_11__ {int flags; TYPE_1__ pathspec; } ;
typedef TYPE_3__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (char*,int) ;

void FUNC_13(void)
{
 git_index *VAR_5;
 git_diff *VAR_6;
 git_diff_options VAR_7 = VAR_2;
 git_vector VAR_8 = VAR_3;

 FUNC_11(&VAR_8, "foobar/asdf");
 FUNC_11(&VAR_8, "subdir/asdf");
 FUNC_11(&VAR_8, "ignored/asdf");

 VAR_4 = FUNC_3("status");

 FUNC_1("status/.gitignore", ".gitignore\n" "ignored/\n");

 FUNC_4(FUNC_12("status/foobar", 0777));
 FUNC_1("status/foobar/one", "one\n");

 FUNC_4(FUNC_12("status/ignored", 0777));
 FUNC_1("status/ignored/one", "one\n");
 FUNC_1("status/ignored/two", "two\n");
 FUNC_1("status/ignored/three", "three\n");

 FUNC_2(FUNC_9(&VAR_5, VAR_4));

 VAR_7.flags = VAR_1;
 VAR_7.pathspec.strings = (char **)VAR_8.contents;
 VAR_7.pathspec.count = VAR_8.length;

 FUNC_2(FUNC_6(&VAR_6, VAR_4, VAR_5, &VAR_7));
 FUNC_0(0, FUNC_7(VAR_6));
 FUNC_5(VAR_6);

 VAR_7.flags |= VAR_0;

 FUNC_2(FUNC_6(&VAR_6, VAR_4, VAR_5, &VAR_7));
 FUNC_0(0, FUNC_7(VAR_6));
 FUNC_5(VAR_6);

 FUNC_8(VAR_5);
 FUNC_10(&VAR_8);
}
