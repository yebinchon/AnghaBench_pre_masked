
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_4, device_t VAR_5)
{

 if ((VAR_2 & VAR_0) == 0 || (VAR_2 & VAR_1) == 0)
  return;
 switch (VAR_3 & 0xf00) {
 case 0x600:
 case 0xf00:
  break;
 default:
  return;
 }
 if (FUNC_1(VAR_5, "powernow", -1) != ((void*)0))
  return;
 if (FUNC_0(VAR_5, 10, "powernow", -1) == ((void*)0))
  FUNC_2(VAR_5, "powernow: add child failed\n");
}
