
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_config_iterator ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (TYPE_1__**,int *) ;

void FUNC_10(void)
{
 const char *VAR_3[] = {
  "core.dummy2",
  "core.verylong",
  "core.dummy",
  "remote.ab.url",
  "remote.abba.url",
  "core.dummy2",
  "core.global"
 };
 git_config *VAR_4;
 git_config_iterator *VAR_5;
 git_config_entry *VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(FUNC_8(&VAR_4));
 FUNC_3(FUNC_4(VAR_4, FUNC_2("config/config9"),
  VAR_1, ((void*)0), 0));
 FUNC_3(FUNC_4(VAR_4, FUNC_2("config/config15"),
  VAR_0, ((void*)0), 0));

 VAR_7 = 0;
 FUNC_3(FUNC_7(&VAR_5, VAR_4));

 while ((VAR_8 = FUNC_9(&VAR_6, VAR_5)) == 0) {
  FUNC_1(VAR_6->name, VAR_3[VAR_7]);
  VAR_7++;
 }

 FUNC_6(VAR_5);
 FUNC_0(VAR_2, VAR_8);
 FUNC_0(7, VAR_7);

 VAR_7 = 3;
 FUNC_3(FUNC_7(&VAR_5, VAR_4));

 FUNC_6(VAR_5);
 FUNC_5(VAR_4);
}
