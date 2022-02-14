
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct sched_param*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int VAR_1 ;

int FUNC_6(int VAR_2, struct sched_param *VAR_3, int VAR_4)
{
 int VAR_5;
 struct sched_param VAR_6;



 VAR_0 = 0;
 VAR_5 = FUNC_4(0);
 if (FUNC_3(0, &VAR_6))
  FUNC_2("sched_getparam");

 if (VAR_3)
  *VAR_3 = VAR_6;

 if (VAR_4 != -1 && VAR_5 != VAR_4)
 {
  FUNC_1(VAR_1,
  "At line %d the scheduler should be %s yet it is %s.\n",
  VAR_2, FUNC_5(VAR_4), FUNC_5(VAR_5));

  FUNC_0(-1);
 }

 return VAR_5;
}
