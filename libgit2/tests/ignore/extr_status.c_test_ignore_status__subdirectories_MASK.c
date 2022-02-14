
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int count; } ;
typedef TYPE_1__ status_entry_single ;
typedef int st ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (scalar_t__*,int ,char*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

void FUNC_11(void)
{
 status_entry_single VAR_3;

 VAR_2 = FUNC_6("empty_standard_repo");

 FUNC_3(
  "empty_standard_repo/ignore_me", "I'm going to be ignored!");

 FUNC_5("empty_standard_repo/.gitignore", "ignore_me\n");

 FUNC_10(&VAR_3, 0, sizeof(VAR_3));
 FUNC_4(FUNC_9(VAR_2, VAR_1, &VAR_3));
 FUNC_2(2, VAR_3.count);
 FUNC_1(VAR_3.status == VAR_0);

 FUNC_4(FUNC_8(&VAR_3.status, VAR_2, "ignore_me"));
 FUNC_1(VAR_3.status == VAR_0);

 FUNC_0("ignore_me");
 FUNC_4(FUNC_7(
  "empty_standard_repo/test/ignore_me", 0775));
 FUNC_3(
  "empty_standard_repo/test/ignore_me/file", "I'm going to be ignored!");
 FUNC_3(
  "empty_standard_repo/test/ignore_me/file2", "Me, too!");

 FUNC_10(&VAR_3, 0, sizeof(VAR_3));
 FUNC_4(FUNC_9(VAR_2, VAR_1, &VAR_3));
 FUNC_2(3, VAR_3.count);

 FUNC_4(FUNC_8(&VAR_3.status, VAR_2, "test/ignore_me/file"));
 FUNC_1(VAR_3.status == VAR_0);

 FUNC_0("test/ignore_me/file");
}
