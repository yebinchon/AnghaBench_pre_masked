
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semid_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int*) ;

__attribute__((used)) static int
FUNC_3(semid_t VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_0, &VAR_2) < 0) {
  FUNC_1("ksem_getvalue");
  return (-1);
 }
 if (VAR_2 != VAR_1) {
  FUNC_0("sem value should be %d instead of %d", VAR_1, VAR_2);
  return (-1);
 }
 return (0);
}
