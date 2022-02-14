
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0);





 if (VAR_2 & 0x30000001) {
  VAR_3 &= ~(VAR_2 & VAR_1);
 } else {
  VAR_3 &= ~(VAR_2 & VAR_1);
  FUNC_1(VAR_3, VAR_0);
  VAR_3 |= (VAR_2 & VAR_1);
 }

 FUNC_1(VAR_3, VAR_0);
}
