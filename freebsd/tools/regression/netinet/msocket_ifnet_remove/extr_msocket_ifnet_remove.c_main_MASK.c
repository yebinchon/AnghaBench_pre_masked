
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;

int
FUNC_1(int VAR_2, char *VAR_3[])
{

 if (FUNC_0(VAR_1, "SOCK_RAW") < 0)
  return (-1);

 if (FUNC_0(VAR_0, "SOCK_DGRAM") < 0)
  return (-1);

 return (0);
}
