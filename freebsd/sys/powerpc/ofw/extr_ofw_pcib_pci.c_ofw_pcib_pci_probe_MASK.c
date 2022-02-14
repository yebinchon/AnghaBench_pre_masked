
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{

 if ((FUNC_2(VAR_3) != VAR_1) ||
     (FUNC_3(VAR_3) != VAR_2)) {
  return (VAR_0);
 }

 if (FUNC_1(VAR_3) == -1)
  return (VAR_0);

 FUNC_0(VAR_3, "OFW PCI-PCI bridge");
 return (0);
}
