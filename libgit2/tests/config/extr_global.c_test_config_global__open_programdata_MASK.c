
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *,char*) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (int ,int ,TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int **,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,char*,int) ;
 int FUNC_17 (int ,int) ;

void FUNC_18(void)
{
 git_config *VAR_3;
 git_repository *VAR_4;
 git_buf VAR_5 = VAR_0;
 git_buf VAR_6 = VAR_0;

 if (FUNC_3("GITTEST_INVASIVE_FS_STRUCTURE"))
  FUNC_4();

 FUNC_2(FUNC_12(VAR_2,
  VAR_1, &VAR_5));

 if (!FUNC_13(VAR_5.ptr))
  FUNC_2(FUNC_17(VAR_5.ptr, 0777));

 FUNC_2(FUNC_6(&VAR_5, "/config"));

 FUNC_2(FUNC_10(&VAR_3, VAR_5.ptr));
 FUNC_2(FUNC_11(VAR_3, "programdata.var", "even higher level"));

 FUNC_5(&VAR_5);
 FUNC_7(VAR_3);

 FUNC_9(&VAR_3);
 FUNC_2(FUNC_8(&VAR_6, VAR_3, "programdata.var"));
 FUNC_0("even higher level", VAR_6.ptr);

 FUNC_7(VAR_3);
 FUNC_5(&VAR_6);

 FUNC_2(FUNC_16(&VAR_4, "./foo.git", 1));
 FUNC_2(FUNC_14(&VAR_3, VAR_4));
 FUNC_2(FUNC_8(&VAR_6, VAR_3, "programdata.var"));
 FUNC_0("even higher level", VAR_6.ptr);

 FUNC_7(VAR_3);
 FUNC_5(&VAR_6);
 FUNC_15(VAR_4);
 FUNC_1("./foo.git");
}
