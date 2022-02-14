
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 int * FUNC_0 (int *,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_6, device_t VAR_7)
{
 device_t VAR_8;


 if (FUNC_1(VAR_7, "est", -1) != ((void*)0))
  return;


 if (VAR_4 == 0 || (VAR_5 != VAR_2 &&
     VAR_5 != VAR_1))
  return;




 if (!(VAR_3 & VAR_0))
  return;





 VAR_8 = FUNC_0(VAR_7, 10, "est", -1);
 if (VAR_8 == ((void*)0))
  FUNC_2(VAR_7, "add est child failed\n");
}
