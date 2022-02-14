
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(phandle_t VAR_0, cell_t *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, "reg");
 if (VAR_2 != sizeof(cell_t))
  FUNC_2("Unexpected length for CPU property reg on Open Firmware\n");
 FUNC_0(VAR_0, "reg", VAR_1, VAR_2);
}
