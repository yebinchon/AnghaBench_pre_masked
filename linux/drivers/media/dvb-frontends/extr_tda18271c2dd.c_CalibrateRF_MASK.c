
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tda_state {int* m_Regs; } ;
typedef int s32 ;


 int FUNC_0 (struct tda_state*,scalar_t__) ;
 int FUNC_1 (struct tda_state*,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct tda_state*,int*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int*,int*) ;
 int FUNC_5 (struct tda_state*,size_t) ;
 int FUNC_6 (struct tda_state*,size_t,size_t) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct tda_state *VAR_17,
         u8 VAR_18, u32 VAR_19, s32 *VAR_20)
{
 int VAR_21 = 0;
 u8 VAR_22[VAR_13];
 do {
  u8 VAR_23 = 0;
  u8 VAR_24 = 0;
  u8 VAR_25 = 0;
  u8 VAR_26 = 0;

  VAR_17->m_Regs[VAR_10] &= ~0x03;
  VAR_21 = FUNC_5(VAR_17, VAR_10);
  if (VAR_21 < 0)
   break;
  VAR_17->m_Regs[VAR_2] |= 0x03;
  VAR_21 = FUNC_5(VAR_17, VAR_2);
  if (VAR_21 < 0)
   break;



  if (VAR_17->m_Regs[VAR_12] != 0x83)
   VAR_17->m_Regs[VAR_9] |= 0x40;

  if (!(FUNC_3(VAR_14, VAR_19, &VAR_23) &&
   FUNC_3(VAR_15, VAR_19, &VAR_24) &&
   FUNC_4(VAR_16, VAR_19, &VAR_25, &VAR_26)))
   return -VAR_6;

  VAR_17->m_Regs[VAR_7] = (VAR_17->m_Regs[VAR_7] & ~0x07) | VAR_23;
  VAR_17->m_Regs[VAR_8] = (VAR_18 << 5) | VAR_24;

  VAR_17->m_Regs[VAR_0] = (VAR_17->m_Regs[VAR_0] & ~0x7C) | (VAR_25 << 4) | (VAR_26 << 2);

  VAR_21 = FUNC_6(VAR_17, VAR_7, VAR_9);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_5(VAR_17, VAR_0);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_4] |= 0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_4);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_5] |= 0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_5);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_1] = 0;
  VAR_21 = FUNC_5(VAR_17, VAR_1);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_3] &= ~0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_3);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_10] |= 0x03;
  VAR_21 = FUNC_6(VAR_17, VAR_10, VAR_11);
  if (VAR_21 < 0)
   break;

  VAR_21 = FUNC_0(VAR_17, VAR_19);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_1(VAR_17, VAR_19 + 1000000);
  if (VAR_21 < 0)
   break;

  FUNC_7(5);
  VAR_21 = FUNC_5(VAR_17, VAR_8);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_5(VAR_17, VAR_7);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_5(VAR_17, VAR_8);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_5(VAR_17, VAR_7);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_4] &= ~0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_4);
  if (VAR_21 < 0)
   break;

  VAR_17->m_Regs[VAR_5] &= ~0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_5);
  if (VAR_21 < 0)
   break;
  FUNC_7(10);

  VAR_17->m_Regs[VAR_3] |= 0x20;
  VAR_21 = FUNC_5(VAR_17, VAR_3);
  if (VAR_21 < 0)
   break;
  FUNC_7(60);

  VAR_17->m_Regs[VAR_10] &= ~0x03;
  VAR_17->m_Regs[VAR_9] &= ~0x40;
  VAR_17->m_Regs[VAR_2] &= ~0x03;
  VAR_21 = FUNC_5(VAR_17, VAR_2);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_6(VAR_17, VAR_9, VAR_10);
  if (VAR_21 < 0)
   break;
  VAR_21 = FUNC_5(VAR_17, VAR_7);
  if (VAR_21 < 0)
   break;

  VAR_21 = FUNC_2(VAR_17, VAR_22);
  if (VAR_21 < 0)
   break;

  *VAR_20 = VAR_22[VAR_1];

 } while (0);
 return VAR_21;
}
