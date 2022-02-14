
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int dummy; } ;
typedef int platform_t ;
typedef int phandle_t ;
typedef int inst ;
typedef int ihandle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpuref*,int) ;

__attribute__((used)) static int
FUNC_4(platform_t VAR_1, struct cpuref *VAR_2)
{
 ihandle_t VAR_3;
 phandle_t VAR_4, VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0("/chosen");
 if (VAR_5 == -1)
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_5, "cpu", &VAR_3, sizeof(VAR_3));
 if (VAR_6 < 0)
  return (VAR_0);

 VAR_4 = FUNC_2(VAR_3);
 return (FUNC_3(VAR_2, VAR_4));
}
