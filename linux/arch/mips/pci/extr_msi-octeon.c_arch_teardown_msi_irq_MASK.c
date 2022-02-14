
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long long* VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned int VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if ((VAR_5 < VAR_0)
  || (VAR_5 > VAR_3 + VAR_0))
  FUNC_0("arch_teardown_msi_irq: Attempted to teardown illegal "
        "MSI interrupt (%d)", VAR_5);

 VAR_5 -= VAR_0;
 VAR_8 = VAR_5 / 64;
 VAR_9 = VAR_5 % 64;






 VAR_6 = 0;
 while ((VAR_9 + VAR_6 < 64) &&
        (VAR_4[VAR_8]
  & (1ull << (VAR_9 + VAR_6))))
  VAR_6++;
 VAR_6++;

 VAR_7 = (1 << VAR_6) - 1;

 VAR_7 <<= VAR_9;
 if ((VAR_1[VAR_8] & VAR_7) != VAR_7)
  FUNC_0("arch_teardown_msi_irq: Attempted to teardown MSI "
        "interrupt (%d) not in use", VAR_5);


 FUNC_1(&VAR_2);
 VAR_1[VAR_8] &= ~VAR_7;
 VAR_4[VAR_8] &= ~VAR_7;
 FUNC_2(&VAR_2);
}
