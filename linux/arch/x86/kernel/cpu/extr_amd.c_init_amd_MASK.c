
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int apicid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (struct cpuinfo_x86*,int) ;
 int FUNC_3 (struct cpuinfo_x86*) ;
 scalar_t__ FUNC_4 (struct cpuinfo_x86*,int ) ;
 int FUNC_5 (struct cpuinfo_x86*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cpuinfo_x86*) ;
 int FUNC_8 (struct cpuinfo_x86*) ;
 int FUNC_9 (struct cpuinfo_x86*) ;
 int FUNC_10 (struct cpuinfo_x86*) ;
 int FUNC_11 (struct cpuinfo_x86*) ;
 int FUNC_12 (struct cpuinfo_x86*) ;
 int FUNC_13 (struct cpuinfo_x86*) ;
 int FUNC_14 (struct cpuinfo_x86*) ;
 int FUNC_15 (struct cpuinfo_x86*) ;
 int FUNC_16 (struct cpuinfo_x86*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct cpuinfo_x86*,int ) ;
 int FUNC_19 (struct cpuinfo_x86*,int ) ;
 int FUNC_20 (struct cpuinfo_x86*) ;

__attribute__((used)) static void FUNC_21(struct cpuinfo_x86 *VAR_14)
{
 FUNC_5(VAR_14);





 FUNC_2(VAR_14, 0*32+31);

 if (VAR_14->x86 >= 0x10)
  FUNC_19(VAR_14, VAR_10);


 VAR_14->apicid = FUNC_6();


 if (VAR_14->x86 < 6)
  FUNC_2(VAR_14, VAR_9);

 switch (VAR_14->x86) {
 case 4: FUNC_11(VAR_14); break;
 case 5: FUNC_12(VAR_14); break;
 case 6: FUNC_13(VAR_14); break;
 case 0xf: FUNC_14(VAR_14); break;
 case 0x10: FUNC_9(VAR_14); break;
 case 0x12: FUNC_15(VAR_14); break;
 case 0x15: FUNC_7(VAR_14); break;
 case 0x16: FUNC_10(VAR_14); break;
 case 0x17: FUNC_16(VAR_14); break;
 }





 if ((VAR_14->x86 >= 6) && (!FUNC_4(VAR_14, VAR_13)))
  FUNC_18(VAR_14, VAR_2);

 FUNC_3(VAR_14);

 FUNC_0(VAR_14);
 FUNC_1(VAR_14);
 FUNC_20(VAR_14);

 FUNC_8(VAR_14);

 if (FUNC_4(VAR_14, VAR_12)) {






  FUNC_17(VAR_0,
       VAR_1);


  FUNC_19(VAR_14, VAR_7);
 }





 if (VAR_14->x86 > 0x11)
  FUNC_19(VAR_14, VAR_6);


 if (!FUNC_4(VAR_14, VAR_5))
  if (FUNC_4(VAR_14, VAR_4) || FUNC_4(VAR_14, VAR_8))
   FUNC_19(VAR_14, VAR_5);


 if (!FUNC_4(VAR_14, VAR_11))
  FUNC_18(VAR_14, VAR_3);
}
