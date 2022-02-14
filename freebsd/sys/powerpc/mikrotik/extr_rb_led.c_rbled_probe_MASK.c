
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int model ;
typedef int gp ;
typedef int device_t ;
typedef char cell_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 phandle_t VAR_2;
 const char *VAR_3;
 cell_t VAR_4[2];
 char VAR_5[6];

 VAR_2 = FUNC_4(VAR_1);

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 if (FUNC_5(VAR_3, "led") != 0)
  return (VAR_0);

 if (FUNC_0(VAR_2, "user_led", VAR_4, sizeof(VAR_4)) <= 0)
  return (VAR_0);


 VAR_2 = FUNC_1(0);
 if (FUNC_0(VAR_2, "model", VAR_5, sizeof(VAR_5)) <= 0)
  return (VAR_0);
 if (FUNC_5(VAR_5, "RB800") != 0)
  return (VAR_0);

 FUNC_2(VAR_1, "RouterBoard LED");
 return (0);
}
