
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_message {char* label; } ;
struct commit {int dummy; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct commit*,struct commit_message*) ;
 scalar_t__ FUNC_3 (struct commit*,struct commit_message*) ;
 scalar_t__ FUNC_4 (char*,struct object_id*) ;
 struct commit* FUNC_5 (struct repository*,struct object_id*) ;
 scalar_t__ FUNC_6 (struct commit*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct repository *VAR_1)
{
 struct object_id VAR_2;
 struct commit *VAR_3;
 struct commit_message VAR_4;

 if (FUNC_4("HEAD", &VAR_2) ||
     !(VAR_3 = FUNC_5(VAR_1, &VAR_2)) ||
     FUNC_6(VAR_3) || FUNC_3(VAR_3, &VAR_4))
  FUNC_1(VAR_0, "%s", FUNC_0("Stopped at HEAD\n"));
 else {
  FUNC_1(VAR_0, FUNC_0("Stopped at %s\n"), VAR_4.label);
  FUNC_2(VAR_3, &VAR_4);
 }
 return 0;

}
