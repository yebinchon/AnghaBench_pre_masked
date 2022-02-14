
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int* FUNC_2 (int ,int,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,int,int,int) ;
 int VAR_2 ;

void FUNC_9(unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, unsigned long VAR_7)
{
 const u32 *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 u64 VAR_12;
 int VAR_13, VAR_14, VAR_15;


 if (FUNC_1(VAR_0) != 0)
  FUNC_0("Invalid device tree blob\n");


 VAR_13 = FUNC_5(VAR_0, "/");
 if (VAR_13 < 0)
  FUNC_0("Cannot find root node\n");
 VAR_8 = FUNC_2(VAR_0, VAR_13, "#address-cells", &VAR_14);
 if (!VAR_8 || (VAR_14 != 4))
  FUNC_0("Cannot find #address-cells property");
 VAR_9 = FUNC_2(VAR_0, VAR_13, "#size-cells", &VAR_14);
 if (!VAR_9 || (VAR_14 != 4))
  FUNC_0("Cannot find #size-cells property");


 VAR_13 = FUNC_4(VAR_0, -1, "device_type",
          "memory", sizeof("memory"));
 if (VAR_13 < 0)
  FUNC_0("Cannot find memory node\n");
 VAR_10 = FUNC_2(VAR_0, VAR_13, "reg", &VAR_14);
 if (VAR_14 < (*VAR_8+*VAR_9) * sizeof(u32))
  FUNC_0("cannot get memory range\n");


 for (VAR_15 = 0; VAR_15 < *VAR_8; VAR_15++)
  if (*VAR_10++ != 0)
   FUNC_0("Memory range is not based at address 0\n");


 VAR_12 = 0;
 for (VAR_15 = 0; VAR_15 < *VAR_9; VAR_15++)
  VAR_12 = (VAR_12 << 32) | *VAR_10++;
 if (sizeof(void *) == 4 && VAR_12 >= 0x100000000ULL)
  VAR_12 = 0xffffffff;


 VAR_13 = FUNC_4(VAR_0, -1, "device_type",
          "cpu", sizeof("cpu"));
 if (!VAR_13)
  FUNC_0("Cannot find cpu node\n");
 VAR_11 = FUNC_2(VAR_0, VAR_13, "timebase-frequency", &VAR_14);
 if (VAR_11 && (VAR_14 == 4))
  VAR_2 = 1000000000 / *VAR_11;


 FUNC_8(VAR_1, VAR_12 - (unsigned long)VAR_1, 32, 64);


 FUNC_3(VAR_0);

 if (&FUNC_6)
  FUNC_6();

 FUNC_7();
}
