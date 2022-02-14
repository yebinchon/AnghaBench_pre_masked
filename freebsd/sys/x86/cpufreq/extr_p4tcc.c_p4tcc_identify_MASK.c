
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_3, device_t VAR_4)
{

 if ((VAR_2 & (VAR_0 | VAR_1)) != (VAR_0 | VAR_1))
  return;


 if (FUNC_1(VAR_4, "p4tcc", -1) != ((void*)0))
  return;







 if (FUNC_0(VAR_4, 10, "p4tcc", -1) == ((void*)0))
  FUNC_2(VAR_4, "add p4tcc child failed\n");
}
