
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;

void FUNC_4(void)
{
 unsigned int VAR_5 = 0, VAR_6;


 VAR_5 |= FUNC_0(VAR_2) << VAR_4;





 FUNC_3(VAR_1, VAR_5);

 if (VAR_5)
  FUNC_1("Level-2 interrupts bitset %x\n", VAR_5);





 for (VAR_6 = VAR_4; VAR_6 < VAR_3; VAR_6++) {
  unsigned int VAR_7;

  VAR_7 = FUNC_2(VAR_0);
  VAR_7 &= ~(1 << VAR_6);
  FUNC_3(VAR_0, VAR_7);
 }
}
