
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1, "usage: %s [-f device] op...\n", VAR_0);
 FUNC_1(VAR_1, "where op's are:\n");
 FUNC_1(VAR_1, "fact\t\tread factory PR segment\n");
 FUNC_1(VAR_1, "oem\t\tread OEM segment\n");
 FUNC_1(VAR_1, "woem value\twrite OEM segment\n");
 FUNC_1(VAR_1, "plr\t\tread PLR\n");
 FUNC_1(VAR_1, "wplr\t\twrite PLR\n");
 FUNC_0(-1);
}
