
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
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
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (struct cpuinfo_mips*,int ) ;
 int VAR_14 ;

__attribute__((used)) static inline unsigned int FUNC_3(struct cpuinfo_mips *VAR_15)
{
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_1();




 VAR_18 = VAR_16 & VAR_3;
 if (VAR_18 == VAR_5)
  VAR_15->options |= VAR_13;
 else if (VAR_18 == VAR_4)
  VAR_15->options |= VAR_13 | VAR_6;

 VAR_17 = (VAR_16 & VAR_1) >> 13;
 switch (VAR_17) {
 case 0:
  switch ((VAR_16 & VAR_0) >> 10) {
  case 0:
   FUNC_2(VAR_15, VAR_7);
   break;
  case 1:
   FUNC_2(VAR_15, VAR_8);
   break;
  case 2:
   FUNC_2(VAR_15, VAR_9);
   break;
  default:
   goto unknown;
  }
  break;
 case 2:
  switch ((VAR_16 & VAR_0) >> 10) {
  case 0:
   FUNC_2(VAR_15, VAR_10);
   break;
  case 1:
   FUNC_2(VAR_15, VAR_11);
   break;
  case 2:
   FUNC_2(VAR_15, VAR_12);
   break;
  default:
   goto unknown;
  }
  break;
 default:
  goto unknown;
 }

 return VAR_16 & VAR_2;

unknown:
 FUNC_0(VAR_14, VAR_16);
}
