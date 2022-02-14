
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda_state {int* m_Regs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct tda_state*,int*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct tda_state*,size_t) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tda_state *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;

 do {
  u8 VAR_7[16];
  VAR_4->m_Regs[VAR_1] |= 0x10;
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if (VAR_6 < 0)
   break;
  VAR_6 = FUNC_0(VAR_4, VAR_7);
  if (VAR_6 < 0)
   break;
  if (((VAR_7[VAR_1] & 0x0F) == 0 && (VAR_7[VAR_1] & 0x20) == 0x20) ||
      ((VAR_7[VAR_1] & 0x0F) == 8 && (VAR_7[VAR_1] & 0x20) == 0x00)) {
   VAR_4->m_Regs[VAR_1] ^= 0x20;
   VAR_6 = FUNC_1(VAR_4, VAR_1);
   if (VAR_6 < 0)
    break;
   FUNC_2(10);
   VAR_6 = FUNC_0(VAR_4, VAR_7);
   if (VAR_6 < 0)
    break;
  }
  *VAR_5 = (VAR_7[VAR_1] & 0x20)
    ? VAR_3[VAR_7[VAR_1] & 0x0F]
    : VAR_2[VAR_7[VAR_1] & 0x0F] ;
  VAR_4->m_Regs[VAR_1] &= ~0x10;
  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if (VAR_6 < 0)
   break;
  VAR_4->m_Regs[VAR_0] &= ~0x03;
  VAR_6 = FUNC_1(VAR_4, VAR_0);
  if (VAR_6 < 0)
   break;
 } while (0);

 return VAR_6;
}
