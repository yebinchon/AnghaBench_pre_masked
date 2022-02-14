
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int exit; int fixups; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int* FUNC_2 (int ,int,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,unsigned long,int,int) ;
 int VAR_7 ;

void FUNC_10(void)
{
 unsigned long VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;
 const u32 *VAR_13;

 VAR_5 = FUNC_6();
 if (VAR_5 >> 32)
  VAR_8 = ~0UL;
 else
  VAR_8 = VAR_5;
 VAR_9 = VAR_8 - (unsigned long)VAR_2;

 FUNC_9(VAR_2, VAR_9, 128, 64);
 VAR_6.fixups = VAR_4;
 VAR_6.exit = VAR_3;
 VAR_10 = FUNC_7(VAR_0);


 if (FUNC_1(VAR_1) != 0)
  FUNC_0("Invalid device tree blob\n");

 VAR_11 = FUNC_4(VAR_1, -1, "device_type",
                                      "cpu", sizeof("cpu"));
 if (!VAR_11)
  FUNC_0("Cannot find cpu node\n");
 VAR_13 = FUNC_2(VAR_1, VAR_11, "timebase-frequency", &VAR_12);
 if (VAR_13 && (VAR_12 == 4))
  VAR_7 = 1000000000 / *VAR_13;

 FUNC_5(VAR_1, VAR_10);
 FUNC_3(VAR_1);

 FUNC_8();
}
