
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_3__ {int path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_1 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_1__ const**,int *) ;
 int FUNC_10 (int **,char*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int) ;

void FUNC_14(void)
{
 git_iterator *VAR_2;
 const git_index_entry *VAR_3;

 if (!FUNC_5())
  return;


 if (FUNC_8() == 0)
  FUNC_7();


 VAR_1 = FUNC_4("empty_standard_repo");

 FUNC_6(FUNC_13("empty_standard_repo/r", 0777));
 FUNC_2("empty_standard_repo/r/a", "hello");
 FUNC_6(FUNC_13("empty_standard_repo/r/b", 0777));
 FUNC_2("empty_standard_repo/r/b/problem", "not me");
 FUNC_6(FUNC_12("empty_standard_repo/r/b", 0000));
 FUNC_6(FUNC_13("empty_standard_repo/r/c", 0777));
 FUNC_2("empty_standard_repo/r/c/foo", "aloha");
 FUNC_2("empty_standard_repo/r/d", "final");

 FUNC_3(FUNC_10(
  &VAR_2, "empty_standard_repo/r", ((void*)0)));

 FUNC_3(FUNC_9(&VAR_3, VAR_2));
 FUNC_1("a", VAR_3->path);

 FUNC_3(FUNC_9(&VAR_3, VAR_2));
 FUNC_1("c/foo", VAR_3->path);

 FUNC_3(FUNC_9(&VAR_3, VAR_2));
 FUNC_1("d", VAR_3->path);

 FUNC_6(FUNC_12("empty_standard_repo/r/b", 0777));

 FUNC_0(VAR_0, FUNC_9(&VAR_3, VAR_2));
 FUNC_11(VAR_2);
}
