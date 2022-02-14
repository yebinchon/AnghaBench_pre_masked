
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct cpuref*) ;
 scalar_t__ FUNC_3 (struct cpuref*) ;
 int FUNC_4 (struct cpuref*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,int,char*,int) ;
 int VAR_5 ;

void
FUNC_7(void)
{
 struct cpuref VAR_6;
 char VAR_7[32];





 if (FUNC_3(&VAR_6) != 0)
  FUNC_2(&VAR_6);
 VAR_5 = FUNC_4(&VAR_6);
 VAR_4 = 1000000000000 / VAR_5;

 FUNC_5(VAR_3, VAR_5, 0);
 FUNC_6(VAR_7, sizeof(VAR_7), "cpu%d:decrementer", VAR_0);
 FUNC_1(VAR_7, &VAR_1[VAR_0]);
 FUNC_0(((void*)0));
 VAR_2 = 1;
}
