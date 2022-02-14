
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int min_freq ;
typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_0, device_t VAR_1)
{
 phandle_t VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_2, "min-clock-frequency", &VAR_3, sizeof(VAR_3)) == -1)
  return;


 if (FUNC_2(VAR_1, "pmufreq", -1) != ((void*)0))
  return;





 if (FUNC_0(VAR_1, 10, "pmufreq", -1) == ((void*)0))
  FUNC_3(VAR_1, "add pmufreq child failed\n");
}
