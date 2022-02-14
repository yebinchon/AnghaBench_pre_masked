
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; scalar_t__ status; } ;
typedef TYPE_1__ status_entry_single ;
typedef int st ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__*,int ,char*) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 status_entry_single VAR_4;

 VAR_3 = FUNC_5("empty_standard_repo");

 FUNC_2(
  "empty_standard_repo/look-ma.txt", "I'm going to be ignored!");

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(FUNC_7(VAR_3, VAR_2, &VAR_4));
 FUNC_1(VAR_4.count == 1);
 FUNC_1(VAR_4.status == VAR_1);

 FUNC_3(FUNC_6(&VAR_4.status, VAR_3, "look-ma.txt"));
 FUNC_1(VAR_4.status == VAR_1);

 FUNC_9("look-ma.txt");

 FUNC_4("empty_standard_repo/.gitignore", "*.nomatch\n");

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(FUNC_7(VAR_3, VAR_2, &VAR_4));
 FUNC_1(VAR_4.count == 2);
 FUNC_1(VAR_4.status == VAR_1);

 FUNC_3(FUNC_6(&VAR_4.status, VAR_3, "look-ma.txt"));
 FUNC_1(VAR_4.status == VAR_1);

 FUNC_9("look-ma.txt");

 FUNC_4("empty_standard_repo/.gitignore", "*.txt\n");

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(FUNC_7(VAR_3, VAR_2, &VAR_4));
 FUNC_1(VAR_4.count == 2);
 FUNC_1(VAR_4.status == VAR_0);

 FUNC_3(FUNC_6(&VAR_4.status, VAR_3, "look-ma.txt"));
 FUNC_1(VAR_4.status == VAR_0);

 FUNC_0("look-ma.txt");
}
