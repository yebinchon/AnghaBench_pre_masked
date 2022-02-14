
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(pthread_t VAR_1, int VAR_2)
{
 cpuset_t VAR_3;

 if (VAR_2 == -1)
  return 0;


 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);

 if (FUNC_3(VAR_1, sizeof(cpuset_t), &VAR_3) != 0) {
  FUNC_2("Unable to set affinity: %s", FUNC_4(VAR_0));
  return 1;
 }
 return 0;
}
