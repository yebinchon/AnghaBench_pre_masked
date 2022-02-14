
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct cpuinfo_mips *VAR_10)
{
 unsigned int VAR_11, VAR_12;

 VAR_11 = FUNC_1();

 if (VAR_11 & VAR_6)
  VAR_10->options |= VAR_1;
 if (VAR_11 & VAR_7)
  VAR_10->options |= VAR_2;
 if (VAR_11 & VAR_8)
  VAR_10->options |= VAR_3;
 if (!(VAR_11 & VAR_9)) {
  VAR_10->options |= VAR_4;






  FUNC_4(0);
  FUNC_2();

  FUNC_3(VAR_11 | VAR_5);
  FUNC_0();
  VAR_12 = FUNC_1();

  if (VAR_12 & VAR_5) {
   FUNC_3(VAR_11);
   VAR_10->options |= VAR_0;
  }
 }
}
