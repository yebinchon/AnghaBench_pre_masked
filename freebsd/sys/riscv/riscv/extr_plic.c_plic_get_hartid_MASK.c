
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int hart ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, phandle_t VAR_1)
{
 int VAR_2;


 if (FUNC_1(VAR_1, "#interrupt-cells", &VAR_2,
     sizeof(VAR_2)) == -1) {
  FUNC_2(VAR_0,
      "Could not find #interrupt-cells for phandle %u\n", VAR_1);
  return (-1);
 }





 if (FUNC_1(FUNC_0(VAR_1), "reg", (pcell_t *)&VAR_2,
     sizeof(VAR_2)) == -1) {
  FUNC_2(VAR_0, "Could not find hartid\n");
  return (-1);
 }

 return (VAR_2);
}
