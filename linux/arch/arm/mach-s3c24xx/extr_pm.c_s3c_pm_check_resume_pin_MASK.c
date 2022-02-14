
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 unsigned long FUNC_3 (unsigned int) ;
 long VAR_2 ;
 long VAR_3 ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8 = FUNC_1(VAR_4);

 if (VAR_5 < 4)
  VAR_6 = VAR_3 & (1L<<VAR_5);
 else
  VAR_6 = VAR_2 & (1L<<VAR_5);

 VAR_7 = FUNC_3(VAR_4);

 if (!VAR_6) {
  if (VAR_7 == VAR_1)
   FUNC_0("Leaving IRQ %d (pin %d) as is\n", VAR_8, VAR_4);
 } else {
  if (VAR_7 == VAR_1) {
   FUNC_0("Disabling IRQ %d (pin %d)\n", VAR_8, VAR_4);
   FUNC_2(VAR_4, VAR_0);
  }
 }
}
