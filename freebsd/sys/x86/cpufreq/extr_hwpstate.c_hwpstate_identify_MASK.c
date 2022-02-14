
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(driver_t *VAR_5, device_t VAR_6)
{

 if (FUNC_3(VAR_6, "hwpstate", -1) != ((void*)0))
  return;

 if (VAR_4 != VAR_1 || FUNC_1(VAR_3) < 0x10)
  return;




 if ((VAR_2 & VAR_0) == 0) {
  FUNC_2(VAR_6, "hwpstate enable bit is not set.\n");
  return;
 }

 if (FUNC_5("hwpstate", 0))
  return;

 if (FUNC_0(VAR_6, 10, "hwpstate", -1) == ((void*)0))
  FUNC_4(VAR_6, "hwpstate: add child failed\n");
}
