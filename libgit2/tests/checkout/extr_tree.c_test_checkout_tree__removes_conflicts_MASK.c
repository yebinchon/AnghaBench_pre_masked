
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int const*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int **,int ) ;

void FUNC_15(void)
{
 git_oid VAR_3;
 git_commit *VAR_4;
 git_checkout_options VAR_5 = VAR_1;
 git_index *VAR_6;

 FUNC_3(FUNC_12(&VAR_3, "afe4393b2b2a965f06acf2ca9658eaa01e0cd6b6"));
 FUNC_3(FUNC_7(&VAR_4, VAR_2, &VAR_3));

 VAR_5.checkout_strategy = VAR_0;

 FUNC_3(FUNC_5(VAR_2, (const git_object *)VAR_4, &VAR_5));

 FUNC_3(FUNC_14(&VAR_6, VAR_2));
 FUNC_3(FUNC_10(VAR_6, "executable.txt", 0));

 FUNC_4("executable.txt");
 FUNC_2("testrepo/executable.txt", "This is the conflict file.\n");

 FUNC_4("other.txt");
 FUNC_2("testrepo/other.txt", "This is another conflict file.\n");

 FUNC_3(FUNC_11(VAR_6));

 FUNC_3(FUNC_5(VAR_2, (const git_object *)VAR_4, &VAR_5));

 FUNC_1(((void*)0), FUNC_9(VAR_6, "executable.txt", 1));
 FUNC_1(((void*)0), FUNC_9(VAR_6, "executable.txt", 2));
 FUNC_1(((void*)0), FUNC_9(VAR_6, "executable.txt", 3));

 FUNC_1(((void*)0), FUNC_9(VAR_6, "other.txt", 1));
 FUNC_1(((void*)0), FUNC_9(VAR_6, "other.txt", 2));
 FUNC_1(((void*)0), FUNC_9(VAR_6, "other.txt", 3));

 FUNC_0(!FUNC_13("testrepo/other.txt"));

 FUNC_6(VAR_4);
 FUNC_8(VAR_6);
}
