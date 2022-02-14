
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int) ;



 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_0, device_t VAR_1)
{
 uint16_t VAR_2;
 VAR_2 = FUNC_3() >> 16;


 switch (VAR_2) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   return;
 }


 if (FUNC_1(VAR_1, "pcr", -1) != ((void*)0))
  return;





 if (FUNC_0(VAR_1, 10, "pcr", -1) == ((void*)0))
  FUNC_2(VAR_1, "add pcr child failed\n");
}
