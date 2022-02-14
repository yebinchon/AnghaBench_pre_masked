
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ag71xx {int speed; int mii_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;



 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;

 if (!VAR_5->mii_base)
  return;

 switch (VAR_5->speed) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0();
 }

 VAR_7 = FUNC_1(VAR_5->mii_base);
 VAR_7 &= ~(VAR_3 << VAR_4);
 VAR_7 |= VAR_6 << VAR_4;
 FUNC_2(VAR_7, VAR_5->mii_base);
}
