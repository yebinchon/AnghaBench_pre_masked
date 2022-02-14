
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 int VAR_5;

 if ((FUNC_2(VAR_4) != VAR_1) ||
     (FUNC_3(VAR_4) != VAR_3))
  return (VAR_0);
 VAR_5 = FUNC_4(VAR_4, VAR_2, 1);
 if (VAR_5 == 0)
  return (VAR_0);
 if (FUNC_1(VAR_5) != 0)
  return (VAR_0);
 FUNC_0(VAR_4, "MPTable PCI-PCI bridge");
 return (-1000);
}
