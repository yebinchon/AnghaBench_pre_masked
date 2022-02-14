
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_compat_data {int dummy; } ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 struct ofw_compat_data* FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_0, device_t VAR_1)
{
 struct ofw_compat_data *VAR_2;


 if (FUNC_1(VAR_1, "mpc85xx_jog", -1) != ((void*)0))
  return;

 VAR_2 = FUNC_3();
 if (VAR_2 == ((void*)0))
  return;





 if (FUNC_0(VAR_1, 10, "jog", -1) == ((void*)0))
  FUNC_2(VAR_1, "add jog child failed\n");
}
