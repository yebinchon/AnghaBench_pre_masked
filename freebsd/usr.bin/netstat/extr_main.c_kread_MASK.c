
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(u_long VAR_1, void *VAR_2, size_t VAR_3)
{

 if (FUNC_2() < 0)
  return (-1);

 if (!VAR_2)
  return (0);
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3) != (ssize_t)VAR_3) {
  FUNC_3("%s", FUNC_0(VAR_0));
  return (-1);
 }
 return (0);
}
