
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int32_t ;
typedef int u_int ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void)
{



 u_int VAR_2[4];

 if (VAR_0 >= 0x80000005) {
  FUNC_2(0x80000005, VAR_2);
  FUNC_5("L1 2MB data TLB: %d entries", (VAR_2[0] >> 16) & 0xff);
  FUNC_3(VAR_2[0] >> 24);

  FUNC_5("L1 2MB instruction TLB: %d entries", VAR_2[0] & 0xff);
  FUNC_3((VAR_2[0] >> 8) & 0xff);

  FUNC_5("L1 4KB data TLB: %d entries", (VAR_2[1] >> 16) & 0xff);
  FUNC_3(VAR_2[1] >> 24);

  FUNC_5("L1 4KB instruction TLB: %d entries", VAR_2[1] & 0xff);
  FUNC_3((VAR_2[1] >> 8) & 0xff);

  FUNC_5("L1 data cache: %d kbytes", VAR_2[2] >> 24);
  FUNC_5(", %d bytes/line", VAR_2[2] & 0xff);
  FUNC_5(", %d lines/tag", (VAR_2[2] >> 8) & 0xff);
  FUNC_3((VAR_2[2] >> 16) & 0xff);

  FUNC_5("L1 instruction cache: %d kbytes", VAR_2[3] >> 24);
  FUNC_5(", %d bytes/line", VAR_2[3] & 0xff);
  FUNC_5(", %d lines/tag", (VAR_2[3] >> 8) & 0xff);
  FUNC_3((VAR_2[3] >> 16) & 0xff);
 }

 if (VAR_0 >= 0x80000006) {
  FUNC_2(0x80000006, VAR_2);
  if ((VAR_2[0] >> 16) != 0) {
   FUNC_5("L2 2MB data TLB: %d entries",
       (VAR_2[0] >> 16) & 0xfff);
   FUNC_4(VAR_2[0] >> 28);
   FUNC_5("L2 2MB instruction TLB: %d entries",
       VAR_2[0] & 0xfff);
   FUNC_4((VAR_2[0] >> 28) & 0xf);
  } else {
   FUNC_5("L2 2MB unified TLB: %d entries",
       VAR_2[0] & 0xfff);
   FUNC_4((VAR_2[0] >> 28) & 0xf);
  }
  if ((VAR_2[1] >> 16) != 0) {
   FUNC_5("L2 4KB data TLB: %d entries",
       (VAR_2[1] >> 16) & 0xfff);
   FUNC_4(VAR_2[1] >> 28);

   FUNC_5("L2 4KB instruction TLB: %d entries",
       (VAR_2[1] >> 16) & 0xfff);
   FUNC_4((VAR_2[1] >> 28) & 0xf);
  } else {
   FUNC_5("L2 4KB unified TLB: %d entries",
       (VAR_2[1] >> 16) & 0xfff);
   FUNC_4((VAR_2[1] >> 28) & 0xf);
  }
  FUNC_5("L2 unified cache: %d kbytes", VAR_2[2] >> 16);
  FUNC_5(", %d bytes/line", VAR_2[2] & 0xff);
  FUNC_5(", %d lines/tag", (VAR_2[2] >> 8) & 0x0f);
  FUNC_4((VAR_2[2] >> 12) & 0x0f);
 }
 if (FUNC_0(VAR_1) == 0xf && FUNC_1(VAR_1) >= 0x20 &&
     FUNC_1(VAR_1) <= 0x3f)
  FUNC_5("WARNING: This architecture revision has known SMP "
      "hardware bugs which may cause random instability\n");
}
