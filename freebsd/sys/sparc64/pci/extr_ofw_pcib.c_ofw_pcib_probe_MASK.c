
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 char VAR_6[sizeof("OFW PCIe-PCIe bridge")];
 const char *VAR_7, *VAR_8;




 if ((FUNC_5(VAR_5) == VAR_3) &&
     (FUNC_6(VAR_5) == VAR_4) &&
     FUNC_3(VAR_5) != 0) {
  VAR_7 = FUNC_4(VAR_5);
  VAR_8 = FUNC_4(FUNC_1(
      FUNC_1(VAR_5)));
  FUNC_7(VAR_6, sizeof(VAR_6), "OFW PCI%s-PCI%s bridge",
      (((VAR_8) != ((void*)0)) && strcmp((VAR_8), (VAR_2)) == 0) ? "e" : "",
      (((VAR_7) != ((void*)0)) && FUNC_0((VAR_7), (VAR_2)) == 0) ? "e" : "");
  FUNC_2(VAR_5, VAR_6);
  return (VAR_0);
 }



 return (VAR_1);
}
