
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,char*) ;
 int FUNC_5 (int ,char*,char*) ;

void FUNC_6(void)
{
 git_config_entry *VAR_2;

 FUNC_2(FUNC_4(
  &VAR_2, VAR_0, "branch.track-local.remote"));
 FUNC_0(".", VAR_2->value);
 FUNC_3(VAR_2);

 FUNC_1(FUNC_4(
  &VAR_2, VAR_0, "branch.local-track.remote"));

 FUNC_2(FUNC_5(
  VAR_1, "branch.track-local", "branch.local-track"));

 FUNC_2(FUNC_4(
  &VAR_2, VAR_0, "branch.local-track.remote"));
 FUNC_0(".", VAR_2->value);
 FUNC_3(VAR_2);

 FUNC_1(FUNC_4(
  &VAR_2, VAR_0, "branch.track-local.remote"));
}
