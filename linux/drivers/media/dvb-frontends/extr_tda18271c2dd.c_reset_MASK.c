
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tda_state {int m_SettlingTime; int m_IFLevelAnalog; int m_IFLevelDigital; int m_IFLevelDVBC; int m_IFLevelDVBT; int m_EP4; int m_EP3_Standby; int m_bMaster; int m_bFMInput; scalar_t__ m_Frequency; } ;



__attribute__((used)) static void FUNC_0(struct tda_state *VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 2;
 u32 VAR_3 = 7;
 u32 VAR_4 = 6;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0x06;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 100;

 VAR_0->m_Frequency = 0;
 VAR_0->m_SettlingTime = 100;
 VAR_0->m_IFLevelAnalog = (VAR_1 & 0x07) << 2;
 VAR_0->m_IFLevelDigital = (VAR_2 & 0x07) << 2;
 VAR_0->m_IFLevelDVBC = (VAR_3 & 0x07) << 2;
 VAR_0->m_IFLevelDVBT = (VAR_4 & 0x07) << 2;

 VAR_0->m_EP4 = 0x20;
 if (VAR_5 != 0)
  VAR_0->m_EP4 |= 0x40;

 VAR_0->m_EP3_Standby = ((VAR_6 & 0x07) << 5) | 0x0F;
 VAR_0->m_bMaster = (VAR_7 == 0);

 VAR_0->m_SettlingTime = VAR_9;

 VAR_0->m_bFMInput = (VAR_8 == 2);
}
