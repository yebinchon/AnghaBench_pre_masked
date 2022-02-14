
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int cputype; int options; void* writecombine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;





 void* VAR_24 ;
 void* VAR_25 ;
 char** VAR_26 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cpuinfo_mips*) ;
 int FUNC_2 (struct cpuinfo_mips*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(struct cpuinfo_mips *VAR_27, unsigned int VAR_28)
{
 VAR_27->writecombine = VAR_25;
 switch (VAR_27->processor_id & VAR_23) {
 case 128:
  VAR_27->writecombine = VAR_24;
  VAR_27->cputype = VAR_20;
  VAR_26[VAR_28] = "MIPS GENERIC QEMU";
  break;
 case 148:
  VAR_27->cputype = VAR_6;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 4Kc";
  break;
 case 147:
 case 146:
  VAR_27->cputype = VAR_7;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 4KEc";
  break;
 case 145:
 case 144:
  VAR_27->cputype = VAR_8;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 4KSc";
  break;
 case 143:
  VAR_27->cputype = VAR_9;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 5Kc";
  break;
 case 142:
  VAR_27->cputype = VAR_10;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 5KE";
  break;
 case 153:
  VAR_27->cputype = VAR_2;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 20Kc";
  break;
 case 152:
  VAR_27->cputype = VAR_3;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 24Kc";
  break;
 case 151:
  VAR_27->cputype = VAR_3;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 24KEc";
  break;
 case 150:
  VAR_27->cputype = VAR_4;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 25Kc";
  break;
 case 149:
  VAR_27->cputype = VAR_5;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 34Kc";
  FUNC_1(VAR_27);
  break;
 case 141:
  VAR_27->cputype = VAR_11;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 74Kc";
  break;
 case 136:
  VAR_27->cputype = VAR_13;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS M14Kc";
  break;
 case 135:
  VAR_27->cputype = VAR_14;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS M14KEc";
  break;
 case 155:
  VAR_27->cputype = VAR_0;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 1004Kc";
  FUNC_1(VAR_27);
  break;
 case 154:
  VAR_27->cputype = VAR_1;
  VAR_27->writecombine = VAR_24;
  VAR_26[VAR_28] = "MIPS 1074Kc";
  break;
 case 137:
  VAR_27->cputype = VAR_12;
  VAR_26[VAR_28] = "MIPS interAptiv";
  FUNC_1(VAR_27);
  break;
 case 138:
  VAR_27->cputype = VAR_12;
  VAR_26[VAR_28] = "MIPS interAptiv (multi)";
  FUNC_1(VAR_27);
  break;
 case 129:
  VAR_27->cputype = VAR_19;
  VAR_26[VAR_28] = "MIPS proAptiv";
  break;
 case 130:
  VAR_27->cputype = VAR_19;
  VAR_26[VAR_28] = "MIPS proAptiv (multi)";
  break;
 case 132:
  VAR_27->cputype = VAR_17;
  VAR_26[VAR_28] = "MIPS P5600";
  break;
 case 131:
  VAR_27->cputype = VAR_18;
  VAR_26[VAR_28] = "MIPS P6600";
  break;
 case 140:
  VAR_27->cputype = 157;
  VAR_26[VAR_28] = "MIPS I6400";
  break;
 case 139:
  VAR_27->cputype = 156;
  VAR_26[VAR_28] = "MIPS I6500";
  break;
 case 134:
  VAR_27->cputype = VAR_15;
  VAR_26[VAR_28] = "MIPS M5150";
  break;
 case 133:
  VAR_27->cputype = VAR_16;
  VAR_26[VAR_28] = "MIPS M6250";
  break;
 }

 FUNC_2(VAR_27);

 FUNC_3();

 switch (FUNC_0(VAR_27->cputype)) {
 case 156:
  VAR_27->options |= VAR_21;

 case 157:
  VAR_27->options |= VAR_22;

 default:
  break;
 }
}
