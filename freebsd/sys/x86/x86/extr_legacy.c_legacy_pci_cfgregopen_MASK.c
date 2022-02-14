
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int16_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int,int ,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_6)
{
 uint64_t VAR_7;
 u_int16_t VAR_8, VAR_9;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
  return;


 VAR_9 = FUNC_1(0, 0, 0, VAR_3, 2);
 VAR_8 = FUNC_1(0, 0, 0, VAR_2, 2);
 switch (VAR_9) {
 case 0x8086:
  switch (VAR_8) {
  case 0x3590:
  case 0x3592:

   VAR_7 = FUNC_1(0, 0, 0, 0xce, 2) << 16;
   FUNC_2(VAR_7, 0, 255);
   break;
  case 0x2580:
  case 0x2584:
  case 0x2590:

   VAR_7 = FUNC_1(0, 0, 0, 0x48, 4);
   FUNC_2(VAR_7, 0, 255);
   break;
  }
 }

 if (VAR_4 && VAR_5 == VAR_1)
  FUNC_0(VAR_6, "Enabled ECAM PCIe accesses\n");
}
