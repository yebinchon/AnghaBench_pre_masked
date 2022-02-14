
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_4 ;

int
FUNC_2(void)
{
 if (FUNC_1(VAR_4[VAR_1]) < 0)
  return (-1);

 if (FUNC_1(VAR_4[VAR_2]) > 0)
  FUNC_0(VAR_0, "SNMP wlan loaded %s module",
      VAR_4[VAR_2]);

 if (FUNC_1(VAR_4[VAR_3]) > 0)
  FUNC_0(VAR_0, "SNMP wlan loaded %s module",
      VAR_4[VAR_3]);

 return (0);
}
