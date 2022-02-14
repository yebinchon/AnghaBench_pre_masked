
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_simple_cmd {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (struct smu_simple_cmd*,int ,int,int *,int *,char,char,char,char,char,char,char,int ) ;
 int FUNC_1 (struct smu_simple_cmd*) ;

void FUNC_2(void)
{
 struct smu_simple_cmd VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 if (FUNC_0(&VAR_2, VAR_0, 8, ((void*)0), ((void*)0),
        'R', 'E', 'S', 'T', 'A', 'R', 'T', 0))
  return;
 FUNC_1(&VAR_2);
 for (;;)
  ;
}
