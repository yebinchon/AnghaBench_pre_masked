
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_0, device_t VAR_1)
{

 if (FUNC_1(VAR_1, "riscv64_cpu", -1) != ((void*)0))
  return;
 if (FUNC_0(VAR_1, 0, "riscv64_cpu", -1) == ((void*)0))
  FUNC_2(VAR_1, "add child failed\n");
}
