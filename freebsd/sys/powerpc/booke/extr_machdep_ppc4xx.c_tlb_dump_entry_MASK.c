
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char*,int,int,int,int,char const*,char,char,char*,char*,char*,char*,char*,char,char,char,char,char,char,char,char,char,char,char,char,char,char,char,int) ;
 int FUNC_1 (int,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(u_int VAR_23)
{
 uint32_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 const char *VAR_30;

 FUNC_1(VAR_23, &VAR_24, &VAR_25, &VAR_26, &VAR_27, &VAR_28, &VAR_29);

 switch (VAR_28 & VAR_8) {
 case 132:
  VAR_30 = "  1k";
  break;
 case 128:
  VAR_30 = "  4k";
  break;
 case 135:
  VAR_30 = " 16k";
  break;
 case 130:
  VAR_30 = "256k";
  break;
 case 131:
  VAR_30 = "  1M";
  break;
 case 134:
  VAR_30 = " 16M";
  break;
 case 129:
  VAR_30 = "256M";
  break;
 case 133:
  VAR_30 = "  1G";
  break;
 default:
  VAR_30 = "????";
  break;
 }


 FUNC_0("TLB[%02u]: 0x%08X => "
     "0x%01X_%08X %s %c %c %s %s %s %s %s "
     "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c (%u)\n",
     VAR_23, VAR_24, VAR_26, VAR_25, VAR_30,
     (VAR_28 & VAR_12) ? '1' : '0',
     (VAR_28 & VAR_20) ? 'V' : '.',
     (VAR_29 & VAR_22) ? "WL1" : "___",
     (VAR_29 & VAR_4) ? "IL1I" : "____",
     (VAR_29 & VAR_3) ? "IL1D" : "____",
     (VAR_29 & VAR_6) ? "IL2I" : "____",
     (VAR_29 & VAR_5) ? "IL2D" : "____",
     (VAR_29 & VAR_13) ? '1' : '.',
     (VAR_29 & VAR_14) ? '2' : '.',
     (VAR_29 & VAR_15) ? '3' : '.',
     (VAR_29 & VAR_16) ? '4' : '.',
     (VAR_29 & VAR_21) ? 'W' : '.',
     (VAR_29 & VAR_2) ? 'I' : '.',
     (VAR_29 & VAR_7) ? 'M' : '.',
     (VAR_29 & VAR_1) ? 'G' : '.',
     (VAR_29 & VAR_0) ? 'E' : '.',
     (VAR_29 & VAR_19) ? 'x' : '.',
     (VAR_29 & VAR_18) ? 'w' : '.',
     (VAR_29 & VAR_17) ? 'r' : '.',
     (VAR_29 & VAR_11) ? 'X' : '.',
     (VAR_29 & VAR_10) ? 'W' : '.',
     (VAR_29 & VAR_9) ? 'R' : '.',
     VAR_27);
}
