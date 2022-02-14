
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int backends; } ;
typedef TYPE_1__ git_config ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

int FUNC_6(git_config **VAR_1)
{
 git_config *VAR_2;

 VAR_2 = FUNC_3(sizeof(git_config));
 FUNC_0(VAR_2);

 FUNC_5(VAR_2, 0x0, sizeof(git_config));

 if (FUNC_4(&VAR_2->backends, 3, VAR_0) < 0) {
  FUNC_2(VAR_2);
  return -1;
 }

 *VAR_1 = VAR_2;
 FUNC_1(VAR_2);
 return 0;
}
