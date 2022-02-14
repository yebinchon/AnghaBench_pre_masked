
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 char* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,char const*,int) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int ) ;

void FUNC_14(void)
{
 git_repository *VAR_2;
 const char *VAR_3 = FUNC_4();
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if (!FUNC_2("GITTEST_INVASIVE_FS_STRUCTURE"))
  FUNC_3();

 VAR_5 = FUNC_11(VAR_3);
 FUNC_0(VAR_5 >= 0);

 FUNC_7(&VAR_4, VAR_3, VAR_5+1);
 FUNC_6(&VAR_4, VAR_4.ptr, "libgit2_test_dir");

 FUNC_0(!FUNC_9(VAR_4.ptr));

 FUNC_1(FUNC_13(&VAR_2, VAR_4.ptr, 0));
 FUNC_0(FUNC_10(VAR_4.ptr));
 FUNC_1(FUNC_8(VAR_4.ptr, ((void*)0), VAR_1));

 FUNC_5(&VAR_4);
 FUNC_12(VAR_2);
}
