
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum ams_irq { ____Placeholder_ams_irq } ams_irq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(enum ams_irq VAR_6, char VAR_7)
{
 if (VAR_6 & VAR_3) {
  u8 VAR_8 = FUNC_0(VAR_0);
  if (VAR_7)
   VAR_8 |= 0x80;
  else
   VAR_8 &= ~0x80;
  FUNC_1(VAR_0, VAR_8);
 }

 if (VAR_6 & VAR_5) {
  u8 VAR_9 = FUNC_0(VAR_1);
  if (VAR_7)
   VAR_9 |= 0x80;
  else
   VAR_9 &= ~0x80;
  FUNC_1(VAR_1, VAR_9);
 }

 if (VAR_6 & VAR_4) {
  u8 VAR_10 = FUNC_0(VAR_2);
  if (VAR_7)
   VAR_10 |= 0x80;
  else
   VAR_10 &= ~0x80;
  FUNC_1(VAR_2, VAR_10);
 }
}
