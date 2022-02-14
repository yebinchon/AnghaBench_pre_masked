
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int phandle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static unsigned long FUNC_6(phandle VAR_0, int VAR_1)
{
 bool VAR_2 = 0;
 unsigned long VAR_3 = 0;
 char VAR_4[128];

 if (!VAR_0)
  return VAR_3;

 if (FUNC_3(VAR_0, "device_type", VAR_4, sizeof(VAR_4)) != -1)
  VAR_2 = (FUNC_5(VAR_4, "cpu") == 0);


 if (VAR_2 && (FUNC_1(VAR_0, "upa-portid") == VAR_1 ||
       FUNC_1(VAR_0, "cpuid") == VAR_1))
  VAR_3 = FUNC_2(VAR_0, "clock-frequency", 0);
 if (!VAR_3)
  VAR_3 = FUNC_6(FUNC_0(VAR_0), VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_6(FUNC_4(VAR_0), VAR_1);

 return VAR_3;
}
