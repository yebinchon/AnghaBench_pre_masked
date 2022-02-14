
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_int VAR_1)
{
 const char *VAR_2[] = { "high", "low", "critical", "charging" };

 FUNC_0("Battery Status: ");
 if (VAR_1 == VAR_0)
  FUNC_0("unknown\n");
 else if (VAR_1 > 3)
  FUNC_0("invalid value (0x%x)\n", VAR_1);
 else
  FUNC_0("%s\n", VAR_2[VAR_1]);
}
