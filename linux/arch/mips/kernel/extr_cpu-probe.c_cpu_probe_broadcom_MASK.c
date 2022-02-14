
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int options; int cputype; } ;


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
 char** VAR_11 ;
 int FUNC_0 (struct cpuinfo_mips*) ;
 int FUNC_1 (unsigned int,char*) ;

__attribute__((used)) static inline void FUNC_2(struct cpuinfo_mips *VAR_12, unsigned int VAR_13)
{
 FUNC_0(VAR_12);
 switch (VAR_12->processor_id & VAR_7) {
 case 135:
 case 134:
  VAR_12->cputype = VAR_0;
  VAR_11[VAR_13] = "Broadcom BMIPS32";
  FUNC_1(VAR_13, "bmips32");
  break;
 case 133:
 case 132:
 case 131:
  VAR_12->cputype = VAR_1;
  VAR_11[VAR_13] = "Broadcom BMIPS3300";
  FUNC_1(VAR_13, "bmips3300");
  break;
 case 130: {
  int VAR_14 = VAR_12->processor_id & VAR_10;

  if (VAR_14 >= VAR_9 &&
    VAR_14 <= VAR_8) {
   VAR_12->cputype = VAR_3;
   VAR_11[VAR_13] = "Broadcom BMIPS4380";
   FUNC_1(VAR_13, "bmips4380");
   VAR_12->options |= VAR_5;
  } else {
   VAR_12->cputype = VAR_2;
   VAR_11[VAR_13] = "Broadcom BMIPS4350";
   FUNC_1(VAR_13, "bmips4350");
  }
  break;
 }
 case 129:
 case 128:
  VAR_12->cputype = VAR_4;
  if ((VAR_12->processor_id & VAR_7) == 128)
   VAR_11[VAR_13] = "Broadcom BMIPS5200";
  else
   VAR_11[VAR_13] = "Broadcom BMIPS5000";
  FUNC_1(VAR_13, "bmips5000");
  VAR_12->options |= VAR_6 | VAR_5;
  break;
 }
}
