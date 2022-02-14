
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set ;
typedef int cpuset_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int,int,int *) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
 cpuset_t VAR_3;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);
 if (FUNC_2(VAR_0, VAR_1, -1, sizeof(VAR_3),
     &VAR_3) < 0)
  FUNC_3(1, "cpuset_setaffinity(%d)", VAR_2);
}
