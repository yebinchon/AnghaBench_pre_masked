
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int processor_id; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int,int,int ) ;
 unsigned int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct cpuinfo_mips *VAR_3)
{
 unsigned int VAR_4 = VAR_3->processor_id & VAR_1;
 unsigned int VAR_5 = VAR_3->processor_id & VAR_2;
 int VAR_6 = 0;
 switch (VAR_4) {
 case 128:
  if (VAR_5 <= FUNC_1(2, 4, 0))
   VAR_6 = 1;
  if (VAR_5 == FUNC_1(2, 4, 0))
   FUNC_3(FUNC_2() | VAR_0);
  break;
 case 129:
  if (VAR_5 <= FUNC_1(1, 1, 0)) {
   VAR_6 = 1;
   FUNC_3(FUNC_2() | VAR_0);
  }
  break;
 default:
  FUNC_0();
 }

 return VAR_6;
}
