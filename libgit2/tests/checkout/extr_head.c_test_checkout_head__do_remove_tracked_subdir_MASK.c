
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (char*,int) ;

void FUNC_11(void)
{
 git_checkout_options VAR_3 = VAR_1;
 git_index *VAR_4;

 FUNC_2(FUNC_10("testrepo/subdir", 0755));
 FUNC_2(FUNC_10("testrepo/subdir/tracked", 0755));
 FUNC_1("testrepo/subdir/tracked-file", "tracked\n");
 FUNC_1("testrepo/subdir/untracked-file", "untracked\n");
 FUNC_1("testrepo/subdir/tracked/tracked1", "tracked\n");
 FUNC_1("testrepo/subdir/tracked/tracked2", "tracked\n");

 FUNC_2(FUNC_9(&VAR_4, VAR_2));
 FUNC_2(FUNC_4(VAR_4, "subdir/tracked-file"));
 FUNC_2(FUNC_4(VAR_4, "subdir/tracked/tracked1"));
 FUNC_2(FUNC_4(VAR_4, "subdir/tracked/tracked2"));
 FUNC_2(FUNC_6(VAR_4));

 FUNC_5(VAR_4);

 VAR_3.checkout_strategy = VAR_0;
 FUNC_2(FUNC_3(VAR_2, &VAR_3));

 FUNC_0(!FUNC_7("testrepo/subdir/tracked"));
 FUNC_0(!FUNC_8("testrepo/subdir/tracked-file"));
 FUNC_0(FUNC_8("testrepo/subdir/untracked-file"));
}
