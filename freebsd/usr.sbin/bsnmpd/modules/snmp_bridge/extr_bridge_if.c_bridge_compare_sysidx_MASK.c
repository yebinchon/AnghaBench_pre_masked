
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

int
FUNC_3(uint32_t VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 const char *VAR_4, *VAR_5;

 if (VAR_1 == VAR_2)
  return (0);

 if ((VAR_4 = FUNC_0(VAR_1)) == ((void*)0)) {
  FUNC_2(VAR_0, "Bridge interface %d does not exist", VAR_1);
  return (-2);
 }

 if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_0, "Bridge interface %d does not exist", VAR_2);
  return (-2);
 }

 if ((VAR_3 = FUNC_1(VAR_4, VAR_5)) < 0)
  return (-1);
 else if (VAR_3 > 0)
  return (1);

 return (0);
}
