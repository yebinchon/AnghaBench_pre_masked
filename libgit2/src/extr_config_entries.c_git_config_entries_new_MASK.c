
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int map; } ;
typedef TYPE_1__ git_config_entries ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

int FUNC_5(git_config_entries **VAR_0)
{
 git_config_entries *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(1, sizeof(git_config_entries));
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 if ((VAR_2 = FUNC_4(&VAR_1->map)) < 0)
  FUNC_3(VAR_1);
 else
  *VAR_0 = VAR_1;

 return VAR_2;
}
