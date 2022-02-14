
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
typedef enum replay_action { ____Placeholder_replay_action } replay_action ;


 int FUNC_0 (char*) ;


 char* FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct repository*) ;
 int FUNC_7 (struct repository*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (struct repository*,int*) ;

__attribute__((used)) static int FUNC_11(struct repository *VAR_1)
{
 enum replay_action VAR_2;
 const char *VAR_3 = ((void*)0);
 const char *VAR_4 = ((void*)0);
 unsigned int VAR_5 = FUNC_5(FUNC_7(VAR_1)) ||
    FUNC_5(FUNC_6(VAR_1));

 if (!FUNC_10(VAR_1, &VAR_2)) {
  switch (VAR_2) {
  case 128:
   VAR_3 = FUNC_1("revert is already in progress");
   VAR_4 =
   FUNC_1("try \"git revert (--continue | %s--abort | --quit)\"");
   break;
  case 129:
   VAR_3 = FUNC_1("cherry-pick is already in progress");
   VAR_4 =
   FUNC_1("try \"git cherry-pick (--continue | %s--abort | --quit)\"");
   break;
  default:
   FUNC_0("unexpected action in create_seq_dir");
  }
 }
 if (VAR_3) {
  FUNC_3("%s", VAR_3);
  if (VAR_0)
   FUNC_2(VAR_4,
    VAR_5 ? "--skip | " : "");
  return -1;
 }
 if (FUNC_9(FUNC_8(), 0777) < 0)
  return FUNC_4(FUNC_1("could not create sequencer directory '%s'"),
       FUNC_8());

 return 0;
}
