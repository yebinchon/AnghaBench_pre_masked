
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

void
FUNC_9(void)
{
 cpuset_t VAR_4;
 int VAR_5;

 FUNC_5();
 VAR_2 = VAR_0;
 FUNC_0(FUNC_4(VAR_1), &VAR_2);
 VAR_4 = VAR_2;


 if (FUNC_1(&VAR_3, &VAR_4)) {


  FUNC_3(&VAR_4, &VAR_3);
  FUNC_8(VAR_4);
 }
 VAR_5 = 0;
 while (!FUNC_2(&VAR_2)) {
  if (VAR_5++ > 100000) {
   FUNC_7("timeout shutting down CPUs.\n");
   break;
  }
 }
 FUNC_6();
}
