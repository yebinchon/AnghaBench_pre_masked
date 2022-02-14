
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stash_info {int dummy; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct stash_info*) ;
 int FUNC_6 (char const*,struct stash_info*,int,int) ;
 int FUNC_7 (struct stash_info*,int) ;
 int FUNC_8 (struct stash_info*) ;
 scalar_t__ FUNC_9 (struct stash_info*,int,char const**) ;
 int VAR_0 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct stash_info VAR_7;
 struct option VAR_8[] = {
  FUNC_3(&VAR_6, FUNC_0("be quiet, only report errors")),
  FUNC_1(0, "index", &VAR_5,
    FUNC_0("attempt to recreate the index")),
  FUNC_2()
 };

 VAR_1 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_8,
        VAR_0, 0);

 if (FUNC_9(&VAR_7, VAR_1, VAR_2))
  return -1;

 FUNC_5(&VAR_7);
 if ((VAR_4 = FUNC_6(VAR_3, &VAR_7, VAR_5, VAR_6)))
  FUNC_11(FUNC_4("The stash entry is kept in case "
       "you need it again."));
 else
  VAR_4 = FUNC_7(&VAR_7, VAR_6);

 FUNC_8(&VAR_7);
 return VAR_4;
}
