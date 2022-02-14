
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_device {int cd_pcpu; } ;
typedef int device_t ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cpu_device* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
 struct cpu_device *VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_1(VAR_4);
  *VAR_6 = (uintptr_t)VAR_7->cd_pcpu;
  break;
 case 129:
  if (VAR_2) {
   *VAR_6 = (uintptr_t)(FUNC_0(&VAR_1) /
       1000000);
   break;
  }

 default:
  return (VAR_0);
 }
 return (0);
}
