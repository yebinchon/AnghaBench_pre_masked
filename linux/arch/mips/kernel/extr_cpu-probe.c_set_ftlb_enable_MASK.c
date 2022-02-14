
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int cputype; } ;
typedef enum ftlb_flags { ____Placeholder_ftlb_flags } ftlb_flags ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cpuinfo_mips*) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cpuinfo_mips *VAR_9, enum ftlb_flags VAR_10)
{
 unsigned int VAR_11;


 switch (VAR_9->cputype) {
 case 128:
 case 130:
 case 129:

  VAR_11 = FUNC_2();

  if (VAR_10 & VAR_0)
   VAR_11 |= VAR_7;
  else
   VAR_11 &= ~VAR_7;

  if (VAR_10 & VAR_1) {
   VAR_11 &= ~(3 << VAR_8);
   VAR_11 |= FUNC_1(VAR_9)
      << VAR_8;
  }

  FUNC_3(VAR_11);
  FUNC_0();
  break;
 case 133:
 case 132:

  if (!(VAR_10 & VAR_0))
   return 1;
  return 0;
 case 131:

  FUNC_4(VAR_4 | VAR_2 |
         VAR_5 | VAR_3);

  VAR_11 = FUNC_2();
  if (VAR_10 & VAR_0)

   FUNC_3(VAR_11 & ~VAR_6);
  else

   FUNC_3(VAR_11 | VAR_6);
  break;
 default:
  return 1;
 }

 return 0;
}
