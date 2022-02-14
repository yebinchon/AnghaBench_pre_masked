
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*,int*,int*) ;
 int VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4)
{
 int VAR_5, VAR_6;

 if (FUNC_5(VAR_4, "%d:%d", &VAR_5, &VAR_6) != 2) {
  FUNC_2(VAR_2, "invalid format: %s\n", VAR_4);
  return (-1);
 }

 if (VAR_5 < 0 || VAR_5 >= VAR_1) {
  FUNC_2(VAR_2, "vcpu '%d' outside valid range from 0 to %d\n",
      VAR_5, VAR_1 - 1);
  return (-1);
 }

 if (VAR_6 < 0 || VAR_6 >= VAR_0) {
  FUNC_2(VAR_2, "hostcpu '%d' outside valid range from "
      "0 to %d\n", VAR_6, VAR_0 - 1);
  return (-1);
 }

 if (VAR_3[VAR_5] == ((void*)0)) {
  if ((VAR_3[VAR_5] = FUNC_3(sizeof(cpuset_t))) == ((void*)0)) {
   FUNC_4("malloc");
   return (-1);
  }
  FUNC_1(VAR_3[VAR_5]);
 }
 FUNC_0(VAR_6, VAR_3[VAR_5]);
 return (0);
}
