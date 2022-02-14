
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 const char *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 if (FUNC_3(VAR_2, "pci") != 0)
  return (VAR_0);

 if (FUNC_3(VAR_3, "uni-north") == 0) {
  FUNC_0(VAR_1, "Apple UniNorth Host-PCI bridge");
  return (0);
 } else if (FUNC_3(VAR_3, "u3-agp") == 0) {
  FUNC_0(VAR_1, "Apple U3 Host-AGP bridge");
  return (0);
 } else if (FUNC_3(VAR_3, "u4-pcie") == 0) {
  FUNC_0(VAR_1, "IBM CPC945 PCI Express Root");
  return (0);
 }

 return (VAR_0);
}
